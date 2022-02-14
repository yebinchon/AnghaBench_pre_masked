
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_dma_chan {int rx_irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct xgene_dma_chan*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct xgene_dma_chan *VAR_1 = (struct xgene_dma_chan *)VAR_0;


 FUNC_1(VAR_1);


 FUNC_0(VAR_1->rx_irq);
}
