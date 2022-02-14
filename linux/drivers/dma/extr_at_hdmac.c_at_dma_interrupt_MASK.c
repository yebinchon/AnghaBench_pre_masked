
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct at_dma_chan {int mask; int tasklet; int status; } ;
struct TYPE_2__ {int chancnt; int dev; } ;
struct at_dma {struct at_dma_chan* chan; TYPE_1__ dma_common; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (struct at_dma*,int ) ;
 int FUNC_5 (struct at_dma*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 struct at_dma *VAR_8 = (struct at_dma *)VAR_7;
 struct at_dma_chan *VAR_9;
 int VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 int VAR_14 = VAR_5;

 do {
  VAR_13 = FUNC_4(VAR_8, VAR_2);
  VAR_11 = FUNC_4(VAR_8, VAR_3);
  VAR_12 = VAR_11 & VAR_13;

  if (!VAR_12)
   break;

  FUNC_3(VAR_8->dma_common.dev,
   "interrupt: status = 0x%08x, 0x%08x, 0x%08x\n",
    VAR_11, VAR_13, VAR_12);

  for (VAR_10 = 0; VAR_10 < VAR_8->dma_common.chancnt; VAR_10++) {
   VAR_9 = &VAR_8->chan[VAR_10];
   if (VAR_12 & (FUNC_0(VAR_10) | FUNC_1(VAR_10))) {
    if (VAR_12 & FUNC_1(VAR_10)) {

     FUNC_5(VAR_8, VAR_1,
      FUNC_2(VAR_10) | VAR_9->mask);

     FUNC_6(VAR_0, &VAR_9->status);
    }
    FUNC_7(&VAR_9->tasklet);
    VAR_14 = VAR_4;
   }
  }

 } while (VAR_12);

 return VAR_14;
}
