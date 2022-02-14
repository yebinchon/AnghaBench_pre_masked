
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk_hw {int dummy; } ;
struct TYPE_4__ {int regmap; } ;
struct clk_alpha_pll_postdiv {int num_post_div; int post_div_shift; int width; TYPE_2__ clkr; TYPE_1__* post_div_table; } ;
struct TYPE_3__ {int div; int val; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (struct clk_alpha_pll_postdiv*) ;
 int FUNC_3 (struct clk_alpha_pll_postdiv*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int,int) ;
 struct clk_alpha_pll_postdiv* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1,
    unsigned long VAR_2, unsigned long VAR_3)
{
 struct clk_alpha_pll_postdiv *VAR_4 = FUNC_6(VAR_1);
 int VAR_5, VAR_6 = 0, VAR_7, VAR_8;





 VAR_8 = FUNC_4(VAR_4->clkr.regmap, FUNC_2(VAR_4), &VAR_6);
 if (VAR_8)
  return VAR_8;

 if (VAR_6 & VAR_0)
  return 0;

 VAR_7 = FUNC_1(VAR_3, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4->num_post_div; VAR_5++) {
  if (VAR_4->post_div_table[VAR_5].div == VAR_7) {
   VAR_6 = VAR_4->post_div_table[VAR_5].val;
   break;
  }
 }

 return FUNC_5(VAR_4->clkr.regmap, FUNC_3(VAR_4),
    (FUNC_0(VAR_4->width) - 1) << VAR_4->post_div_shift,
    VAR_6 << VAR_4->post_div_shift);
}
