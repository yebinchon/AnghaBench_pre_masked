
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_iommu_arch_data {scalar_t__ iommu_dev; } ;
struct TYPE_2__ {struct omap_iommu_arch_data* iommu; } ;
struct device {TYPE_1__ archdata; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0)
{
 struct omap_iommu_arch_data *VAR_1 = VAR_0->archdata.iommu;
 int VAR_2 = 0;

 while (VAR_1->iommu_dev) {
  VAR_2++;
  VAR_1++;
 }

 return VAR_2;
}
