
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct clk_regmap_mux_div {int * parent_map; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct clk_hw*,unsigned long,unsigned long,int ) ;
 struct clk_regmap_mux_div* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_0, unsigned long VAR_1,
           unsigned long VAR_2, u8 VAR_3)
{
 struct clk_regmap_mux_div *VAR_4 = FUNC_1(VAR_0);

 return FUNC_0(VAR_0, VAR_1, VAR_2,
          VAR_4->parent_map[VAR_3]);
}
