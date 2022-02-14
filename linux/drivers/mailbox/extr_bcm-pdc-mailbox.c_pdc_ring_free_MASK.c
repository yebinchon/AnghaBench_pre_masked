
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vbase; int dmabase; } ;
struct TYPE_4__ {int * vbase; int dmabase; } ;
struct pdc_state {TYPE_1__ rx_ring_alloc; int ring_pool; TYPE_2__ tx_ring_alloc; } ;


 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct pdc_state *VAR_0)
{
 if (VAR_0->tx_ring_alloc.vbase) {
  FUNC_0(VAR_0->ring_pool, VAR_0->tx_ring_alloc.vbase,
         VAR_0->tx_ring_alloc.dmabase);
  VAR_0->tx_ring_alloc.vbase = ((void*)0);
 }

 if (VAR_0->rx_ring_alloc.vbase) {
  FUNC_0(VAR_0->ring_pool, VAR_0->rx_ring_alloc.vbase,
         VAR_0->rx_ring_alloc.dmabase);
  VAR_0->rx_ring_alloc.vbase = ((void*)0);
 }
}
