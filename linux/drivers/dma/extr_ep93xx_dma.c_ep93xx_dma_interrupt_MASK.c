
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_dma_desc {int complete; } ;
struct ep93xx_dma_chan {int lock; int tasklet; int flags; TYPE_1__* edma; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* hw_interrupt ) (struct ep93xx_dma_chan*) ;} ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ep93xx_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 struct ep93xx_dma_desc* FUNC_2 (struct ep93xx_dma_chan*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ep93xx_dma_chan*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_3, void *VAR_4)
{
 struct ep93xx_dma_chan *VAR_5 = VAR_4;
 struct ep93xx_dma_desc *VAR_6;
 irqreturn_t VAR_7 = VAR_1;

 FUNC_3(&VAR_5->lock);

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6) {
  FUNC_1(FUNC_0(VAR_5),
    "got interrupt while active list is empty\n");
  FUNC_4(&VAR_5->lock);
  return VAR_2;
 }

 switch (VAR_5->edma->hw_interrupt(VAR_5)) {
 case 129:
  VAR_6->complete = 1;
  FUNC_6(&VAR_5->tasklet);
  break;

 case 128:
  if (FUNC_7(VAR_0, &VAR_5->flags))
   FUNC_6(&VAR_5->tasklet);
  break;

 default:
  FUNC_1(FUNC_0(VAR_5), "unknown interrupt!\n");
  VAR_7 = VAR_2;
  break;
 }

 FUNC_4(&VAR_5->lock);
 return VAR_7;
}
