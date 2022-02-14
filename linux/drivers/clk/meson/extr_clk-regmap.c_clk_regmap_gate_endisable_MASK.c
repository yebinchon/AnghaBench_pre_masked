
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_gate_data {int flags; int bit_idx; int offset; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct clk_regmap_gate_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1, int VAR_2)
{
 struct clk_regmap *VAR_3 = FUNC_3(VAR_1);
 struct clk_regmap_gate_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = VAR_4->flags & VAR_0 ? 1 : 0;

 VAR_5 ^= VAR_2;

 return FUNC_2(VAR_3->map, VAR_4->offset, FUNC_0(VAR_4->bit_idx),
      VAR_5 ? FUNC_0(VAR_4->bit_idx) : 0);
}
