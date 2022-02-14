
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_mmu {int dummy; } ;
struct msm_iommu {int domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct msm_iommu*) ;
 struct msm_iommu* FUNC_2 (struct msm_mmu*) ;

__attribute__((used)) static void FUNC_3(struct msm_mmu *VAR_0)
{
 struct msm_iommu *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->domain);
 FUNC_1(VAR_1);
}
