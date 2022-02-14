
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_async_tx_descriptor {int cookie; } ;
struct txx9dmac_desc {int desc_node; int tx_list; struct dma_async_tx_descriptor txd; } ;
struct txx9dmac_chan {int free_list; int chan; } ;
struct dmaengine_desc_callback {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,struct txx9dmac_desc*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct dma_async_tx_descriptor*) ;
 int FUNC_5 (struct dmaengine_desc_callback*,int *) ;
 int FUNC_6 (struct dma_async_tx_descriptor*,struct dmaengine_desc_callback*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct txx9dmac_chan*,struct txx9dmac_desc*) ;

__attribute__((used)) static void
FUNC_10(struct txx9dmac_chan *VAR_0,
        struct txx9dmac_desc *VAR_1)
{
 struct dmaengine_desc_callback VAR_2;
 struct dma_async_tx_descriptor *VAR_3 = &VAR_1->txd;

 FUNC_1(FUNC_0(&VAR_0->chan), "descriptor %u %p complete\n",
   VAR_3->cookie, VAR_1);

 FUNC_2(VAR_3);
 FUNC_6(VAR_3, &VAR_2);

 FUNC_9(VAR_0, VAR_1);
 FUNC_8(&VAR_1->tx_list, &VAR_0->free_list);
 FUNC_7(&VAR_1->desc_node, &VAR_0->free_list);

 FUNC_3(VAR_3);




 FUNC_5(&VAR_2, ((void*)0));
 FUNC_4(VAR_3);
}
