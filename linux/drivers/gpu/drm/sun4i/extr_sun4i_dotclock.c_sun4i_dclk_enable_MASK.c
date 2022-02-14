
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_dclk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sun4i_dclk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct sun4i_dclk *VAR_3 = FUNC_1(VAR_2);

 return FUNC_2(VAR_3->regmap, VAR_1,
      FUNC_0(VAR_0),
      FUNC_0(VAR_0));
}
