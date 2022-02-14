
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_regmap_mux_data {unsigned int shift; unsigned int mask; int flags; int table; int offset; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct clk_regmap_mux_data* FUNC_0 (struct clk_regmap*) ;
 int FUNC_1 (struct clk_hw*,int ,int ,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_4(struct clk_hw *VAR_0)
{
 struct clk_regmap *VAR_1 = FUNC_3(VAR_0);
 struct clk_regmap_mux_data *VAR_2 = FUNC_0(VAR_1);
 unsigned int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1->map, VAR_2->offset, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3 >>= VAR_2->shift;
 VAR_3 &= VAR_2->mask;
 return FUNC_1(VAR_0, VAR_2->table, VAR_2->flags, VAR_3);
}
