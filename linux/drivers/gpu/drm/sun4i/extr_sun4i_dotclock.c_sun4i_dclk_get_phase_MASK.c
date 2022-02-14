
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_dclk {int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 struct sun4i_dclk* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1)
{
 struct sun4i_dclk *VAR_2 = FUNC_0(VAR_1);
 u32 VAR_3;

 FUNC_1(VAR_2->regmap, VAR_0, &VAR_3);

 VAR_3 >>= 28;
 VAR_3 &= 3;

 return VAR_3 * 120;
}
