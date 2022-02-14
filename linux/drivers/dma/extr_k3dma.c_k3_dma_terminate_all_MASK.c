
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct k3_dma_phy {int * ds_done; TYPE_2__* ds_run; int * vchan; } ;
struct TYPE_6__ {int dev; } ;
struct k3_dma_dev {int lock; TYPE_1__ slave; } ;
struct TYPE_8__ {int lock; } ;
struct k3_dma_chan {TYPE_3__ vc; struct k3_dma_phy* phy; int node; } ;
struct dma_chan {int device; } ;
struct TYPE_7__ {int vd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_2 (struct k3_dma_phy*,struct k3_dma_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 struct k3_dma_chan* FUNC_8 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct dma_chan *VAR_1)
{
 struct k3_dma_chan *VAR_2 = FUNC_8(VAR_1);
 struct k3_dma_dev *VAR_3 = FUNC_9(VAR_1->device);
 struct k3_dma_phy *VAR_4 = VAR_2->phy;
 unsigned long VAR_5;
 FUNC_0(VAR_0);

 FUNC_1(VAR_3->slave.dev, "vchan %p: terminate all\n", &VAR_2->vc);


 FUNC_4(&VAR_3->lock);
 FUNC_3(&VAR_2->node);
 FUNC_6(&VAR_3->lock);


 FUNC_5(&VAR_2->vc.lock, VAR_5);
 FUNC_11(&VAR_2->vc, &VAR_0);
 if (VAR_4) {

  FUNC_2(VAR_4, VAR_3);
  VAR_2->phy = ((void*)0);
  VAR_4->vchan = ((void*)0);
  if (VAR_4->ds_run) {
   FUNC_12(&VAR_4->ds_run->vd);
   VAR_4->ds_run = ((void*)0);
  }
  VAR_4->ds_done = ((void*)0);
 }
 FUNC_7(&VAR_2->vc.lock, VAR_5);
 FUNC_10(&VAR_2->vc, &VAR_0);

 return 0;
}
