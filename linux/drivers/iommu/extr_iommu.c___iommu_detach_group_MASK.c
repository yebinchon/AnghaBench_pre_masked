
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {struct iommu_domain* default_domain; struct iommu_domain* domain; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iommu_group*,struct iommu_domain*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_2,
     struct iommu_group *VAR_3)
{
 int VAR_4;

 if (!VAR_3->default_domain) {
  FUNC_1(VAR_3, VAR_2,
        VAR_1);
  VAR_3->domain = ((void*)0);
  return;
 }

 if (VAR_3->domain == VAR_3->default_domain)
  return;


 VAR_4 = FUNC_1(VAR_3, VAR_3->default_domain,
      VAR_0);
 if (VAR_4 != 0)
  FUNC_0(1);
 else
  VAR_3->domain = VAR_3->default_domain;
}
