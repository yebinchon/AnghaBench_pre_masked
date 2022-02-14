
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {int chan; } ;
struct at_dma_chan {int lock; int queue; int active_list; } ;
struct TYPE_2__ {int cookie; } ;
struct at_desc {int desc_node; TYPE_1__ txd; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct at_dma_chan*,struct at_desc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 struct at_dma_chan* FUNC_8 (int ) ;
 struct at_desc* FUNC_9 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_10(struct dma_async_tx_descriptor *VAR_0)
{
 struct at_desc *VAR_1 = FUNC_9(VAR_0);
 struct at_dma_chan *VAR_2 = FUNC_8(VAR_0->chan);
 dma_cookie_t VAR_3;
 unsigned long VAR_4;

 FUNC_6(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_3(VAR_0);

 if (FUNC_5(&VAR_2->active_list)) {
  FUNC_2(FUNC_1(VAR_0->chan), "tx_submit: started %u\n",
    VAR_1->txd.cookie);
  FUNC_0(VAR_2, VAR_1);
  FUNC_4(&VAR_1->desc_node, &VAR_2->active_list);
 } else {
  FUNC_2(FUNC_1(VAR_0->chan), "tx_submit: queued %u\n",
    VAR_1->txd.cookie);
  FUNC_4(&VAR_1->desc_node, &VAR_2->queue);
 }

 FUNC_7(&VAR_2->lock, VAR_4);

 return VAR_3;
}
