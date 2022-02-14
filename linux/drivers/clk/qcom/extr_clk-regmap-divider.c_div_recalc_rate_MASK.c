
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_regmap {int regmap; } ;
struct clk_regmap_div {int shift; int width; int reg; struct clk_regmap clkr; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct clk_hw*,unsigned long,int,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int*) ;
 struct clk_regmap_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_4(struct clk_hw *VAR_1,
         unsigned long VAR_2)
{
 struct clk_regmap_div *VAR_3 = FUNC_3(VAR_1);
 struct clk_regmap *VAR_4 = &VAR_3->clkr;
 u32 VAR_5;

 FUNC_2(VAR_4->regmap, VAR_3->reg, &VAR_5);
 VAR_5 >>= VAR_3->shift;
 VAR_5 &= FUNC_0(VAR_3->width) - 1;

 return FUNC_1(VAR_1, VAR_2, VAR_5, ((void*)0),
       VAR_0, VAR_3->width);
}
