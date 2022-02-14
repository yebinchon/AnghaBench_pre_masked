
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_iommu_arch_data {TYPE_2__* iommu_dev; } ;
struct iommu_group {int dummy; } ;
struct TYPE_3__ {struct omap_iommu_arch_data* iommu; } ;
struct device {TYPE_1__ archdata; } ;
struct TYPE_4__ {int group; } ;


 int VAR_0 ;
 struct iommu_group* FUNC_0 (int ) ;
 struct iommu_group* FUNC_1 (int ) ;

__attribute__((used)) static struct iommu_group *FUNC_2(struct device *VAR_1)
{
 struct omap_iommu_arch_data *VAR_2 = VAR_1->archdata.iommu;
 struct iommu_group *VAR_3 = FUNC_0(-VAR_0);

 if (VAR_2->iommu_dev)
  VAR_3 = FUNC_1(VAR_2->iommu_dev->group);

 return VAR_3;
}
