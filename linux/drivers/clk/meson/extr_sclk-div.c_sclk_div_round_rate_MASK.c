
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct meson_sclk_div_data {int dummy; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 long FUNC_0 (int ,int) ;
 struct meson_sclk_div_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (struct clk_hw*,unsigned long,unsigned long*,struct meson_sclk_div_data*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long *VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_3(VAR_0);
 struct meson_sclk_div_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_4);

 return FUNC_0((u64)*VAR_2, VAR_5);
}
