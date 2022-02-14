
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct msm_mmu {int dummy; } ;
struct msm_iommu {int domain; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 struct msm_iommu* FUNC_1 (struct msm_mmu*) ;

__attribute__((used)) static int FUNC_2(struct msm_mmu *VAR_0, uint64_t VAR_1, unsigned VAR_2)
{
 struct msm_iommu *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->domain, VAR_1, VAR_2);

 return 0;
}
