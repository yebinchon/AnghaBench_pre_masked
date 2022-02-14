
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tegra_clk_frac_div {int shift; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct tegra_clk_frac_div*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct tegra_clk_frac_div*) ;
 int FUNC_3 (int ) ;
 struct tegra_clk_frac_div* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk_hw *VAR_0,
          unsigned long VAR_1)
{
 struct tegra_clk_frac_div *VAR_2 = FUNC_4(VAR_0);
 u32 VAR_3;
 int VAR_4, VAR_5;
 u64 VAR_6 = VAR_1;

 VAR_3 = FUNC_3(VAR_2->reg) >> VAR_2->shift;
 VAR_4 = VAR_3 & FUNC_0(VAR_2);

 VAR_5 = FUNC_2(VAR_2);
 VAR_4 += VAR_5;

 VAR_6 *= VAR_5;
 VAR_6 += VAR_4 - 1;
 FUNC_1(VAR_6, VAR_4);

 return VAR_6;
}
