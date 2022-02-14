
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_i2c_dma {int * chan_using; int * chan_rx; int * chan_tx; scalar_t__ dma_len; scalar_t__ dma_buf; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct stm32_i2c_dma *VAR_0)
{
 VAR_0->dma_buf = 0;
 VAR_0->dma_len = 0;

 FUNC_0(VAR_0->chan_tx);
 VAR_0->chan_tx = ((void*)0);

 FUNC_0(VAR_0->chan_rx);
 VAR_0->chan_rx = ((void*)0);

 VAR_0->chan_using = ((void*)0);
}
