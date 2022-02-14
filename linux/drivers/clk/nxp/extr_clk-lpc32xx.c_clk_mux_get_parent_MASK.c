
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef size_t u32 ;
struct lpc32xx_clk_mux {size_t shift; size_t mask; size_t* table; int reg; } ;
struct clk_hw {int dummy; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (struct clk_hw*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,size_t*) ;
 struct lpc32xx_clk_mux* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static u8 FUNC_3(struct clk_hw *VAR_2)
{
 struct lpc32xx_clk_mux *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 FUNC_1(VAR_1, VAR_3->reg, &VAR_5);
 VAR_5 >>= VAR_3->shift;
 VAR_5 &= VAR_3->mask;

 if (VAR_3->table) {
  u32 VAR_6;

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   if (VAR_3->table[VAR_6] == VAR_5)
    return VAR_6;
  return -VAR_0;
 }

 if (VAR_5 >= VAR_4)
  return -VAR_0;

 return VAR_5;
}
