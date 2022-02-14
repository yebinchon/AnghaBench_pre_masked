
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_pata_data {int * dma_tx_channel; int * dma_rx_channel; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ep93xx_pata_data *VAR_0)
{
 if (VAR_0->dma_rx_channel) {
  FUNC_0(VAR_0->dma_rx_channel);
  VAR_0->dma_rx_channel = ((void*)0);
 }
 if (VAR_0->dma_tx_channel) {
  FUNC_0(VAR_0->dma_tx_channel);
  VAR_0->dma_tx_channel = ((void*)0);
 }
}
