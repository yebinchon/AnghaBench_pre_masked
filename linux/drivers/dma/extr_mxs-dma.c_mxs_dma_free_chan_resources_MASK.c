
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct mxs_dma_engine {int clk; TYPE_1__ dma_device; } ;
struct mxs_dma_chan {int ccw_phys; int ccw; int chan_irq; struct mxs_dma_engine* mxs_dma; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,struct mxs_dma_engine*) ;
 int FUNC_3 (struct dma_chan*) ;
 struct mxs_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static void FUNC_5(struct dma_chan *VAR_1)
{
 struct mxs_dma_chan *VAR_2 = FUNC_4(VAR_1);
 struct mxs_dma_engine *VAR_3 = VAR_2->mxs_dma;

 FUNC_3(VAR_1);

 FUNC_2(VAR_2->chan_irq, VAR_3);

 FUNC_1(VAR_3->dma_device.dev, VAR_0,
   VAR_2->ccw, VAR_2->ccw_phys);

 FUNC_0(VAR_3->clk);
}
