
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_clk_pll_freq_table {unsigned long m; unsigned long output_rate; unsigned long n; unsigned long input_rate; int p; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {unsigned long vco_max; int vco_min; } ;


 unsigned int FUNC_0 (int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct clk_hw*,unsigned int) ;
 unsigned long FUNC_2 (TYPE_1__*,unsigned long) ;
 scalar_t__ FUNC_3 (struct tegra_clk_pll*) ;
 struct tegra_clk_pll* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_1,
    struct tegra_clk_pll_freq_table *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4)
{
 struct tegra_clk_pll *VAR_5 = FUNC_4(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_3)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->params->vco_min, VAR_3);
 VAR_2->m = FUNC_2(VAR_5->params, VAR_4);
 VAR_2->output_rate = VAR_3 * VAR_6;
 VAR_2->n = VAR_2->output_rate * VAR_2->m / VAR_4;
 VAR_2->input_rate = VAR_4;

 VAR_7 = FUNC_1(VAR_1, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_2->p = VAR_7;

 if (VAR_2->n > FUNC_3(VAR_5) || VAR_2->output_rate > VAR_5->params->vco_max)
  return -VAR_0;

 return 0;
}
