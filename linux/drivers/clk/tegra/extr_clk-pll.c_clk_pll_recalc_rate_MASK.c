
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
typedef int u32 ;
struct tegra_clk_pll_freq_table {int m; unsigned long n; int p; } ;
struct tegra_clk_pll {TYPE_1__* params; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int flags; unsigned long fixed_rate; int (* set_gain ) (struct tegra_clk_pll_freq_table*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (struct tegra_clk_pll*,struct tegra_clk_pll_freq_table*) ;
 scalar_t__ FUNC_3 (struct clk_hw*,struct tegra_clk_pll_freq_table*,unsigned long,unsigned long) ;
 int FUNC_4 (struct clk_hw*,int ) ;
 int FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (unsigned long,int) ;
 int FUNC_7 (struct tegra_clk_pll*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (struct tegra_clk_pll_freq_table*) ;
 struct tegra_clk_pll* FUNC_10 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_11(struct clk_hw *VAR_7,
      unsigned long VAR_8)
{
 struct tegra_clk_pll *VAR_9 = FUNC_10(VAR_7);
 struct tegra_clk_pll_freq_table VAR_10;
 u32 VAR_11;
 u64 VAR_12 = VAR_8;
 int VAR_13;

 VAR_11 = FUNC_7(VAR_9);

 if ((VAR_9->params->flags & VAR_4) && (VAR_11 & VAR_0))
  return VAR_8;

 if ((VAR_9->params->flags & VAR_5) &&
     !(VAR_9->params->flags & (VAR_2 | VAR_3)) &&
   !(VAR_11 & VAR_1)) {
  struct tegra_clk_pll_freq_table VAR_14;
  if (FUNC_3(VAR_7, &VAR_14, VAR_9->params->fixed_rate,
     VAR_8)) {
   FUNC_8("Clock %s has unknown fixed frequency\n",
          FUNC_5(VAR_7));
   FUNC_0();
  }
  return VAR_9->params->fixed_rate;
 }

 FUNC_2(VAR_9, &VAR_10);

 if (VAR_9->params->flags & VAR_6) {
  VAR_13 = 1;
 } else {
  VAR_13 = FUNC_4(VAR_7, VAR_10.p);
  if (VAR_13 < 0) {
   FUNC_1(1, "Clock %s has invalid pdiv value : 0x%x\n",
        FUNC_5(VAR_7), VAR_10.p);
   VAR_13 = 1;
  }
 }

 if (VAR_9->params->set_gain)
  VAR_9->params->set_gain(&VAR_10);

 VAR_10.m *= VAR_13;

 VAR_12 *= VAR_10.n;
 FUNC_6(VAR_12, VAR_10.m);

 return VAR_12;
}
