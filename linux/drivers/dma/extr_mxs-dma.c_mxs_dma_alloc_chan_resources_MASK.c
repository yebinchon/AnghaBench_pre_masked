
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct mxs_dma_engine {TYPE_1__ dma_device; int clk; } ;
struct TYPE_5__ {int tx_submit; } ;
struct mxs_dma_chan {int ccw_phys; int ccw; int chan_irq; TYPE_2__ desc; struct mxs_dma_engine* mxs_dma; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (TYPE_2__*,struct dma_chan*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,struct mxs_dma_engine*) ;
 int VAR_3 ;
 int FUNC_6 (struct dma_chan*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int ,int ,char*,struct mxs_dma_engine*) ;
 struct mxs_dma_chan* FUNC_8 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_9(struct dma_chan *VAR_5)
{
 struct mxs_dma_chan *VAR_6 = FUNC_8(VAR_5);
 struct mxs_dma_engine *VAR_7 = VAR_6->mxs_dma;
 int VAR_8;

 VAR_6->ccw = FUNC_2(VAR_7->dma_device.dev,
        VAR_0,
        &VAR_6->ccw_phys, VAR_2);
 if (!VAR_6->ccw) {
  VAR_8 = -VAR_1;
  goto err_alloc;
 }

 VAR_8 = FUNC_7(VAR_6->chan_irq, VAR_3,
     0, "mxs-dma", VAR_7);
 if (VAR_8)
  goto err_irq;

 VAR_8 = FUNC_1(VAR_7->clk);
 if (VAR_8)
  goto err_clk;

 FUNC_6(VAR_5);

 FUNC_3(&VAR_6->desc, VAR_5);
 VAR_6->desc.tx_submit = VAR_4;


 FUNC_0(&VAR_6->desc);

 return 0;

err_clk:
 FUNC_5(VAR_6->chan_irq, VAR_7);
err_irq:
 FUNC_4(VAR_7->dma_device.dev, VAR_0,
   VAR_6->ccw, VAR_6->ccw_phys);
err_alloc:
 return VAR_8;
}
