
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lpc32xx_clk_gate {int flags; int reg; int bit_idx; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;
 struct lpc32xx_clk_gate* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_2)
{
 struct lpc32xx_clk_gate *VAR_3 = FUNC_2(VAR_2);
 u32 VAR_4 = FUNC_0(VAR_3->bit_idx);
 u32 VAR_5 = (VAR_3->flags & VAR_0 ? 0x0 : VAR_4);

 return FUNC_1(VAR_1, VAR_3->reg, VAR_4, VAR_5);
}
