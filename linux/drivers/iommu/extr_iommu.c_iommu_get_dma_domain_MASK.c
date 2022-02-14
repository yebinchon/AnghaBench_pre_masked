
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct device {TYPE_1__* iommu_group; } ;
struct TYPE_2__ {struct iommu_domain* default_domain; } ;



struct iommu_domain *FUNC_0(struct device *VAR_0)
{
 return VAR_0->iommu_group->default_domain;
}
