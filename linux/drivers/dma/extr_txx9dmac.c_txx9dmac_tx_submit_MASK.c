
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cookie; } ;
struct txx9dmac_desc {int desc_node; TYPE_1__ txd; } ;
struct txx9dmac_chan {int lock; int queue; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,struct txx9dmac_desc*) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct txx9dmac_chan* FUNC_6 (int ) ;
 struct txx9dmac_desc* FUNC_7 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_8(struct dma_async_tx_descriptor *VAR_0)
{
 struct txx9dmac_desc *VAR_1 = FUNC_7(VAR_0);
 struct txx9dmac_chan *VAR_2 = FUNC_6(VAR_0->chan);
 dma_cookie_t VAR_3;

 FUNC_4(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_0);

 FUNC_1(FUNC_0(VAR_0->chan), "tx_submit: queued %u %p\n",
   VAR_1->txd.cookie, VAR_1);

 FUNC_3(&VAR_1->desc_node, &VAR_2->queue);
 FUNC_5(&VAR_2->lock);

 return VAR_3;
}
