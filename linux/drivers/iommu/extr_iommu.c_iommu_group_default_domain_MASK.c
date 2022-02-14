
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {struct iommu_domain* default_domain; } ;
struct iommu_domain {int dummy; } ;



struct iommu_domain *FUNC_0(struct iommu_group *VAR_0)
{
 return VAR_0->default_domain;
}
