
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dma_channel_regs {void* wcount; void* apb_seq; void* ahb_seq; void* apb_ptr; void* ahb_ptr; void* csr; } ;
struct tegra_dma_channel {int config_init; struct tegra_dma_channel_regs channel_reg; } ;
struct tegra_dma {int dma_clk; TYPE_1__* chip_data; struct tegra_dma_channel* channels; int reg_gen; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int nr_channels; scalar_t__ support_separate_wcount_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 struct tegra_dma* FUNC_1 (struct device*) ;
 void* FUNC_2 (struct tegra_dma_channel*,int ) ;
 int FUNC_3 (struct tegra_dma*,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_7)
{
 struct tegra_dma *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 VAR_8->reg_gen = FUNC_3(VAR_8, VAR_6);
 for (VAR_9 = 0; VAR_9 < VAR_8->chip_data->nr_channels; VAR_9++) {
  struct tegra_dma_channel *VAR_10 = &VAR_8->channels[VAR_9];
  struct tegra_dma_channel_regs *VAR_11 = &VAR_10->channel_reg;


  if (!VAR_10->config_init)
   continue;

  VAR_11->csr = FUNC_2(VAR_10, VAR_4);
  VAR_11->ahb_ptr = FUNC_2(VAR_10, VAR_0);
  VAR_11->apb_ptr = FUNC_2(VAR_10, VAR_2);
  VAR_11->ahb_seq = FUNC_2(VAR_10, VAR_1);
  VAR_11->apb_seq = FUNC_2(VAR_10, VAR_3);
  if (VAR_8->chip_data->support_separate_wcount_reg)
   VAR_11->wcount = FUNC_2(VAR_10,
        VAR_5);
 }

 FUNC_0(VAR_8->dma_clk);

 return 0;
}
