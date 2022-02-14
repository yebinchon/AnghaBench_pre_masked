
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_pll_config {unsigned long rate; } ;
struct clk_zx_pll {int count; struct zx_pll_config* lookup_table; } ;



__attribute__((used)) static int FUNC_0(struct clk_zx_pll *VAR_0, unsigned long VAR_1)
{
 const struct zx_pll_config *VAR_2 = VAR_0->lookup_table;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++) {
  if (VAR_2[VAR_3].rate > VAR_1)
   return VAR_3 > 0 ? VAR_3 - 1 : 0;

  if (VAR_2[VAR_3].rate == VAR_1)
   return VAR_3;
 }

 return VAR_3 - 1;
}
