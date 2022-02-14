
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 struct iommu_group* FUNC_0 (struct device*) ;
 int FUNC_1 (struct iommu_group*) ;

struct iommu_domain *FUNC_2(struct device *VAR_0)
{
 struct iommu_domain *VAR_1;
 struct iommu_group *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_1 = VAR_2->domain;

 FUNC_1(VAR_2);

 return VAR_1;
}
