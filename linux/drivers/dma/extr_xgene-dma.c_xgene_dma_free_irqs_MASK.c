
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int rx_irq; int dev; struct xgene_dma_chan* chan; int err_irq; } ;
struct xgene_dma {int rx_irq; int dev; struct xgene_dma* chan; int err_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct xgene_dma_chan*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct xgene_dma *VAR_2)
{
 struct xgene_dma_chan *VAR_3;
 int VAR_4;


 FUNC_0(VAR_2->dev, VAR_2->err_irq, VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2->chan[VAR_4];
  FUNC_1(VAR_3->rx_irq, VAR_0);
  FUNC_0(VAR_3->dev, VAR_3->rx_irq, VAR_3);
 }
}
