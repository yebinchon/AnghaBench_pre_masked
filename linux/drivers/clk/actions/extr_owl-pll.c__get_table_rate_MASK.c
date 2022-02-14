
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll_table {unsigned long rate; unsigned int val; } ;



__attribute__((used)) static unsigned long FUNC_0(const struct clk_pll_table *VAR_0,
  unsigned int VAR_1)
{
 const struct clk_pll_table *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->rate; VAR_2++)
  if (VAR_2->val == VAR_1)
   return VAR_2->rate;

 return 0;
}
