
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_clk_pll_freq_table {scalar_t__ m; scalar_t__ p; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* dyn_ramp ) (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*) ;int flags; int (* set_defaults ) (struct tegra_clk_pll*) ;scalar_t__ defaults_set; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*) ;
 int FUNC_3 (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*,unsigned long) ;
 int FUNC_4 (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*) ;
 int FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (struct tegra_clk_pll*) ;
 int FUNC_7 (struct tegra_clk_pll*) ;
 int FUNC_8 (struct tegra_clk_pll*) ;
 int FUNC_9 (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*) ;
 int FUNC_10 (struct tegra_clk_pll*) ;
 struct tegra_clk_pll* FUNC_11 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_12(struct clk_hw *VAR_1, struct tegra_clk_pll_freq_table *VAR_2,
   unsigned long VAR_3)
{
 struct tegra_clk_pll *VAR_4 = FUNC_11(VAR_1);
 struct tegra_clk_pll_freq_table VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_6 = FUNC_5(VAR_1);

 FUNC_2(VAR_4, &VAR_5);

 if (VAR_6 && VAR_4->params->defaults_set && VAR_4->params->dyn_ramp &&
   (VAR_2->m == VAR_5.m) && (VAR_2->p == VAR_5.p)) {
  VAR_7 = VAR_4->params->dyn_ramp(VAR_4, VAR_2);
  if (!VAR_7)
   return 0;
 }

 if (VAR_6) {
  FUNC_8(VAR_4);
  FUNC_0(VAR_1);
 }

 if (!VAR_4->params->defaults_set && VAR_4->params->set_defaults)
  VAR_4->params->set_defaults(VAR_4);

 FUNC_4(VAR_4, VAR_2);

 if (VAR_4->params->flags & VAR_0)
  FUNC_3(VAR_4, VAR_2, VAR_3);

 if (VAR_6) {
  FUNC_1(VAR_1);
  VAR_7 = FUNC_6(VAR_4);
  FUNC_7(VAR_4);
 }

 return VAR_7;
}
