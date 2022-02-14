
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {TYPE_1__* ops; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* aux_detach_dev ) (struct iommu_domain*,struct device*) ;} ;


 int FUNC_0 (struct iommu_domain*,struct device*) ;
 int FUNC_1 (struct device*) ;

void FUNC_2(struct iommu_domain *VAR_0, struct device *VAR_1)
{
 if (VAR_0->ops->aux_detach_dev) {
  VAR_0->ops->aux_detach_dev(VAR_0, VAR_1);
  FUNC_1(VAR_1);
 }
}
