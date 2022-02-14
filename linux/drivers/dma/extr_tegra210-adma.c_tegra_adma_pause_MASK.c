
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_adma_chan_regs {int ctrl; } ;
struct tegra_adma_desc {struct tegra_adma_chan_regs ch_regs; } ;
struct tegra_adma_chan {struct tegra_adma_desc* desc; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct tegra_adma_chan*) ;
 int FUNC_2 (struct tegra_adma_chan*,int ) ;
 int FUNC_3 (struct tegra_adma_chan*,int ,int) ;
 int FUNC_4 (struct tegra_adma_chan*) ;
 struct tegra_adma_chan* FUNC_5 (struct dma_chan*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dma_chan *VAR_4)
{
 struct tegra_adma_chan *VAR_5 = FUNC_5(VAR_4);
 struct tegra_adma_desc *VAR_6 = VAR_5->desc;
 struct tegra_adma_chan_regs *VAR_7 = &VAR_6->ch_regs;
 int VAR_8 = 10;

 VAR_7->ctrl = FUNC_2(VAR_5, VAR_0);
 VAR_7->ctrl |= (1 << VAR_1);
 FUNC_3(VAR_5, VAR_0, VAR_7->ctrl);

 while (VAR_8-- && !FUNC_4(VAR_5))
  FUNC_6(VAR_3);

 if (VAR_8 < 0) {
  FUNC_0(FUNC_1(VAR_5), "unable to pause DMA channel\n");
  return -VAR_2;
 }

 return 0;
}
