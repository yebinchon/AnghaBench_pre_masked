
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct zx_dma_dev {TYPE_1__ slave; int lock; int chan_pending; } ;
struct TYPE_5__ {int lock; } ;
struct zx_dma_chan {TYPE_2__ vc; int node; int phy; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ,char*,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 struct zx_dma_chan* FUNC_7 (struct dma_chan*) ;
 struct zx_dma_dev* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (struct zx_dma_dev*) ;

__attribute__((used)) static void FUNC_11(struct dma_chan *VAR_0)
{
 struct zx_dma_chan *VAR_1 = FUNC_7(VAR_0);
 struct zx_dma_dev *VAR_2 = FUNC_8(VAR_0->device);
 unsigned long VAR_3;
 int VAR_4 = 0;

 FUNC_4(&VAR_1->vc.lock, VAR_3);

 if (FUNC_9(&VAR_1->vc)) {
  FUNC_3(&VAR_2->lock);
  if (!VAR_1->phy && FUNC_2(&VAR_1->node)) {

   FUNC_1(&VAR_1->node, &VAR_2->chan_pending);
   VAR_4 = 1;
   FUNC_0(VAR_2->slave.dev, "vchan %p: issued\n", &VAR_1->vc);
  }
  FUNC_5(&VAR_2->lock);
 } else {
  FUNC_0(VAR_2->slave.dev, "vchan %p: nothing to issue\n", &VAR_1->vc);
 }
 FUNC_6(&VAR_1->vc.lock, VAR_3);

 if (VAR_4)
  FUNC_10(VAR_2);
}
