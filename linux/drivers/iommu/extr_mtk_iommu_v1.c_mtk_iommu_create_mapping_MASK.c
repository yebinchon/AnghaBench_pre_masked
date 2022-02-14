
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct of_phandle_args {int args_count; int args; TYPE_2__* np; } ;
struct mtk_iommu_data {struct device* dev; } ;
struct iommu_fwspec {struct mtk_iommu_data* iommu_priv; int * ops; } ;
struct dma_iommu_mapping {int dummy; } ;
struct TYPE_3__ {struct dma_iommu_mapping* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct TYPE_4__ {int fwnode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dma_iommu_mapping*) ;
 int FUNC_1 (struct dma_iommu_mapping*) ;
 scalar_t__ FUNC_2 (int) ;
 struct dma_iommu_mapping* FUNC_3 (int *,int ,unsigned long long) ;
 int FUNC_4 (struct device*,char*,int) ;
 struct iommu_fwspec* FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int ,int) ;
 int FUNC_7 (struct device*,int *,int *) ;
 int VAR_1 ;
 struct platform_device* FUNC_8 (TYPE_2__*) ;
 int VAR_2 ;
 struct mtk_iommu_data* FUNC_9 (struct platform_device*) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_3,
        struct of_phandle_args *VAR_4)
{
 struct iommu_fwspec *VAR_5 = FUNC_5(VAR_3);
 struct mtk_iommu_data *VAR_6;
 struct platform_device *VAR_7;
 struct dma_iommu_mapping *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 if (VAR_4->args_count != 1) {
  FUNC_4(VAR_3, "invalid #iommu-cells(%d) property for IOMMU\n",
   VAR_4->args_count);
  return -VAR_0;
 }

 if (!VAR_5) {
  VAR_10 = FUNC_7(VAR_3, &VAR_4->np->fwnode, &VAR_1);
  if (VAR_10)
   return VAR_10;
  VAR_5 = FUNC_5(VAR_3);
 } else if (FUNC_5(VAR_3)->ops != &VAR_1) {
  return -VAR_0;
 }

 if (!VAR_5->iommu_priv) {

  VAR_7 = FUNC_8(VAR_4->np);
  if (FUNC_2(!VAR_7))
   return -VAR_0;

  VAR_5->iommu_priv = FUNC_9(VAR_7);
 }

 VAR_10 = FUNC_6(VAR_3, VAR_4->args, 1);
 if (VAR_10)
  return VAR_10;

 VAR_6 = VAR_5->iommu_priv;
 VAR_9 = VAR_6->dev;
 VAR_8 = VAR_9->archdata.iommu;
 if (!VAR_8) {

  VAR_8 = FUNC_3(&VAR_2,
      0, 1ULL << 32);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);

  VAR_9->archdata.iommu = VAR_8;
 }

 return 0;
}
