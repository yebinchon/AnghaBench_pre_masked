
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_dma_ring {TYPE_1__* pdma; int * state; int num; } ;
struct TYPE_2__ {scalar_t__ csr_ring; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct xgene_dma_ring *VAR_3)
{
 int VAR_4;

 FUNC_0(VAR_3->num, VAR_3->pdma->csr_ring + VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3->state[VAR_4], VAR_3->pdma->csr_ring +
     VAR_2 + (VAR_4 * 4));
}
