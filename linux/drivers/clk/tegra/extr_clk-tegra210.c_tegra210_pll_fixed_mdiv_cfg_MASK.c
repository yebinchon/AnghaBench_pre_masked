
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct tegra_clk_pll_params {int flags; unsigned long vco_min; int (* round_p_to_pdiv ) (int,int *) ;unsigned long vco_max; scalar_t__ ssc_ctrl_reg; scalar_t__ sdm_ctrl_reg; } ;
struct tegra_clk_pll_freq_table {unsigned long m; int p; unsigned long n; unsigned long output_rate; unsigned long input_rate; scalar_t__ sdm_data; } ;
struct tegra_clk_pll {struct tegra_clk_pll_params* params; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (struct tegra_clk_pll_freq_table*) ;
 int FUNC_4 (int,int *) ;
 unsigned long FUNC_5 (struct clk_hw*,unsigned long) ;
 int FUNC_6 (struct tegra_clk_pll*,int) ;
 struct tegra_clk_pll* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_3,
          struct tegra_clk_pll_freq_table *VAR_4,
          unsigned long VAR_5, unsigned long VAR_6)
{
 struct tegra_clk_pll *VAR_7 = FUNC_7(VAR_3);
 struct tegra_clk_pll_params *VAR_8 = VAR_7->params;
 int VAR_9;
 unsigned long VAR_10, VAR_11;
 u32 VAR_12;

 if (!VAR_5)
  return -VAR_0;

 if (!(VAR_8->flags & VAR_2)) {
  VAR_9 = FUNC_0(VAR_8->vco_min, VAR_5);
  VAR_9 = VAR_8->round_p_to_pdiv(VAR_9, &VAR_12);
 } else {
  VAR_9 = VAR_5 >= VAR_8->vco_min ? 1 : -VAR_0;
 }

 if (VAR_9 < 0)
  return -VAR_0;

 VAR_4->m = FUNC_5(VAR_3, VAR_6);
 VAR_4->p = VAR_9;


 VAR_4->p = FUNC_6(VAR_7, VAR_4->p);

 VAR_11 = VAR_5 * VAR_9;
 if (VAR_11 > VAR_8->vco_max)
  VAR_11 = VAR_8->vco_max;
 VAR_10 = VAR_6 / VAR_4->m;
 VAR_4->n = VAR_11 / VAR_10;

 VAR_4->sdm_data = 0;
 VAR_4->output_rate = VAR_6;
 if (VAR_8->sdm_ctrl_reg) {
  unsigned long VAR_13 = VAR_11 - VAR_10 * VAR_4->n;

  if (VAR_13 || VAR_8->ssc_ctrl_reg) {
   u64 VAR_14 = VAR_13 * VAR_1;

   FUNC_1(VAR_14, VAR_10);
   VAR_14 -= VAR_1 / 2;
   VAR_4->sdm_data = FUNC_2(VAR_14);
  }
  VAR_4->output_rate *= FUNC_3(VAR_4);
  VAR_4->output_rate /= VAR_9 * VAR_4->m * VAR_1;
 } else {
  VAR_4->output_rate *= VAR_4->n;
  VAR_4->output_rate /= VAR_9 * VAR_4->m;
 }

 VAR_4->input_rate = VAR_6;

 return 0;
}
