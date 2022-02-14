
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_hw {int dummy; } ;
struct axxia_clkmux {int shift; int width; int reg; } ;
struct axxia_clk {int regmap; } ;


 int FUNC_0 (int ,int ,int*) ;
 struct axxia_clk* FUNC_1 (struct clk_hw*) ;
 struct axxia_clkmux* FUNC_2 (struct axxia_clk*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_0)
{
 struct axxia_clk *VAR_1 = FUNC_1(VAR_0);
 struct axxia_clkmux *VAR_2 = FUNC_2(VAR_1);
 u32 VAR_3, VAR_4;

 FUNC_0(VAR_1->regmap, VAR_2->reg, &VAR_3);
 VAR_4 = (VAR_3 >> VAR_2->shift) & ((1 << VAR_2->width) - 1);

 return (u8) VAR_4;
}
