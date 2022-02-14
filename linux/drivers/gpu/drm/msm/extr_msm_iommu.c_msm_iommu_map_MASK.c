
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sg_table {int nents; int sgl; } ;
struct msm_mmu {int dummy; } ;
struct msm_iommu {int domain; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ,int ,int ,int ,int) ;
 struct msm_iommu* FUNC_2 (struct msm_mmu*) ;

__attribute__((used)) static int FUNC_3(struct msm_mmu *VAR_1, uint64_t VAR_2,
  struct sg_table *VAR_3, unsigned VAR_4, int VAR_5)
{
 struct msm_iommu *VAR_6 = FUNC_2(VAR_1);
 size_t VAR_7;

 VAR_7 = FUNC_1(VAR_6->domain, VAR_2, VAR_3->sgl, VAR_3->nents, VAR_5);
 FUNC_0(!VAR_7);

 return (VAR_7 == VAR_4) ? 0 : -VAR_0;
}
