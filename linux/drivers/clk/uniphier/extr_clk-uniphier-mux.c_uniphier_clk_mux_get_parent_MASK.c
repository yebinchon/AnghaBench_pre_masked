
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct uniphier_clk_mux {unsigned int* masks; unsigned int* vals; int reg; int regmap; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 struct uniphier_clk_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_1)
{
 struct uniphier_clk_mux *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_0(VAR_1);
 int VAR_4;
 unsigned int VAR_5;
 u8 VAR_6;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_2->reg, &VAR_5);
 if (VAR_4)
  return VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  if ((VAR_2->masks[VAR_6] & VAR_5) == VAR_2->vals[VAR_6])
   return VAR_6;

 return -VAR_0;
}
