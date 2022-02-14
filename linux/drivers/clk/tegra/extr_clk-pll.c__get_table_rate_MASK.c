
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_clk_pll_freq_table {unsigned long input_rate; unsigned long output_rate; int p; int sdm_data; int cpcon; int n; int m; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ pdiv_tohw; struct tegra_clk_pll_freq_table* freq_table; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*,int) ;
 int FUNC_1 (int) ;
 struct tegra_clk_pll* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1,
      struct tegra_clk_pll_freq_table *VAR_2,
      unsigned long VAR_3, unsigned long VAR_4)
{
 struct tegra_clk_pll *VAR_5 = FUNC_2(VAR_1);
 struct tegra_clk_pll_freq_table *VAR_6;
 int VAR_7;

 for (VAR_6 = VAR_5->params->freq_table; VAR_6->input_rate != 0; VAR_6++)
  if (VAR_6->input_rate == VAR_4 &&
      VAR_6->output_rate == VAR_3)
   break;

 if (VAR_6->input_rate == 0)
  return -VAR_0;

 if (VAR_5->params->pdiv_tohw) {
  VAR_7 = FUNC_0(VAR_1, VAR_6->p);
  if (VAR_7 < 0)
   return VAR_7;
 } else {
  VAR_7 = FUNC_1(VAR_6->p);
 }

 VAR_2->input_rate = VAR_6->input_rate;
 VAR_2->output_rate = VAR_6->output_rate;
 VAR_2->m = VAR_6->m;
 VAR_2->n = VAR_6->n;
 VAR_2->p = VAR_7;
 VAR_2->cpcon = VAR_6->cpcon;
 VAR_2->sdm_data = VAR_6->sdm_data;

 return 0;
}
