
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_pll_data {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned int,unsigned int,int ,struct meson_clk_pll_data*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned int,unsigned int*,unsigned int*,struct meson_clk_pll_data*) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long,unsigned long,struct meson_clk_pll_data*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_1,
          unsigned long VAR_2,
          unsigned int *VAR_3,
          unsigned int *VAR_4,
          struct meson_clk_pll_data *VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = 0;
 unsigned int VAR_8, VAR_9, VAR_10;
 int VAR_11;

 for (VAR_8 = 0, VAR_11 = 0; !VAR_11; VAR_8++) {
  VAR_11 = FUNC_1(VAR_1, VAR_2,
        VAR_8, &VAR_9, &VAR_10, VAR_5);
  if (VAR_11 == -VAR_0)
   break;

  VAR_7 = FUNC_0(VAR_2, VAR_9, VAR_10, 0, VAR_5);
  if (FUNC_2(VAR_1, VAR_6, VAR_7, VAR_5)) {
   VAR_6 = VAR_7;
   *VAR_3 = VAR_9;
   *VAR_4 = VAR_10;

   if (VAR_7 == VAR_1)
    break;
  }
 }

 return VAR_6 ? 0 : -VAR_0;
}
