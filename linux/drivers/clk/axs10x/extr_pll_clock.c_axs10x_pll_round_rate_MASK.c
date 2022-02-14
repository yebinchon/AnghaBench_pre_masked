
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct axs10x_pll_clk {struct axs10x_pll_cfg* pll_cfg; } ;
struct axs10x_pll_cfg {long rate; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct axs10x_pll_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_2(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long *VAR_3)
{
 int VAR_4;
 long VAR_5;
 struct axs10x_pll_clk *VAR_6 = FUNC_1(VAR_1);
 const struct axs10x_pll_cfg *VAR_7 = VAR_6->pll_cfg;

 if (VAR_7[0].rate == 0)
  return -VAR_0;

 VAR_5 = VAR_7[0].rate;

 for (VAR_4 = 1; VAR_7[VAR_4].rate != 0; VAR_4++) {
  if (FUNC_0(VAR_2 - VAR_7[VAR_4].rate) < FUNC_0(VAR_2 - VAR_5))
   VAR_5 = VAR_7[VAR_4].rate;
 }

 return VAR_5;
}
