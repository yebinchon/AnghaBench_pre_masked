
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_domain {int iommu_superpage; int iommu_snooping; } ;


 int FUNC_0 (struct dmar_domain*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dmar_domain *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->iommu_snooping = FUNC_1(((void*)0));
 VAR_0->iommu_superpage = FUNC_2(((void*)0));
}
