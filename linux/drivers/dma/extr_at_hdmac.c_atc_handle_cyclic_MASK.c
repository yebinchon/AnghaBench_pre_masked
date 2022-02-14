
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {int dummy; } ;
struct at_dma_chan {int chan_common; } ;
struct at_desc {struct dma_async_tx_descriptor txd; } ;


 int VAR_0 ;
 struct at_desc* FUNC_0 (struct at_dma_chan*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct at_dma_chan*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct dma_async_tx_descriptor*,int *) ;

__attribute__((used)) static void FUNC_5(struct at_dma_chan *VAR_1)
{
 struct at_desc *VAR_2 = FUNC_0(VAR_1);
 struct dma_async_tx_descriptor *VAR_3 = &VAR_2->txd;

 FUNC_3(FUNC_1(&VAR_1->chan_common),
   "new cyclic period llp 0x%08x\n",
   FUNC_2(VAR_1, VAR_0));

 FUNC_4(VAR_3, ((void*)0));
}
