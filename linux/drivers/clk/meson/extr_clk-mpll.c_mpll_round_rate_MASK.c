
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct meson_clk_mpll_data {int flags; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 struct meson_clk_mpll_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (unsigned long,unsigned long,unsigned int*,unsigned int*,int ) ;
 long FUNC_2 (unsigned long,unsigned int,unsigned int) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_0,
       unsigned long VAR_1,
       unsigned long *VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_3(VAR_0);
 struct meson_clk_mpll_data *VAR_4 = FUNC_0(VAR_3);
 unsigned int VAR_5, VAR_6;

 FUNC_1(VAR_1, *VAR_2, &VAR_5, &VAR_6, VAR_4->flags);
 return FUNC_2(*VAR_2, VAR_5, VAR_6);
}
