
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct meson_sclk_div_data {int cached_div; } ;
struct clk_regmap {int dummy; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (int ,int ) ;
 struct meson_sclk_div_data* FUNC_1 (struct clk_regmap*) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_3(struct clk_hw *VAR_0,
       unsigned long VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_2(VAR_0);
 struct meson_sclk_div_data *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0((u64)VAR_1, VAR_3->cached_div);
}
