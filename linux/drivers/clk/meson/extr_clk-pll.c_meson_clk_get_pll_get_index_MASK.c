
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {scalar_t__ table; scalar_t__ range; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned long,unsigned int,unsigned int*,unsigned int*,struct meson_clk_pll_data*) ;
 int FUNC_1 (unsigned int,unsigned int*,unsigned int*,struct meson_clk_pll_data*) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_1,
           unsigned long VAR_2,
           unsigned int VAR_3,
           unsigned int *VAR_4,
           unsigned int *VAR_5,
           struct meson_clk_pll_data *VAR_6)
{
 if (VAR_6->range)
  return FUNC_0(VAR_1, VAR_2,
           VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_6->table)
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 return -VAR_0;
}
