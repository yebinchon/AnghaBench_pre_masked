
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_chan {TYPE_1__* device; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct dma_chan* chan; } ;
struct TYPE_2__ {int (* device_issue_pending ) (struct dma_chan*) ;} ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (struct dma_chan*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 struct dma_async_tx_descriptor* FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;

void FUNC_7(struct dma_async_tx_descriptor *VAR_0)
{
 struct dma_async_tx_descriptor *VAR_1 = FUNC_5(VAR_0);
 struct dma_async_tx_descriptor *VAR_2;
 struct dma_chan *VAR_3;

 if (!VAR_1)
  return;


 FUNC_2(VAR_0);
 VAR_3 = VAR_1->chan;





 for (; VAR_1; VAR_1 = VAR_2) {
  FUNC_4(VAR_1);
  FUNC_3(VAR_1);
  VAR_2 = FUNC_5(VAR_1);
  if (VAR_2 && VAR_2->chan == VAR_3)
   FUNC_2(VAR_1);
  else
   VAR_2 = ((void*)0);
  FUNC_6(VAR_1);

  VAR_1->tx_submit(VAR_1);
 }

 VAR_3->device->device_issue_pending(VAR_3);
}
