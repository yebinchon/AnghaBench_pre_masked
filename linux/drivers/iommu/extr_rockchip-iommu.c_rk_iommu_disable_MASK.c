
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_mmu; int clocks; int num_clocks; int * bases; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rk_iommu*) ;
 int FUNC_4 (struct rk_iommu*) ;
 int FUNC_5 (struct rk_iommu*) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rk_iommu *VAR_2)
{
 int VAR_3;


 FUNC_0(FUNC_2(VAR_2->num_clocks, VAR_2->clocks));
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_mmu; VAR_3++) {
  FUNC_6(VAR_2->bases[VAR_3], VAR_1, 0);
  FUNC_6(VAR_2->bases[VAR_3], VAR_0, 0);
 }
 FUNC_4(VAR_2);
 FUNC_1(VAR_2->num_clocks, VAR_2->clocks);
}
