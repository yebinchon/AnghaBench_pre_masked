
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_dclk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sun4i_dclk* FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct sun4i_dclk *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 FUNC_2(VAR_3->regmap, VAR_1, &VAR_4);

 return VAR_4 & FUNC_0(VAR_0);
}
