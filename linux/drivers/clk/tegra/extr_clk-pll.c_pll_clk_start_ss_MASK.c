
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct TYPE_2__ {scalar_t__ ssc_ctrl_reg; int ssc_ctrl_en_mask; scalar_t__ defaults_set; } ;


 int FUNC_0 (scalar_t__,struct tegra_clk_pll*) ;
 int FUNC_1 (int ,scalar_t__,struct tegra_clk_pll*) ;

__attribute__((used)) static void FUNC_2(struct tegra_clk_pll *VAR_0)
{
 if (VAR_0->params->defaults_set && VAR_0->params->ssc_ctrl_reg) {
  u32 VAR_1 = FUNC_0(VAR_0->params->ssc_ctrl_reg, VAR_0);

  VAR_1 |= VAR_0->params->ssc_ctrl_en_mask;
  FUNC_1(VAR_1, VAR_0->params->ssc_ctrl_reg, VAR_0);
 }
}
