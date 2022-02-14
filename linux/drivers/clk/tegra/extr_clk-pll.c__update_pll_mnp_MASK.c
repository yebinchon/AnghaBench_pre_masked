
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_clk_pll_params {int flags; int pmc_divnm_reg; int pmc_divp_reg; struct div_nmp* div_nmp; } ;
struct tegra_clk_pll_freq_table {int p; int m; int n; } ;
struct tegra_clk_pll {int hw; struct tegra_clk_pll_params* params; } ;
struct div_nmp {int override_divp_shift; int override_divm_shift; int override_divn_shift; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct tegra_clk_pll_freq_table*) ;
 int FUNC_1 (struct tegra_clk_pll*) ;
 int FUNC_2 (struct tegra_clk_pll*) ;
 int FUNC_3 (struct tegra_clk_pll*) ;
 int FUNC_4 (struct tegra_clk_pll*) ;
 int FUNC_5 (struct tegra_clk_pll*) ;
 int FUNC_6 (struct tegra_clk_pll*) ;
 int FUNC_7 (struct tegra_clk_pll*) ;
 int FUNC_8 (struct tegra_clk_pll*) ;
 int FUNC_9 (struct tegra_clk_pll*) ;
 int FUNC_10 (int ,struct tegra_clk_pll*) ;
 int FUNC_11 (int,int ,struct tegra_clk_pll*) ;
 int FUNC_12 (struct tegra_clk_pll*) ;
 int FUNC_13 (int,struct tegra_clk_pll*) ;

__attribute__((used)) static void FUNC_14(struct tegra_clk_pll *VAR_4,
       struct tegra_clk_pll_freq_table *VAR_5)
{
 u32 VAR_6;
 struct tegra_clk_pll_params *VAR_7 = VAR_4->params;
 struct div_nmp *VAR_8 = VAR_7->div_nmp;

 if ((VAR_7->flags & (VAR_2 | VAR_3)) &&
  (FUNC_10(VAR_0, VAR_4) &
   VAR_1)) {
  VAR_6 = FUNC_10(VAR_7->pmc_divp_reg, VAR_4);
  VAR_6 &= ~(FUNC_7(VAR_4) << VAR_8->override_divp_shift);
  VAR_6 |= VAR_5->p << VAR_8->override_divp_shift;
  FUNC_11(VAR_6, VAR_7->pmc_divp_reg, VAR_4);

  VAR_6 = FUNC_10(VAR_7->pmc_divnm_reg, VAR_4);
  VAR_6 &= ~((FUNC_1(VAR_4) << VAR_8->override_divm_shift) |
   (FUNC_4(VAR_4) << VAR_8->override_divn_shift));
  VAR_6 |= (VAR_5->m << VAR_8->override_divm_shift) |
   (VAR_5->n << VAR_8->override_divn_shift);
  FUNC_11(VAR_6, VAR_7->pmc_divnm_reg, VAR_4);
 } else {
  VAR_6 = FUNC_12(VAR_4);

  VAR_6 &= ~(FUNC_2(VAR_4) | FUNC_5(VAR_4) |
    FUNC_8(VAR_4));

  VAR_6 |= (VAR_5->m << FUNC_3(VAR_4)) |
         (VAR_5->n << FUNC_6(VAR_4)) |
         (VAR_5->p << FUNC_9(VAR_4));

  FUNC_13(VAR_6, VAR_4);

  FUNC_0(&VAR_4->hw, VAR_5);
 }
}
