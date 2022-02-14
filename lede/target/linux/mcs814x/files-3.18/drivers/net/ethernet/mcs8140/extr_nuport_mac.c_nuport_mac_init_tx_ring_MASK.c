
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nuport_mac_priv {int first_pkt; scalar_t__* valid_txskb; int ** tx_skb; scalar_t__ tx_full; scalar_t__ dma_tx; scalar_t__ cur_tx; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct nuport_mac_priv *VAR_1)
{
 int VAR_2;

 VAR_1->cur_tx = VAR_1->dma_tx = VAR_1->tx_full = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_1->tx_skb[VAR_2] = ((void*)0);
  VAR_1->valid_txskb[VAR_2] = 0;
 }
 VAR_1->first_pkt = 1;
}
