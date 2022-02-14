
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_iommu_arch_data {TYPE_1__* iommu_dev; } ;
struct TYPE_4__ {struct omap_iommu_arch_data* iommu; } ;
struct device {TYPE_2__ archdata; int of_node; } ;
struct TYPE_3__ {int iommu; } ;


 int FUNC_0 (int *,struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct omap_iommu_arch_data*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct omap_iommu_arch_data *VAR_1 = VAR_0->archdata.iommu;

 if (!VAR_0->of_node || !VAR_1)
  return;

 FUNC_0(&VAR_1->iommu_dev->iommu, VAR_0);
 FUNC_1(VAR_0);

 VAR_0->archdata.iommu = ((void*)0);
 FUNC_2(VAR_1);

}
