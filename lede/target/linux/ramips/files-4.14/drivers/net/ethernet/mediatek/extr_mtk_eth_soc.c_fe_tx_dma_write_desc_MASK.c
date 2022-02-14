
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fe_tx_ring {int * tx_dma; } ;
struct TYPE_3__ {int txd4; } ;
struct fe_map_state {size_t ring_idx; int def_txd4; TYPE_1__ txd; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct fe_tx_ring *VAR_0, struct fe_map_state *VAR_1)
{
 FUNC_1(&VAR_1->txd, &VAR_0->tx_dma[VAR_1->ring_idx]);
 FUNC_2(&VAR_1->txd, 0, sizeof(VAR_1->txd));
 VAR_1->txd.txd4 = VAR_1->def_txd4;
 VAR_1->ring_idx = FUNC_0(VAR_1->ring_idx);
}
