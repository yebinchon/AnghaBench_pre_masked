
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int flags; int frac; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct meson_clk_pll_data *VAR_1)
{
 if ((VAR_1->flags & VAR_0) &&
     !FUNC_0(&VAR_1->frac))
  return 1;

 return 0;
}
