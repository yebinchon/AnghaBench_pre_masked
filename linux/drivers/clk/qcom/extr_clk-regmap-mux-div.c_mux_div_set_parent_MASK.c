
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct clk_regmap_mux_div {int div; int * parent_map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_regmap_mux_div*,int ,int ) ;
 struct clk_regmap_mux_div* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_regmap_mux_div *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, VAR_2->parent_map[VAR_1], VAR_2->div);
}
