
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_pll_table {long rate; } ;



__attribute__((used)) static const struct clk_pll_table *FUNC_0(
  const struct clk_pll_table *VAR_0, unsigned long VAR_1)
{
 const struct clk_pll_table *VAR_2;

 for (VAR_2 = VAR_0; VAR_2->rate; VAR_2++) {
  if (VAR_2->rate == VAR_1) {
   VAR_0 = VAR_2;
   break;
  } else if (VAR_2->rate < VAR_1)
   VAR_0 = VAR_2;
 }

 return VAR_0;
}
