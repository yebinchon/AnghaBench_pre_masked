
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int lock; } ;
struct sun6i_vchan {int irq_type; TYPE_3__ vc; scalar_t__ cyclic; } ;
struct sun6i_pchan {TYPE_2__* desc; TYPE_2__* done; struct sun6i_vchan* vchan; } ;
struct TYPE_4__ {int dev; } ;
struct sun6i_dma_dev {int num_pchans; int task; int tasklet_shutdown; struct sun6i_pchan* pchans; scalar_t__ base; TYPE_1__ slave; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int vd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_4, void *VAR_5)
{
 struct sun6i_dma_dev *VAR_6 = VAR_5;
 struct sun6i_vchan *VAR_7;
 struct sun6i_pchan *VAR_8;
 int VAR_9, VAR_10, VAR_11 = VAR_3;
 u32 VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_6->num_pchans / VAR_0; VAR_9++) {
  VAR_12 = FUNC_3(VAR_6->base + FUNC_0(VAR_9));
  if (!VAR_12)
   continue;

  FUNC_2(VAR_6->slave.dev, "DMA irq status %s: 0x%x\n",
   VAR_9 ? "high" : "low", VAR_12);

  FUNC_9(VAR_12, VAR_6->base + FUNC_0(VAR_9));

  for (VAR_10 = 0; (VAR_10 < VAR_0) && VAR_12; VAR_10++) {
   VAR_8 = VAR_6->pchans + VAR_10;
   VAR_7 = VAR_8->vchan;
   if (VAR_7 && (VAR_12 & VAR_7->irq_type)) {
    if (VAR_7->cyclic) {
     FUNC_8(&VAR_8->desc->vd);
    } else {
     FUNC_4(&VAR_7->vc.lock);
     FUNC_7(&VAR_8->desc->vd);
     VAR_8->done = VAR_8->desc;
     FUNC_5(&VAR_7->vc.lock);
    }
   }

   VAR_12 = VAR_12 >> VAR_1;
  }

  if (!FUNC_1(&VAR_6->tasklet_shutdown))
   FUNC_6(&VAR_6->task);
  VAR_11 = VAR_2;
 }

 return VAR_11;
}
