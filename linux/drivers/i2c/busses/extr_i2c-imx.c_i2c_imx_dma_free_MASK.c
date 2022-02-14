
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_i2c_struct {struct imx_i2c_dma* dma; } ;
struct imx_i2c_dma {int * chan_using; int * chan_rx; int * chan_tx; scalar_t__ dma_len; scalar_t__ dma_buf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct imx_i2c_struct *VAR_0)
{
 struct imx_i2c_dma *VAR_1 = VAR_0->dma;

 VAR_1->dma_buf = 0;
 VAR_1->dma_len = 0;

 FUNC_0(VAR_1->chan_tx);
 VAR_1->chan_tx = ((void*)0);

 FUNC_0(VAR_1->chan_rx);
 VAR_1->chan_rx = ((void*)0);

 VAR_1->chan_using = ((void*)0);
}
