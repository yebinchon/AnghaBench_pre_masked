
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct k3_dma_phy {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct k3_dma_dev {int lock; TYPE_1__ slave; } ;
struct k3_dma_chan {scalar_t__ status; int node; int vc; struct k3_dma_phy* phy; } ;
struct dma_chan {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (struct k3_dma_phy*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct k3_dma_chan* FUNC_5 (struct dma_chan*) ;
 struct k3_dma_dev* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_2)
{
 struct k3_dma_chan *VAR_3 = FUNC_5(VAR_2);
 struct k3_dma_dev *VAR_4 = FUNC_6(VAR_2->device);
 struct k3_dma_phy *VAR_5 = VAR_3->phy;

 FUNC_0(VAR_4->slave.dev, "vchan %p: pause\n", &VAR_3->vc);
 if (VAR_3->status == VAR_0) {
  VAR_3->status = VAR_1;
  if (VAR_5) {
   FUNC_1(VAR_5, 0);
  } else {
   FUNC_3(&VAR_4->lock);
   FUNC_2(&VAR_3->node);
   FUNC_4(&VAR_4->lock);
  }
 }

 return 0;
}
