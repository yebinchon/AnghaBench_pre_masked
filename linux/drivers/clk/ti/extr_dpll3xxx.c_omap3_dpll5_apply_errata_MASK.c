
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dpll_data {unsigned int last_rounded_m; unsigned int last_rounded_n; int last_rounded_rate; } ;
struct clk_hw_omap {struct dpll_data* dpll_data; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (struct omap3_dpll5_settings const*) ;
 int FUNC_1 (int,unsigned int) ;
 int FUNC_2 (struct clk_hw_omap*,int ) ;
 struct clk_hw_omap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static bool FUNC_4(struct clk_hw *VAR_0,
         unsigned long VAR_1)
{
 struct omap3_dpll5_settings {
  unsigned int rate, m, n;
 };

 static const struct omap3_dpll5_settings VAR_2[] = {






  { 12000000, 80, 0 + 1 },
  { 13000000, 443, 5 + 1 },
  { 19200000, 50, 0 + 1 },
  { 26000000, 443, 11 + 1 },
  { 38400000, 25, 0 + 1 }
 };

 const struct omap3_dpll5_settings *VAR_3;
 struct clk_hw_omap *VAR_4 = FUNC_3(VAR_0);
 struct dpll_data *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); ++VAR_6) {
  if (VAR_1 == VAR_2[VAR_6].rate)
   break;
 }

 if (VAR_6 == FUNC_0(VAR_2))
  return 0;

 VAR_3 = &VAR_2[VAR_6];


 VAR_5 = VAR_4->dpll_data;
 VAR_5->last_rounded_m = VAR_3->m;
 VAR_5->last_rounded_n = VAR_3->n;
 VAR_5->last_rounded_rate = FUNC_1((u64)VAR_1 * VAR_3->m, VAR_3->n);
 FUNC_2(VAR_4, 0);

 return 1;
}
