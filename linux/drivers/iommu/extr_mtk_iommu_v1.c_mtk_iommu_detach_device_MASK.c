
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_iommu_data {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct mtk_iommu_data* iommu_priv; } ;


 TYPE_1__* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_iommu_data*,struct device*,int) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_0,
        struct device *VAR_1)
{
 struct mtk_iommu_data *VAR_2 = FUNC_0(VAR_1)->iommu_priv;

 if (!VAR_2)
  return;

 FUNC_1(VAR_2, VAR_1, 0);
}
