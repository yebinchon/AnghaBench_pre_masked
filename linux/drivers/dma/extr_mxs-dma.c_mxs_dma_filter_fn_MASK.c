
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_dma_filter_param {scalar_t__ chan_id; } ;
struct mxs_dma_engine {int pdev; } ;
struct mxs_dma_chan {int chan_irq; struct mxs_dma_engine* mxs_dma; } ;
struct dma_chan {scalar_t__ chan_id; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct mxs_dma_chan* FUNC_1 (struct dma_chan*) ;

__attribute__((used)) static bool FUNC_2(struct dma_chan *VAR_0, void *VAR_1)
{
 struct mxs_dma_filter_param *VAR_2 = VAR_1;
 struct mxs_dma_chan *VAR_3 = FUNC_1(VAR_0);
 struct mxs_dma_engine *VAR_4 = VAR_3->mxs_dma;
 int VAR_5;

 if (VAR_0->chan_id != VAR_2->chan_id)
  return 0;

 VAR_5 = FUNC_0(VAR_4->pdev, VAR_2->chan_id);
 if (VAR_5 < 0)
  return 0;

 VAR_3->chan_irq = VAR_5;

 return 1;
}
