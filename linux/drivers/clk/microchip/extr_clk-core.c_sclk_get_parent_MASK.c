
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct pic32_sys_clk {size_t* parent_map; int mux_reg; } ;
struct clk_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_0 (struct clk_hw*) ;
 struct pic32_sys_clk* FUNC_1 (struct clk_hw*) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_3)
{
 struct pic32_sys_clk *VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5, VAR_6;

 VAR_6 = (FUNC_2(VAR_4->mux_reg) >> VAR_2) & VAR_1;

 if (!VAR_4->parent_map)
  return VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++)
  if (VAR_4->parent_map[VAR_5] == VAR_6)
   return VAR_5;
 return -VAR_0;
}
