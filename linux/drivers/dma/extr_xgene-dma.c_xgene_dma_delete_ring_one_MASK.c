
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma_ring {int * desc_vaddr; int desc_paddr; int size; TYPE_1__* pdma; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (struct xgene_dma_ring*) ;

__attribute__((used)) static void FUNC_2(struct xgene_dma_ring *VAR_0)
{

 FUNC_1(VAR_0);


 if (VAR_0->desc_vaddr) {
  FUNC_0(VAR_0->pdma->dev, VAR_0->size,
      VAR_0->desc_vaddr, VAR_0->desc_paddr);
  VAR_0->desc_vaddr = ((void*)0);
 }
}
