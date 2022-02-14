
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct k3_dma_dev {TYPE_1__ slave; int lock; int task; int chan_pending; } ;
struct TYPE_5__ {int lock; } ;
struct k3_dma_chan {TYPE_2__ vc; int node; int phy; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ,char*,TYPE_2__*) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 struct k3_dma_chan* FUNC_8 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_11(struct dma_chan *VAR_0)
{
 struct k3_dma_chan *VAR_1 = FUNC_8(VAR_0);
 struct k3_dma_dev *VAR_2 = FUNC_9(VAR_0->device);
 unsigned long VAR_3;

 FUNC_4(&VAR_1->vc.lock, VAR_3);

 if (FUNC_10(&VAR_1->vc)) {
  FUNC_3(&VAR_2->lock);
  if (!VAR_1->phy) {
   if (FUNC_2(&VAR_1->node)) {

    FUNC_1(&VAR_1->node, &VAR_2->chan_pending);

    FUNC_7(&VAR_2->task);
    FUNC_0(VAR_2->slave.dev, "vchan %p: issued\n", &VAR_1->vc);
   }
  }
  FUNC_5(&VAR_2->lock);
 } else
  FUNC_0(VAR_2->slave.dev, "vchan %p: nothing to issue\n", &VAR_1->vc);
 FUNC_6(&VAR_1->vc.lock, VAR_3);
}
