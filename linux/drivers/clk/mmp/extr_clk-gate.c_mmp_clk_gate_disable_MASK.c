
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_clk_gate {scalar_t__ lock; int reg; int val_disable; int mask; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 struct mmp_clk_gate* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct clk_hw *VAR_0)
{
 struct mmp_clk_gate *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2 = 0;
 u32 VAR_3;

 if (VAR_1->lock)
  FUNC_1(VAR_1->lock, VAR_2);

 VAR_3 = FUNC_0(VAR_1->reg);
 VAR_3 &= ~VAR_1->mask;
 VAR_3 |= VAR_1->val_disable;
 FUNC_4(VAR_3, VAR_1->reg);

 if (VAR_1->lock)
  FUNC_2(VAR_1->lock, VAR_2);
}
