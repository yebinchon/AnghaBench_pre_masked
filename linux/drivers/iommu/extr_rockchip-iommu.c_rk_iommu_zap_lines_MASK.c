
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_iommu {int num_mmu; int * bases; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct rk_iommu *VAR_2, dma_addr_t VAR_3,
          size_t VAR_4)
{
 int VAR_5;
 dma_addr_t VAR_6 = VAR_3 + VAR_4;




 for (VAR_5 = 0; VAR_5 < VAR_2->num_mmu; VAR_5++) {
  dma_addr_t VAR_7;

  for (VAR_7 = VAR_3; VAR_7 < VAR_6; VAR_7 += VAR_1)
   FUNC_0(VAR_2->bases[VAR_5], VAR_0, VAR_7);
 }
}
