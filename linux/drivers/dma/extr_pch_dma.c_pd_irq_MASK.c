
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pch_dma_chan {int tasklet; int err_status; } ;
struct TYPE_2__ {int chancnt; int dev; } ;
struct pch_dma {struct pch_dma_chan* channels; TYPE_1__ dma; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct pch_dma*,int ) ;
 int FUNC_5 (struct pch_dma*,int ,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 struct pch_dma *VAR_6 = (struct pch_dma *)VAR_5;
 struct pch_dma_chan *VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11 = VAR_1;
 int VAR_12 = VAR_1;

 VAR_8 = FUNC_4(VAR_6, VAR_2);
 VAR_9 = FUNC_4(VAR_6, VAR_3);

 FUNC_3(VAR_6->dma.dev, "pd_irq sts0: %x\n", VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_6->dma.chancnt; VAR_10++) {
  VAR_7 = &VAR_6->channels[VAR_10];

  if (VAR_10 < 8) {
   if (VAR_8 & FUNC_2(VAR_10)) {
    if (VAR_8 & FUNC_0(VAR_10))
     FUNC_6(0, &VAR_7->err_status);

    FUNC_7(&VAR_7->tasklet);
    VAR_11 = VAR_0;
   }
  } else {
   if (VAR_9 & FUNC_2(VAR_10 - 8)) {
    if (VAR_9 & FUNC_1(VAR_10))
     FUNC_6(0, &VAR_7->err_status);

    FUNC_7(&VAR_7->tasklet);
    VAR_12 = VAR_0;
   }
  }
 }


 if (VAR_11)
  FUNC_5(VAR_6, VAR_2, VAR_8);
 if (VAR_12)
  FUNC_5(VAR_6, VAR_3, VAR_9);

 return VAR_11 | VAR_12;
}
