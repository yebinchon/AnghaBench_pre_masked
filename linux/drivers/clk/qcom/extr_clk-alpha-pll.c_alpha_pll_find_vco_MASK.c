
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pll_vco {unsigned long min_freq; unsigned long max_freq; } ;
struct clk_alpha_pll {int num_vco; struct pll_vco* vco_table; } ;



__attribute__((used)) static const struct pll_vco *
FUNC_0(const struct clk_alpha_pll *VAR_0, unsigned long VAR_1)
{
 const struct pll_vco *VAR_2 = VAR_0->vco_table;
 const struct pll_vco *VAR_3 = VAR_2 + VAR_0->num_vco;

 for (; VAR_2 < VAR_3; VAR_2++)
  if (VAR_1 >= VAR_2->min_freq && VAR_1 <= VAR_2->max_freq)
   return VAR_2;

 return ((void*)0);
}
