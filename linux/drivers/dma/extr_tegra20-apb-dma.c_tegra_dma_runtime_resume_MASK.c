
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_dma_channel_regs {int wcount; int apb_seq; int apb_ptr; int ahb_seq; int ahb_ptr; int csr; } ;
struct tegra_dma_channel {int config_init; struct tegra_dma_channel_regs channel_reg; } ;
struct tegra_dma {int reg_gen; TYPE_1__* chip_data; struct tegra_dma_channel* channels; int dma_clk; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int nr_channels; scalar_t__ support_separate_wcount_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct tegra_dma* FUNC_2 (struct device*) ;
 int FUNC_3 (struct tegra_dma_channel*,int ,int) ;
 int FUNC_4 (struct tegra_dma*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_10)
{
 struct tegra_dma *VAR_11 = FUNC_2(VAR_10);
 int VAR_12, VAR_13;

 VAR_13 = FUNC_0(VAR_11->dma_clk);
 if (VAR_13 < 0) {
  FUNC_1(VAR_10, "clk_enable failed: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_4(VAR_11, VAR_8, VAR_11->reg_gen);
 FUNC_4(VAR_11, VAR_6, 0);
 FUNC_4(VAR_11, VAR_9, 0xFFFFFFFFul);

 for (VAR_12 = 0; VAR_12 < VAR_11->chip_data->nr_channels; VAR_12++) {
  struct tegra_dma_channel *VAR_14 = &VAR_11->channels[VAR_12];
  struct tegra_dma_channel_regs *VAR_15 = &VAR_14->channel_reg;


  if (!VAR_14->config_init)
   continue;

  if (VAR_11->chip_data->support_separate_wcount_reg)
   FUNC_3(VAR_14, VAR_5,
      VAR_15->wcount);
  FUNC_3(VAR_14, VAR_3, VAR_15->apb_seq);
  FUNC_3(VAR_14, VAR_2, VAR_15->apb_ptr);
  FUNC_3(VAR_14, VAR_1, VAR_15->ahb_seq);
  FUNC_3(VAR_14, VAR_0, VAR_15->ahb_ptr);
  FUNC_3(VAR_14, VAR_4,
   (VAR_15->csr & ~VAR_7));
 }

 return 0;
}
