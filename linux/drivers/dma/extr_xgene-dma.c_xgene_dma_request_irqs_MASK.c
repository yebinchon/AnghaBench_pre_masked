
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {char* name; int rx_irq; int dev; struct xgene_dma_chan* chan; int err_irq; } ;
struct xgene_dma {char* name; int rx_irq; int dev; struct xgene_dma* chan; int err_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgene_dma_chan*,char*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ,struct xgene_dma_chan*) ;
 int FUNC_3 (int ,int ,int ,int ,char*,struct xgene_dma_chan*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct xgene_dma *VAR_4)
{
 struct xgene_dma_chan *VAR_5;
 int VAR_6, VAR_7, VAR_8;


 VAR_6 = FUNC_3(VAR_4->dev, VAR_4->err_irq, VAR_3,
          0, "dma_error", VAR_4);
 if (VAR_6) {
  FUNC_1(VAR_4->dev,
   "Failed to register error IRQ %d\n", VAR_4->err_irq);
  return VAR_6;
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_5 = &VAR_4->chan[VAR_7];
  FUNC_5(VAR_5->rx_irq, VAR_0);
  VAR_6 = FUNC_3(VAR_5->dev, VAR_5->rx_irq,
           VAR_2,
           0, VAR_5->name, VAR_5);
  if (VAR_6) {
   FUNC_0(VAR_5, "Failed to register Rx IRQ %d\n",
     VAR_5->rx_irq);
   FUNC_2(VAR_4->dev, VAR_4->err_irq, VAR_4);

   for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
    VAR_5 = &VAR_4->chan[VAR_7];
    FUNC_4(VAR_5->rx_irq, VAR_0);
    FUNC_2(VAR_5->dev, VAR_5->rx_irq, VAR_5);
   }

   return VAR_6;
  }
 }

 return 0;
}
