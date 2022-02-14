
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_domain {scalar_t__ mmu; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct ipmmu_vmsa_domain*) ;
 struct ipmmu_vmsa_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_2(struct iommu_domain *VAR_0)
{
 struct ipmmu_vmsa_domain *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->mmu)
  FUNC_0(VAR_1);
}
