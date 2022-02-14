
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cookie; } ;
struct virt_dma_desc {TYPE_3__ tx; int node; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct virt_dma_chan {int (* desc_free ) (struct virt_dma_desc*) ;TYPE_2__ chan; int lock; } ;
struct dma_async_tx_descriptor {int chan; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,struct virt_dma_chan*,struct virt_dma_desc*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct virt_dma_desc*) ;
 struct virt_dma_chan* FUNC_5 (int ) ;
 struct virt_dma_desc* FUNC_6 (struct dma_async_tx_descriptor*) ;

int FUNC_7(struct dma_async_tx_descriptor *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_5(VAR_0->chan);
 struct virt_dma_desc *VAR_2 = FUNC_6(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_1->lock, VAR_3);
 FUNC_1(&VAR_2->node);
 FUNC_3(&VAR_1->lock, VAR_3);

 FUNC_0(VAR_1->chan.device->dev, "vchan %p: txd %p[%x]: freeing\n",
  VAR_1, VAR_2, VAR_2->tx.cookie);
 VAR_1->desc_free(VAR_2);
 return 0;
}
