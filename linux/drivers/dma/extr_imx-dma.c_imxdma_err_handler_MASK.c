
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxdma_engine {int dev; TYPE_1__* channel; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dma_tasklet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*,int,char*,char*,char*,char*) ;
 int FUNC_1 (struct imxdma_engine*,int ) ;
 int FUNC_2 (struct imxdma_engine*,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_11, void *VAR_12)
{
 struct imxdma_engine *VAR_13 = VAR_12;
 unsigned int VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;

 VAR_16 = FUNC_1(VAR_13, VAR_2);

 VAR_14 = FUNC_1(VAR_13, VAR_1) |
     FUNC_1(VAR_13, VAR_3) |
     FUNC_1(VAR_13, VAR_4) |
     FUNC_1(VAR_13, VAR_0);

 if (!VAR_14)
  return VAR_10;

 FUNC_2(VAR_13, VAR_16 & VAR_14, VAR_2);

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  if (!(VAR_14 & (1 << VAR_15)))
   continue;
  VAR_17 = 0;

  if (FUNC_1(VAR_13, VAR_1) & (1 << VAR_15)) {
   FUNC_2(VAR_13, 1 << VAR_15, VAR_1);
   VAR_17 |= VAR_7;
  }
  if (FUNC_1(VAR_13, VAR_3) & (1 << VAR_15)) {
   FUNC_2(VAR_13, 1 << VAR_15, VAR_3);
   VAR_17 |= VAR_8;
  }
  if (FUNC_1(VAR_13, VAR_4) & (1 << VAR_15)) {
   FUNC_2(VAR_13, 1 << VAR_15, VAR_4);
   VAR_17 |= VAR_9;
  }
  if (FUNC_1(VAR_13, VAR_0) & (1 << VAR_15)) {
   FUNC_2(VAR_13, 1 << VAR_15, VAR_0);
   VAR_17 |= VAR_6;
  }

  FUNC_3(&VAR_13->channel[VAR_15].dma_tasklet);

  FUNC_0(VAR_13->dev,
    "DMA timeout on channel %d -%s%s%s%s\n", VAR_15,
    VAR_17 & VAR_7 ? " burst" : "",
    VAR_17 & VAR_8 ? " request" : "",
    VAR_17 & VAR_9 ? " transfer" : "",
    VAR_17 & VAR_6 ? " buffer" : "");
 }
 return VAR_10;
}
