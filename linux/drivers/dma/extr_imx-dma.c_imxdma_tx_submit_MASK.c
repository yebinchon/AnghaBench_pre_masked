
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxdma_engine {int lock; } ;
struct TYPE_2__ {int next; } ;
struct imxdma_channel {int ld_queue; TYPE_1__ ld_free; struct imxdma_engine* imxdma; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct imxdma_channel* FUNC_4 (int ) ;

__attribute__((used)) static dma_cookie_t FUNC_5(struct dma_async_tx_descriptor *VAR_0)
{
 struct imxdma_channel *VAR_1 = FUNC_4(VAR_0->chan);
 struct imxdma_engine *VAR_2 = VAR_1->imxdma;
 dma_cookie_t VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 FUNC_1(VAR_1->ld_free.next, &VAR_1->ld_queue);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_3(&VAR_2->lock, VAR_4);

 return VAR_3;
}
