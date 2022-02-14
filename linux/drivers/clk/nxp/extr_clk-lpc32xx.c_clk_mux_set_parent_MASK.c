
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct lpc32xx_clk_mux {size_t* table; int mask; int shift; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,size_t) ;
 struct lpc32xx_clk_mux* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_2(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct lpc32xx_clk_mux *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->table)
  VAR_2 = VAR_3->table[VAR_2];

 return FUNC_0(VAR_0, VAR_3->reg,
     VAR_3->mask << VAR_3->shift, VAR_2 << VAR_3->shift);
}
