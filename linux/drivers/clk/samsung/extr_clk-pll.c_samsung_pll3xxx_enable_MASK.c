
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct samsung_clk_pll {int con_reg; int lock_offs; int enable_offs; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct samsung_clk_pll* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct clk_hw *VAR_0)
{
 struct samsung_clk_pll *VAR_1 = FUNC_3(VAR_0);
 u32 VAR_2;

 VAR_2 = FUNC_2(VAR_1->con_reg);
 VAR_2 |= FUNC_0(VAR_1->enable_offs);
 FUNC_4(VAR_2, VAR_1->con_reg);


 do {
  FUNC_1();
  VAR_2 = FUNC_2(VAR_1->con_reg);
 } while (!(VAR_2 & FUNC_0(VAR_1->lock_offs)));

 return 0;
}
