
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_pll14xx_rate_table {unsigned long rate; } ;
struct clk_pll14xx {int rate_count; struct imx_pll14xx_rate_table* rate_table; } ;



__attribute__((used)) static const struct imx_pll14xx_rate_table *FUNC_0(
  struct clk_pll14xx *VAR_0, unsigned long VAR_1)
{
 const struct imx_pll14xx_rate_table *VAR_2 = VAR_0->rate_table;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->rate_count; VAR_3++)
  if (VAR_1 == VAR_2[VAR_3].rate)
   return &VAR_2[VAR_3];

 return ((void*)0);
}
