
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct mtk_clk_cpumux {unsigned int shift; unsigned int mask; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ,int ,unsigned int*) ;
 struct mtk_clk_cpumux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_2(struct clk_hw *VAR_0)
{
 struct mtk_clk_cpumux *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 FUNC_0(VAR_1->regmap, VAR_1->reg, &VAR_2);

 VAR_2 >>= VAR_1->shift;
 VAR_2 &= VAR_1->mask;

 return VAR_2;
}
