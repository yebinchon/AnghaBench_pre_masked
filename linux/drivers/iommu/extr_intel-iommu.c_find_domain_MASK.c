
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_domain {int dummy; } ;
struct dmar_domain {int dummy; } ;
struct device_domain_info {struct dmar_domain* domain; } ;
struct TYPE_2__ {struct device_domain_info* iommu; } ;
struct device {TYPE_1__ archdata; } ;


 struct device_domain_info* VAR_0 ;
 int FUNC_0 (struct iommu_domain*,struct device*) ;
 struct iommu_domain* FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device_domain_info*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct dmar_domain *FUNC_4(struct device *VAR_1)
{
 struct device_domain_info *VAR_2;

 if (FUNC_3(VAR_1->archdata.iommu == VAR_0)) {
  struct iommu_domain *VAR_3;

  VAR_1->archdata.iommu = ((void*)0);
  VAR_3 = FUNC_1(VAR_1);
  if (VAR_3)
   FUNC_0(VAR_3, VAR_1);
 }


 VAR_2 = VAR_1->archdata.iommu;

 if (FUNC_2(VAR_2))
  return VAR_2->domain;
 return ((void*)0);
}
