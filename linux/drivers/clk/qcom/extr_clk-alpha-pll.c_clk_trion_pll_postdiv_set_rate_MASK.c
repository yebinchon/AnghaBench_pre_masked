
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {struct regmap* regmap; } ;
struct clk_alpha_pll_postdiv {int num_post_div; TYPE_1__* post_div_table; TYPE_2__ clkr; } ;
struct TYPE_3__ {int div; int val; } ;


 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (struct clk_alpha_pll_postdiv*) ;
 int VAR_0 ;
 int FUNC_2 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_3 (struct regmap*,int ,int,int) ;
 struct clk_alpha_pll_postdiv* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static int
FUNC_5(struct clk_hw *VAR_1, unsigned long VAR_2,
          unsigned long VAR_3)
{
 struct clk_alpha_pll_postdiv *VAR_4 = FUNC_4(VAR_1);
 struct regmap *VAR_5 = VAR_4->clkr.regmap;
 int VAR_6, VAR_7 = 0, VAR_8;

 VAR_8 = FUNC_0(VAR_3, VAR_2);
 for (VAR_6 = 0; VAR_6 < VAR_4->num_post_div; VAR_6++) {
  if (VAR_4->post_div_table[VAR_6].div == VAR_8) {
   VAR_7 = VAR_4->post_div_table[VAR_6].val;
   break;
  }
 }

 return FUNC_3(VAR_5, FUNC_2(VAR_4),
      FUNC_1(VAR_4) << VAR_0,
      VAR_7 << VAR_0);
}
