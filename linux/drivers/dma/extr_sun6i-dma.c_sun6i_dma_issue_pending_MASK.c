
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct sun6i_vchan {TYPE_1__ vc; int node; int phy; } ;
struct sun6i_dma_dev {int lock; int task; int pending; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (struct dma_chan*) ;
 int FUNC_1 (int ,char*,TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;
 struct sun6i_dma_dev* FUNC_9 (int ) ;
 struct sun6i_vchan* FUNC_10 (struct dma_chan*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(struct dma_chan *VAR_0)
{
 struct sun6i_dma_dev *VAR_1 = FUNC_9(VAR_0->device);
 struct sun6i_vchan *VAR_2 = FUNC_10(VAR_0);
 unsigned long VAR_3;

 FUNC_5(&VAR_2->vc.lock, VAR_3);

 if (FUNC_11(&VAR_2->vc)) {
  FUNC_4(&VAR_1->lock);

  if (!VAR_2->phy && FUNC_3(&VAR_2->node)) {
   FUNC_2(&VAR_2->node, &VAR_1->pending);
   FUNC_8(&VAR_1->task);
   FUNC_1(FUNC_0(VAR_0), "vchan %p: issued\n",
    &VAR_2->vc);
  }

  FUNC_6(&VAR_1->lock);
 } else {
  FUNC_1(FUNC_0(VAR_0), "vchan %p: nothing to issue\n",
   &VAR_2->vc);
 }

 FUNC_7(&VAR_2->vc.lock, VAR_3);
}
