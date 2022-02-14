
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct clk_hw {int dummy; } ;
struct TYPE_4__ {int regmap; } ;
struct clk_alpha_pll_postdiv {int post_div_shift; int num_post_div; TYPE_1__* post_div_table; int width; TYPE_2__ clkr; } ;
struct TYPE_3__ {int val; int div; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_2 (int ,int ,int*) ;
 struct clk_alpha_pll_postdiv* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_0,
     unsigned long VAR_1)
{
 struct clk_alpha_pll_postdiv *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3, VAR_4 = 1, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->clkr.regmap, FUNC_1(VAR_2), &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_5 >>= VAR_2->post_div_shift;
 VAR_5 &= FUNC_0(VAR_2->width) - 1;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_post_div; VAR_3++) {
  if (VAR_2->post_div_table[VAR_3].val == VAR_5) {
   VAR_4 = VAR_2->post_div_table[VAR_3].div;
   break;
  }
 }

 return (VAR_1 / VAR_4);
}
