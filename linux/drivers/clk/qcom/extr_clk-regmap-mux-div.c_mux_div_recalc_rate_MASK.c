
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct clk_regmap_mux_div {scalar_t__* parent_map; } ;
struct clk_hw {int dummy; } ;


 char* FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (struct clk_hw*) ;
 struct clk_hw* FUNC_2 (struct clk_hw*,int) ;
 unsigned long FUNC_3 (struct clk_hw*) ;
 unsigned long FUNC_4 (unsigned long,int,scalar_t__) ;
 int FUNC_5 (struct clk_regmap_mux_div*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (char*,char const*,scalar_t__) ;
 struct clk_regmap_mux_div* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_8(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct clk_regmap_mux_div *VAR_2 = FUNC_7(VAR_0);
 u32 VAR_3, VAR_4;
 int VAR_5, VAR_6 = FUNC_1(VAR_0);
 const char *VAR_7 = FUNC_0(VAR_0);

 FUNC_5(VAR_2, &VAR_4, &VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  if (VAR_4 == VAR_2->parent_map[VAR_5]) {
   struct clk_hw *VAR_8 = FUNC_2(VAR_0, VAR_5);
   unsigned long VAR_9 = FUNC_3(VAR_8);

   return FUNC_4(VAR_9, 2, VAR_3 + 1);
  }

 FUNC_6("%s: Can't find parent %d\n", VAR_7, VAR_4);
 return 0;
}
