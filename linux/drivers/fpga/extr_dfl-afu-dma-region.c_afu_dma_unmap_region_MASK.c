
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dfl_feature_platform_data {int lock; } ;
struct dfl_afu_dma_region {int length; int iova; scalar_t__ in_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dfl_afu_dma_region* FUNC_0 (struct dfl_feature_platform_data*,int ) ;
 int FUNC_1 (struct dfl_feature_platform_data*,struct dfl_afu_dma_region*) ;
 int FUNC_2 (struct dfl_feature_platform_data*,struct dfl_afu_dma_region*) ;
 int FUNC_3 (struct dfl_feature_platform_data*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct dfl_afu_dma_region*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct dfl_feature_platform_data *VAR_3, u64 VAR_4)
{
 struct dfl_afu_dma_region *VAR_5;

 FUNC_6(&VAR_3->lock);
 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (!VAR_5) {
  FUNC_7(&VAR_3->lock);
  return -VAR_2;
 }

 if (VAR_5->in_use) {
  FUNC_7(&VAR_3->lock);
  return -VAR_1;
 }

 FUNC_1(VAR_3, VAR_5);
 FUNC_7(&VAR_3->lock);

 FUNC_4(FUNC_3(VAR_3),
         VAR_5->iova, VAR_5->length, VAR_0);
 FUNC_2(VAR_3, VAR_5);
 FUNC_5(VAR_5);

 return 0;
}
