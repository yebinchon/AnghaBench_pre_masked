
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sysmmu_pte_t ;
struct iommu_domain {int dummy; } ;
struct exynos_iommu_domain {int pgtablelock; int pgtable; } ;
typedef scalar_t__ phys_addr_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct exynos_iommu_domain* FUNC_14 (struct iommu_domain*) ;

__attribute__((used)) static phys_addr_t FUNC_15(struct iommu_domain *VAR_0,
       dma_addr_t VAR_1)
{
 struct exynos_iommu_domain *VAR_2 = FUNC_14(VAR_0);
 sysmmu_pte_t *VAR_3;
 unsigned long VAR_4;
 phys_addr_t VAR_5 = 0;

 FUNC_12(&VAR_2->pgtablelock, VAR_4);

 VAR_3 = FUNC_7(VAR_2->pgtable, VAR_1);

 if (FUNC_3(VAR_3)) {
  VAR_5 = FUNC_9(VAR_3) + FUNC_8(VAR_1);
 } else if (FUNC_2(VAR_3)) {
  VAR_3 = FUNC_6(VAR_3, VAR_1);

  if (FUNC_4(VAR_3))
   VAR_5 = FUNC_1(VAR_3) + FUNC_0(VAR_1);
  else if (FUNC_5(VAR_3))
   VAR_5 = FUNC_11(VAR_3) + FUNC_10(VAR_1);
 }

 FUNC_13(&VAR_2->pgtablelock, VAR_4);

 return VAR_5;
}
