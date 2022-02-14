
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pistachio_pll_rate_table {unsigned long fref; unsigned long fout; } ;
struct pistachio_clk_pll {unsigned int nr_rates; struct pistachio_pll_rate_table* rates; } ;



__attribute__((used)) static struct pistachio_pll_rate_table *
FUNC_0(struct pistachio_clk_pll *VAR_0, unsigned long VAR_1,
        unsigned long VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->nr_rates; VAR_3++) {
  if (VAR_0->rates[VAR_3].fref == VAR_1 && VAR_0->rates[VAR_3].fout == VAR_2)
   return &VAR_0->rates[VAR_3];
 }

 return ((void*)0);
}
