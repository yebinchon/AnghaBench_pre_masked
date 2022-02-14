
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_regmap_gate_data {int flags; int bit_idx; int offset; } ;
struct clk_regmap {int map; } ;
struct clk_hw {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 struct clk_regmap_gate_data* FUNC_1 (struct clk_regmap*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 struct clk_regmap* FUNC_3 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_4(struct clk_hw *VAR_1)
{
 struct clk_regmap *VAR_2 = FUNC_3(VAR_1);
 struct clk_regmap_gate_data *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;

 FUNC_2(VAR_2->map, VAR_3->offset, &VAR_4);
 if (VAR_3->flags & VAR_0)
  VAR_4 ^= FUNC_0(VAR_3->bit_idx);

 VAR_4 &= FUNC_0(VAR_3->bit_idx);

 return VAR_4 ? 1 : 0;
}
