//
//  DataManager.h
//  ice
//
//  Created by Vicent Tsai on 15/10/30.
//  Copyright © 2015年 HeZhi Corp. All rights reserved.
//

@import Foundation;

typedef void (^ManagerCompletionBlock)(id responseObject);

@interface DataManager : NSObject

+ (instancetype)sharedManager;

- (void)getFeaturedQuotes:(ManagerCompletionBlock)completionBlock;
- (void)getCategories:(ManagerCompletionBlock)completionBlock;
- (void)getPageThumbnailWithPageId:(NSNumber *)pageId completionBlock:(ManagerCompletionBlock)completionBlock;
- (void)getKnowTip:(ManagerCompletionBlock)completionBlock;
- (void)getRandomTitle:(void (^)(NSString *title))completionBlock;
- (void)getPagesWithCate:(NSString *)category completionBlock:(void (^)(NSArray *categoryList))completionBlock;

@end
