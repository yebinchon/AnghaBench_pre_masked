
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_mux {int mask; int shift; int lock; int reg; } ;
struct clk_hw {int dummy; } ;
struct clk_fixup_mux {int (* fixup ) (int*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int*) ;
 struct clk_fixup_mux* FUNC_4 (struct clk_hw*) ;
 struct clk_mux* FUNC_5 (struct clk_hw*) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_fixup_mux *VAR_2 = FUNC_4(VAR_0);
 struct clk_mux *VAR_3 = FUNC_5(VAR_0);
 unsigned long VAR_4 = 0;
 u32 VAR_5;

 FUNC_1(VAR_3->lock, VAR_4);

 VAR_5 = FUNC_0(VAR_3->reg);
 VAR_5 &= ~(VAR_3->mask << VAR_3->shift);
 VAR_5 |= VAR_1 << VAR_3->shift;
 VAR_2->fixup(&VAR_5);
 FUNC_6(VAR_5, VAR_3->reg);

 FUNC_2(VAR_3->lock, VAR_4);

 return 0;
}
