
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct samsung_pll_rate_table {unsigned long rate; } ;
struct samsung_clk_pll {int rate_count; struct samsung_pll_rate_table* rate_table; } ;
struct clk_hw {int dummy; } ;


 struct samsung_clk_pll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_1(struct clk_hw *VAR_0,
   unsigned long VAR_1, unsigned long *VAR_2)
{
 struct samsung_clk_pll *VAR_3 = FUNC_0(VAR_0);
 const struct samsung_pll_rate_table *VAR_4 = VAR_3->rate_table;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_3->rate_count; VAR_5++) {
  if (VAR_1 >= VAR_4[VAR_5].rate)
   return VAR_4[VAR_5].rate;
 }


 return VAR_4[VAR_5 - 1].rate;
}
