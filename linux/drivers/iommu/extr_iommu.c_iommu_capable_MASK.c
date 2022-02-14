
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bus_type {TYPE_1__* iommu_ops; } ;
typedef enum iommu_cap { ____Placeholder_iommu_cap } iommu_cap ;
struct TYPE_2__ {int (* capable ) (int) ;} ;


 int FUNC_0 (int) ;

bool FUNC_1(struct bus_type *VAR_0, enum iommu_cap VAR_1)
{
 if (!VAR_0->iommu_ops || !VAR_0->iommu_ops->capable)
  return 0;

 return VAR_0->iommu_ops->capable(VAR_1);
}
