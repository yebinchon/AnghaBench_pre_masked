
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_clk_pll_freq_table {int m; int n; int p; int cpcon; } ;
struct tegra_clk_pll {scalar_t__ clk_base; TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; int fixed_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct clk_hw*,struct tegra_clk_pll_freq_table*,int ,unsigned long) ;
 int FUNC_1 (struct clk_hw*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (struct clk_hw*) ;
 scalar_t__ FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (struct tegra_clk_pll*) ;
 int FUNC_6 (struct tegra_clk_pll*) ;
 int FUNC_7 (struct tegra_clk_pll*) ;
 int FUNC_8 (struct tegra_clk_pll*) ;
 int FUNC_9 (struct tegra_clk_pll*) ;
 int FUNC_10 (struct tegra_clk_pll*) ;
 int FUNC_11 (struct tegra_clk_pll*) ;
 int FUNC_12 (struct tegra_clk_pll*) ;
 int FUNC_13 (struct tegra_clk_pll*) ;
 int FUNC_14 (struct tegra_clk_pll*) ;
 int FUNC_15 (int,struct tegra_clk_pll*) ;
 int FUNC_16 (int,struct tegra_clk_pll*) ;
 int FUNC_17 (scalar_t__) ;
 struct tegra_clk_pll* FUNC_18 (struct clk_hw*) ;
 int FUNC_19 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_20(struct clk_hw *VAR_13)
{
 struct tegra_clk_pll *VAR_14 = FUNC_18(VAR_13);
 struct tegra_clk_pll_freq_table VAR_15;
 unsigned long VAR_16;
 u32 VAR_17;
 int VAR_18;

 if (FUNC_4(VAR_13))
  return 0;

 VAR_16 = FUNC_2(FUNC_1(VAR_13));

 if (FUNC_0(VAR_13, &VAR_15, VAR_14->params->fixed_rate, VAR_16))
  return -VAR_0;

 FUNC_3(VAR_13);

 VAR_17 = FUNC_14(VAR_14);
 VAR_17 &= ~(VAR_3 | VAR_5);
 FUNC_16(VAR_17, VAR_14);

 VAR_17 = FUNC_14(VAR_14);
 if (!(VAR_17 & VAR_4)) {
  VAR_18 = FUNC_6(VAR_14);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_14->params->flags & VAR_12) {

  VAR_17 = FUNC_13(VAR_14);
  VAR_17 &= ~(FUNC_11(VAR_14) | FUNC_9(VAR_14) |
    FUNC_7(VAR_14));
  VAR_17 &= ~(VAR_1 << VAR_2);
  VAR_17 |= VAR_15.m << FUNC_8(VAR_14);
  VAR_17 |= VAR_15.n << FUNC_10(VAR_14);
  VAR_17 |= VAR_15.p << FUNC_12(VAR_14);
  VAR_17 |= VAR_15.cpcon << VAR_2;
  FUNC_15(VAR_17, VAR_14);
 }

 VAR_17 = FUNC_14(VAR_14);
 VAR_17 |= VAR_6;
 VAR_17 |= VAR_3;
 FUNC_16(VAR_17, VAR_14);

 VAR_17 = FUNC_17(VAR_14->clk_base + VAR_8);
 VAR_17 &= ~VAR_7;
 VAR_17 |= VAR_9;
 FUNC_19(VAR_17, VAR_14->clk_base + VAR_8);

 VAR_17 = FUNC_13(VAR_14);
 VAR_17 |= (VAR_10 | VAR_11);
 FUNC_15(VAR_17, VAR_14);

 FUNC_5(VAR_14);

 return 0;
}
