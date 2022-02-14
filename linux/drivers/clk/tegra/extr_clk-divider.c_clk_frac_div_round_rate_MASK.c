
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_clk_frac_div {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct tegra_clk_frac_div*,unsigned long,unsigned long) ;
 int FUNC_2 (struct tegra_clk_frac_div*) ;
 struct tegra_clk_frac_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1,
       unsigned long *VAR_2)
{
 struct tegra_clk_frac_div *VAR_3 = FUNC_3(VAR_0);
 int VAR_4, VAR_5;
 unsigned long VAR_6 = *VAR_2;

 if (!VAR_1)
  return VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_6);
 if (VAR_4 < 0)
  return *VAR_2;

 VAR_5 = FUNC_2(VAR_3);

 return FUNC_0(VAR_6 * VAR_5, VAR_4 + VAR_5);
}
