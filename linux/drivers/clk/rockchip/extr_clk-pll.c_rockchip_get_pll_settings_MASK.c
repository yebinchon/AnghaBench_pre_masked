
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pll_rate_table {unsigned long rate; } ;
struct rockchip_clk_pll {int rate_count; struct rockchip_pll_rate_table* rate_table; } ;



__attribute__((used)) static const struct rockchip_pll_rate_table *FUNC_0(
       struct rockchip_clk_pll *VAR_0, unsigned long VAR_1)
{
 const struct rockchip_pll_rate_table *VAR_2 = VAR_0->rate_table;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->rate_count; VAR_3++) {
  if (VAR_1 == VAR_2[VAR_3].rate)
   return &VAR_2[VAR_3];
 }

 return ((void*)0);
}
