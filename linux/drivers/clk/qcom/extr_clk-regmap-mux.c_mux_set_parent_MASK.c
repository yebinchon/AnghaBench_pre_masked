
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct clk_regmap_mux {unsigned int shift; int reg; TYPE_1__* parent_map; scalar_t__ width; } ;
struct clk_regmap {int regmap; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {size_t cfg; } ;


 unsigned int FUNC_0 (scalar_t__,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 struct clk_regmap* FUNC_2 (struct clk_hw*) ;
 struct clk_regmap_mux* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_regmap_mux *VAR_2 = FUNC_3(VAR_0);
 struct clk_regmap *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = FUNC_0(VAR_2->width + VAR_2->shift - 1, VAR_2->shift);
 unsigned int VAR_5;

 if (VAR_2->parent_map)
  VAR_1 = VAR_2->parent_map[VAR_1].cfg;

 VAR_5 = VAR_1;
 VAR_5 <<= VAR_2->shift;

 return FUNC_1(VAR_3->regmap, VAR_2->reg, VAR_4, VAR_5);
}
