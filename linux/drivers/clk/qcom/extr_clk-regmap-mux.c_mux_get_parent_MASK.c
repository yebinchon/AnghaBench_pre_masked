
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct clk_regmap_mux {unsigned int shift; scalar_t__ parent_map; int reg; scalar_t__ width; } ;
struct clk_regmap {int regmap; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (scalar_t__,int ) ;
 unsigned int FUNC_1 (struct clk_hw*,scalar_t__,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;
 struct clk_regmap_mux* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct clk_hw *VAR_0)
{
 struct clk_regmap_mux *VAR_1 = FUNC_4(VAR_0);
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 unsigned int VAR_3 = FUNC_0(VAR_1->width - 1, 0);
 unsigned int VAR_4;

 FUNC_2(VAR_2->regmap, VAR_1->reg, &VAR_4);

 VAR_4 >>= VAR_1->shift;
 VAR_4 &= VAR_3;

 if (VAR_1->parent_map)
  return FUNC_1(VAR_0, VAR_1->parent_map, VAR_4);

 return VAR_4;
}
