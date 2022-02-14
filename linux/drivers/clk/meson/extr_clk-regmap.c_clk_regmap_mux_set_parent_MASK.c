
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct clk_regmap_mux_data {int mask; int shift; int offset; int flags; int table; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 struct clk_regmap_mux_data* FUNC_0 (struct clk_regmap*) ;
 unsigned int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,unsigned int) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_0);
 struct clk_regmap_mux_data *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4 = FUNC_1(VAR_3->table, VAR_3->flags, VAR_1);

 return FUNC_2(VAR_2->map, VAR_3->offset,
      VAR_3->mask << VAR_3->shift,
      VAR_4 << VAR_3->shift);
}
