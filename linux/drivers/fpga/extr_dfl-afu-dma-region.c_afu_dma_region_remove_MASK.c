
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dfl_feature_platform_data {TYPE_1__* dev; } ;
struct dfl_afu_dma_region {int node; scalar_t__ iova; } ;
struct dfl_afu {int dma_regions; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,unsigned long long) ;
 struct dfl_afu* FUNC_1 (struct dfl_feature_platform_data*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct dfl_feature_platform_data *VAR_0,
      struct dfl_afu_dma_region *VAR_1)
{
 struct dfl_afu *VAR_2;

 FUNC_0(&VAR_0->dev->dev, "del region (iova = %llx)\n",
  (unsigned long long)VAR_1->iova);

 VAR_2 = FUNC_1(VAR_0);
 FUNC_2(&VAR_1->node, &VAR_2->dma_regions);
}
