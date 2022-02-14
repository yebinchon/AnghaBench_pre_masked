
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dfl_feature_platform_data {int dummy; } ;
struct dfl_afu {int dma_regions; } ;


 int VAR_0 ;
 struct dfl_afu* FUNC_0 (struct dfl_feature_platform_data*) ;

void FUNC_1(struct dfl_feature_platform_data *VAR_1)
{
 struct dfl_afu *VAR_2 = FUNC_0(VAR_1);

 VAR_2->dma_regions = VAR_0;
}
