
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int cookie; int chan; } ;
struct virt_dma_desc {int node; TYPE_3__ tx; } ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct virt_dma_chan {int task; int desc_completed; TYPE_2__ chan; } ;
typedef int dma_cookie_t ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,struct virt_dma_desc*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct virt_dma_chan* FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct virt_dma_desc *VAR_0)
{
 struct virt_dma_chan *VAR_1 = FUNC_4(VAR_0->tx.chan);
 dma_cookie_t VAR_2;

 VAR_2 = VAR_0->tx.cookie;
 FUNC_1(&VAR_0->tx);
 FUNC_0(VAR_1->chan.device->dev, "txd %p[%x]: marked complete\n",
   VAR_0, VAR_2);
 FUNC_2(&VAR_0->node, &VAR_1->desc_completed);

 FUNC_3(&VAR_1->task);
}
