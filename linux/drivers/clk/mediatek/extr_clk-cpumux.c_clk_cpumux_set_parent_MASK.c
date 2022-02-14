
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mtk_clk_cpumux {int shift; int mask; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,int,int) ;
 struct mtk_clk_cpumux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct mtk_clk_cpumux *VAR_2 = FUNC_1(VAR_0);
 u32 VAR_3, VAR_4;

 VAR_4 = VAR_1 << VAR_2->shift;
 VAR_3 = VAR_2->mask << VAR_2->shift;

 return FUNC_0(VAR_2->regmap, VAR_2->reg, VAR_3, VAR_4);
}
