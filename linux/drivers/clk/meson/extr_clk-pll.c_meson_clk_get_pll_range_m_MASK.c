
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct meson_clk_pll_data {int dummy; } ;


 unsigned int FUNC_0 (unsigned int,unsigned long) ;
 scalar_t__ FUNC_1 (struct meson_clk_pll_data*) ;
 unsigned int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(unsigned long VAR_0,
           unsigned long VAR_1,
           unsigned int VAR_2,
           struct meson_clk_pll_data *VAR_3)
{
 u64 VAR_4 = (u64)VAR_0 * VAR_2;

 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_4, VAR_1);

 return FUNC_2(VAR_4, VAR_1);
}
