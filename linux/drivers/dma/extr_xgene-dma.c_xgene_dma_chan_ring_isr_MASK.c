
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int tasklet; int rx_irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct xgene_dma_chan *VAR_3 = (struct xgene_dma_chan *)VAR_2;

 FUNC_0(!VAR_3);





 FUNC_1(VAR_3->rx_irq);






 FUNC_2(&VAR_3->tasklet);

 return VAR_0;
}
