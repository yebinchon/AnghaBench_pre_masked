
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_hw {int dummy; } ;
struct clk_div_table {int dummy; } ;
struct clk_alpha_pll_postdiv {int width; } ;


 int VAR_0 ;
 struct clk_div_table* VAR_1 ;
 struct clk_div_table* VAR_2 ;
 long FUNC_0 (struct clk_hw*,unsigned long,unsigned long*,struct clk_div_table const*,int,int ) ;
 struct clk_alpha_pll_postdiv* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static long
FUNC_2(struct clk_hw *VAR_3, unsigned long VAR_4,
     unsigned long *VAR_5)
{
 struct clk_alpha_pll_postdiv *VAR_6 = FUNC_1(VAR_3);
 const struct clk_div_table *VAR_7;

 if (VAR_6->width == 2)
  VAR_7 = VAR_1;
 else
  VAR_7 = VAR_2;

 return FUNC_0(VAR_3, VAR_4, VAR_5, VAR_7,
      VAR_6->width, VAR_0);
}
