
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
 int FUNC_1 (unsigned long,unsigned long,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;
 struct clk_regmap_div* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, unsigned long VAR_2,
   unsigned long VAR_3)
{
 struct clk_regmap_div *VAR_4 = FUNC_3(VAR_1);
 struct clk_regmap *VAR_5 = &VAR_4->clkr;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, ((void*)0), VAR_4->width,
         VAR_0);

 return FUNC_2(VAR_5->regmap, VAR_4->reg,
      (FUNC_0(VAR_4->width) - 1) << VAR_4->shift,
      VAR_6 << VAR_4->shift);
}
