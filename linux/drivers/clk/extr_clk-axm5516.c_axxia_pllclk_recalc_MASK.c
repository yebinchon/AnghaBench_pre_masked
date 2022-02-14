
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct axxia_pllclk {int reg; } ;
struct axxia_clk {int regmap; } ;


 int FUNC_0 (int ,int ,int*) ;
 struct axxia_clk* FUNC_1 (struct clk_hw*) ;
 struct axxia_pllclk* FUNC_2 (struct axxia_clk*) ;

__attribute__((used)) static unsigned long
FUNC_3(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct axxia_clk *VAR_2 = FUNC_1(VAR_0);
 struct axxia_pllclk *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4, VAR_5, VAR_6, VAR_7;
 u32 VAR_8;

 FUNC_0(VAR_2->regmap, VAR_3->reg, &VAR_8);
 VAR_7 = ((VAR_8 >> 0) & 0xf) + 1;
 VAR_5 = ((VAR_8 >> 4) & 0xfff) + 3;
 VAR_6 = ((VAR_8 >> 16) & 0x1f) + 1;
 VAR_4 = (VAR_1 / (VAR_6 * VAR_7)) * VAR_5;

 return VAR_4;
}
