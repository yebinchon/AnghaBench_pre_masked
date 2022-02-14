
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_ops {int (* remove_device ) (struct device*) ;} ;
struct device {scalar_t__ iommu_group; TYPE_1__* bus; } ;
struct TYPE_2__ {struct iommu_ops* iommu_ops; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct device *VAR_0)
{
 const struct iommu_ops *VAR_1 = VAR_0->bus->iommu_ops;

 if (VAR_0->iommu_group)
  VAR_1->remove_device(VAR_0);

 FUNC_0(VAR_0);
}
