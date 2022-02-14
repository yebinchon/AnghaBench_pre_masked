
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ep93xx_dma_chan {TYPE_1__* edma; } ;
struct dma_chan {int dummy; } ;
struct TYPE_2__ {int (* hw_synchronize ) (struct ep93xx_dma_chan*) ;} ;


 int FUNC_0 (struct ep93xx_dma_chan*) ;
 struct ep93xx_dma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_2(struct dma_chan *VAR_0)
{
 struct ep93xx_dma_chan *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->edma->hw_synchronize)
  VAR_1->edma->hw_synchronize(VAR_1);
}
