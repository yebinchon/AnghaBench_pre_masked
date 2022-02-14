
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct k3_dma_phy {int dummy; } ;
struct TYPE_3__ {int dev; } ;
struct k3_dma_dev {int lock; int chan_pending; TYPE_1__ slave; } ;
struct TYPE_4__ {int lock; int desc_issued; } ;
struct k3_dma_chan {scalar_t__ status; TYPE_2__ vc; int node; struct k3_dma_phy* phy; } ;
struct dma_chan {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,TYPE_2__*) ;
 int FUNC_1 (struct k3_dma_phy*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 struct k3_dma_chan* FUNC_8 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct dma_chan *VAR_2)
{
 struct k3_dma_chan *VAR_3 = FUNC_8(VAR_2);
 struct k3_dma_dev *VAR_4 = FUNC_9(VAR_2->device);
 struct k3_dma_phy *VAR_5 = VAR_3->phy;
 unsigned long VAR_6;

 FUNC_0(VAR_4->slave.dev, "vchan %p: resume\n", &VAR_3->vc);
 FUNC_5(&VAR_3->vc.lock, VAR_6);
 if (VAR_3->status == VAR_1) {
  VAR_3->status = VAR_0;
  if (VAR_5) {
   FUNC_1(VAR_5, 1);
  } else if (!FUNC_3(&VAR_3->vc.desc_issued)) {
   FUNC_4(&VAR_4->lock);
   FUNC_2(&VAR_3->node, &VAR_4->chan_pending);
   FUNC_6(&VAR_4->lock);
  }
 }
 FUNC_7(&VAR_3->vc.lock, VAR_6);

 return 0;
}
