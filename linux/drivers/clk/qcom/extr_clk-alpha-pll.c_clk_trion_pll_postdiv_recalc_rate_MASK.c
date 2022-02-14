
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {struct regmap* regmap; } ;
struct clk_alpha_pll_postdiv {size_t post_div_shift; size_t num_post_div; TYPE_1__* post_div_table; TYPE_2__ clkr; } ;
struct TYPE_3__ {size_t val; size_t div; } ;


 size_t FUNC_0 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_1 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_2 (struct regmap*,int ,size_t*) ;
 struct clk_alpha_pll_postdiv* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_4(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct clk_alpha_pll_postdiv *VAR_2 = FUNC_3(VAR_0);
 struct regmap *VAR_3 = VAR_2->clkr.regmap;
 u32 VAR_4, VAR_5 = 1, VAR_6;

 FUNC_2(VAR_3, FUNC_1(VAR_2), &VAR_6);

 VAR_6 >>= VAR_2->post_div_shift;
 VAR_6 &= FUNC_0(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_post_div; VAR_4++) {
  if (VAR_2->post_div_table[VAR_4].val == VAR_6) {
   VAR_5 = VAR_2->post_div_table[VAR_4].div;
   break;
  }
 }

 return (VAR_1 / VAR_5);
}
