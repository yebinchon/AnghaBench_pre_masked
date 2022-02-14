
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
 int FUNC_0 (struct tegra_adma_chan*,int ) ;
 int FUNC_1 (struct tegra_adma_chan*,int ,int) ;
 struct tegra_adma_chan* FUNC_2 (struct dma_chan*) ;

__attribute__((used)) static int FUNC_3(struct dma_chan *VAR_2)
{
 struct tegra_adma_chan *VAR_3 = FUNC_2(VAR_2);
 struct tegra_adma_desc *VAR_4 = VAR_3->desc;
 struct tegra_adma_chan_regs *VAR_5 = &VAR_4->ch_regs;

 VAR_5->ctrl = FUNC_0(VAR_3, VAR_0);
 VAR_5->ctrl &= ~(1 << VAR_1);
 FUNC_1(VAR_3, VAR_0, VAR_5->ctrl);

 return 0;
}
