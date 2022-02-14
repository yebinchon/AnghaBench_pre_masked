
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virt_dma_desc {int node; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct virt_dma_chan {TYPE_2__ chan; int lock; int desc_submitted; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,struct virt_dma_chan*,struct virt_dma_desc*,int ) ;
 int FUNC_1 (struct dma_async_tx_descriptor*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct virt_dma_chan* FUNC_5 (int ) ;
 struct virt_dma_desc* FUNC_6 (struct dma_async_tx_descriptor*) ;

dma_cookie_t FUNC_7(struct dma_async_tx_descriptor *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_5(VAR_0->chan);
 struct virt_dma_desc *VAR_2 = FUNC_6(VAR_0);
 unsigned long VAR_3;
 dma_cookie_t VAR_4;

 FUNC_3(&VAR_1->lock, VAR_3);
 VAR_4 = FUNC_1(VAR_0);

 FUNC_2(&VAR_2->node, &VAR_1->desc_submitted);
 FUNC_4(&VAR_1->lock, VAR_3);

 FUNC_0(VAR_1->chan.device->dev, "vchan %p: txd %p[%x]: submitted\n",
  VAR_1, VAR_2, VAR_4);

 return VAR_4;
}
