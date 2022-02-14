
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virt_dma_desc {int tx; int node; } ;
struct tegra_adma_chan_regs {int tc; int ctrl; int src_addr; int trg_addr; int fifo_ctrl; int config; } ;
struct tegra_adma_desc {struct tegra_adma_chan_regs ch_regs; } ;
struct tegra_adma_chan {struct tegra_adma_desc* desc; scalar_t__ tx_buf_count; scalar_t__ tx_buf_pos; int vc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_adma_chan*) ;
 int FUNC_3 (struct tegra_adma_chan*,int ,int) ;
 struct tegra_adma_desc* FUNC_4 (int *) ;
 struct virt_dma_desc* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tegra_adma_chan *VAR_7)
{
 struct virt_dma_desc *VAR_8 = FUNC_5(&VAR_7->vc);
 struct tegra_adma_chan_regs *VAR_9;
 struct tegra_adma_desc *VAR_10;

 if (!VAR_8)
  return;

 FUNC_1(&VAR_8->node);

 VAR_10 = FUNC_4(&VAR_8->tx);

 if (!VAR_10) {
  FUNC_0(FUNC_2(VAR_7), "unable to start DMA, no descriptor\n");
  return;
 }

 VAR_9 = &VAR_10->ch_regs;

 VAR_7->tx_buf_pos = 0;
 VAR_7->tx_buf_count = 0;
 FUNC_3(VAR_7, VAR_6, VAR_9->tc);
 FUNC_3(VAR_7, VAR_2, VAR_9->ctrl);
 FUNC_3(VAR_7, VAR_4, VAR_9->src_addr);
 FUNC_3(VAR_7, VAR_5, VAR_9->trg_addr);
 FUNC_3(VAR_7, VAR_3, VAR_9->fifo_ctrl);
 FUNC_3(VAR_7, VAR_1, VAR_9->config);


 FUNC_3(VAR_7, VAR_0, 1);

 VAR_7->desc = VAR_10;
}
