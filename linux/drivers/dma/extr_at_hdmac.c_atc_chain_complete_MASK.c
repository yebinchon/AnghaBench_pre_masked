
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_async_tx_descriptor {int cookie; } ;
struct TYPE_2__ {int device; } ;
struct at_dma_chan {int free_list; TYPE_1__ chan_common; } ;
struct at_dma {int memset_pool; } ;
struct at_desc {int memset_buffer; int desc_node; int tx_list; int memset_paddr; int memset_vaddr; struct dma_async_tx_descriptor txd; } ;


 int FUNC_0 (struct at_dma_chan*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dma_async_tx_descriptor*) ;
 int FUNC_7 (struct dma_async_tx_descriptor*,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 struct at_dma* FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(struct at_dma_chan *VAR_0, struct at_desc *VAR_1)
{
 struct dma_async_tx_descriptor *VAR_2 = &VAR_1->txd;
 struct at_dma *VAR_3 = FUNC_10(VAR_0->chan_common.device);

 FUNC_2(FUNC_1(&VAR_0->chan_common),
  "descriptor %u complete\n", VAR_2->cookie);


 if (!FUNC_0(VAR_0))
  FUNC_3(VAR_2);


 if (VAR_1->memset_buffer) {
  FUNC_5(VAR_3->memset_pool, VAR_1->memset_vaddr,
         VAR_1->memset_paddr);
  VAR_1->memset_buffer = 0;
 }


 FUNC_9(&VAR_1->tx_list, &VAR_0->free_list);

 FUNC_8(&VAR_1->desc_node, &VAR_0->free_list);

 FUNC_4(VAR_2);


 if (!FUNC_0(VAR_0)) {




  FUNC_7(VAR_2, ((void*)0));
 }

 FUNC_6(VAR_2);
}
