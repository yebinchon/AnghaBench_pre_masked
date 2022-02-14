
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ppc440spe_adma_desc_slot {int src_cnt; int rxor_cursor; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct ppc440spe_adma_desc_slot*,int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(
  struct ppc440spe_adma_desc_slot *VAR_0,
  dma_addr_t *VAR_1, int VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  FUNC_0(VAR_0, &VAR_0->rxor_cursor, VAR_3,
       VAR_0->src_cnt, (u32)VAR_1[VAR_3]);
 }
}
