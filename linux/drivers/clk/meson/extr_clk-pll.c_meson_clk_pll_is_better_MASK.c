
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int dummy; } ;


 scalar_t__ FUNC_0 (struct meson_clk_pll_data*) ;
 scalar_t__ FUNC_1 (unsigned long) ;

__attribute__((used)) static bool FUNC_2(unsigned long VAR_0,
        unsigned long VAR_1,
        unsigned long VAR_2,
        struct meson_clk_pll_data *VAR_3)
{
 if (FUNC_0(VAR_3)) {

  if (FUNC_1(VAR_2 - VAR_0) < FUNC_1(VAR_1 - VAR_0))
   return 1;
 } else {

  if (VAR_2 <= VAR_0 && VAR_1 < VAR_2)
   return 1;
 }

 return 0;
}
