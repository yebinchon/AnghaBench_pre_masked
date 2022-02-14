
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dfl_feature_platform_data {int lock; } ;
struct dfl_afu_mmio_region {int dummy; } ;
struct dfl_afu {int dummy; } ;


 int VAR_0 ;
 struct dfl_afu* FUNC_0 (struct dfl_feature_platform_data*) ;
 struct dfl_afu_mmio_region* FUNC_1 (struct dfl_afu*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dfl_feature_platform_data *VAR_1,
     u32 VAR_2,
     struct dfl_afu_mmio_region *VAR_3)
{
 struct dfl_afu_mmio_region *VAR_4;
 struct dfl_afu *VAR_5;
 int VAR_6 = 0;

 FUNC_2(&VAR_1->lock);
 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = FUNC_1(VAR_5, VAR_2);
 if (!VAR_4) {
  VAR_6 = -VAR_0;
  goto exit;
 }
 *VAR_3 = *VAR_4;
exit:
 FUNC_3(&VAR_1->lock);
 return VAR_6;
}
