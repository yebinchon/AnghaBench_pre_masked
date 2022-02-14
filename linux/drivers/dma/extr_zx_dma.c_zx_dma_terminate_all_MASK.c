
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zx_dma_phy {int * ds_done; int * ds_run; int * vchan; } ;
struct TYPE_5__ {int dev; } ;
struct zx_dma_dev {int lock; TYPE_1__ slave; } ;
struct TYPE_6__ {int lock; } ;
struct zx_dma_chan {TYPE_2__ vc; struct zx_dma_phy* phy; int node; } ;
struct dma_chan {int device; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 struct zx_dma_chan* FUNC_7 (struct dma_chan*) ;
 struct zx_dma_dev* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*,int *) ;
 int FUNC_11 (struct zx_dma_phy*,struct zx_dma_dev*) ;

__attribute__((used)) static int FUNC_12(struct dma_chan *VAR_1)
{
 struct zx_dma_chan *VAR_2 = FUNC_7(VAR_1);
 struct zx_dma_dev *VAR_3 = FUNC_8(VAR_1->device);
 struct zx_dma_phy *VAR_4 = VAR_2->phy;
 unsigned long VAR_5;
 FUNC_0(VAR_0);

 FUNC_1(VAR_3->slave.dev, "vchan %p: terminate all\n", &VAR_2->vc);


 FUNC_3(&VAR_3->lock);
 FUNC_2(&VAR_2->node);
 FUNC_5(&VAR_3->lock);


 FUNC_4(&VAR_2->vc.lock, VAR_5);
 FUNC_10(&VAR_2->vc, &VAR_0);
 if (VAR_4) {

  FUNC_11(VAR_4, VAR_3);
  VAR_2->phy = ((void*)0);
  VAR_4->vchan = ((void*)0);
  VAR_4->ds_run = ((void*)0);
  VAR_4->ds_done = ((void*)0);
 }
 FUNC_6(&VAR_2->vc.lock, VAR_5);
 FUNC_9(&VAR_2->vc, &VAR_0);

 return 0;
}
