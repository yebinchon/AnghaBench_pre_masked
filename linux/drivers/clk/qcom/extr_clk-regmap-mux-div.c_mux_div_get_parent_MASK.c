
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct clk_regmap_mux_div {size_t* parent_map; } ;
struct clk_hw {int dummy; } ;


 char* FUNC_0 (struct clk_hw*) ;
 size_t FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (struct clk_regmap_mux_div*,size_t*,size_t*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 struct clk_regmap_mux_div* FUNC_4 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_5(struct clk_hw *VAR_0)
{
 struct clk_regmap_mux_div *VAR_1 = FUNC_4(VAR_0);
 const char *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3, VAR_4, VAR_5 = 0;

 FUNC_2(VAR_1, &VAR_5, &VAR_4);

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++)
  if (VAR_5 == VAR_1->parent_map[VAR_3])
   return VAR_3;

 FUNC_3("%s: Can't find parent with src %d\n", VAR_2, VAR_5);
 return 0;
}
