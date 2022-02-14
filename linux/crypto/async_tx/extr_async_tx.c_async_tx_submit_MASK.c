
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_chan {int dummy; } ;
struct dma_async_tx_descriptor {int (* tx_submit ) (struct dma_async_tx_descriptor*) ;struct dma_chan* chan; int callback_param; int callback; } ;
struct async_submit_ctl {int flags; int cb_param; int cb_fn; struct dma_async_tx_descriptor* depend_tx; } ;
typedef enum submit_disposition { ____Placeholder_submit_disposition } submit_disposition ;


 int VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*,struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct dma_async_tx_descriptor*) ;
 int FUNC_6 (struct dma_async_tx_descriptor*,struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct dma_async_tx_descriptor*) ;
 int FUNC_8 (struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_9 (struct dma_async_tx_descriptor*) ;
 scalar_t__ FUNC_10 (struct dma_async_tx_descriptor*) ;
 int FUNC_11 (struct dma_async_tx_descriptor*) ;

void
FUNC_12(struct dma_chan *VAR_1, struct dma_async_tx_descriptor *VAR_2,
  struct async_submit_ctl *VAR_3)
{
 struct dma_async_tx_descriptor *VAR_4 = VAR_3->depend_tx;

 VAR_2->callback = VAR_3->cb_fn;
 VAR_2->callback_param = VAR_3->cb_param;

 if (VAR_4) {
  enum submit_disposition VAR_5;







  FUNC_0(FUNC_3(VAR_4) || FUNC_9(VAR_4) ||
         FUNC_10(VAR_2));




  FUNC_8(VAR_4);
  if (FUNC_10(VAR_4)) {




   if (VAR_4->chan == VAR_1) {
    FUNC_6(VAR_4, VAR_2);
    VAR_5 = 128;
   } else
    VAR_5 = 130;
  } else {



   if (VAR_4->chan == VAR_1)
    VAR_5 = 129;
   else
    VAR_5 = 130;
  }
  FUNC_11(VAR_4);

  switch (VAR_5) {
  case 128:
   break;
  case 130:
   FUNC_2(VAR_4, VAR_2);
   break;
  case 129:
   FUNC_7(VAR_2);
   VAR_2->tx_submit(VAR_2);
   break;
  }
 } else {
  FUNC_7(VAR_2);
  VAR_2->tx_submit(VAR_2);
 }

 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_2);

 if (VAR_4)
  FUNC_1(VAR_4);
}
