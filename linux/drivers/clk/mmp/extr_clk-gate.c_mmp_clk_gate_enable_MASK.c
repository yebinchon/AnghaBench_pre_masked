
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmp_clk_gate {int flags; scalar_t__ lock; int reg; int val_enable; int mask; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned long) ;
 struct mmp_clk_gate* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_1)
{
 struct mmp_clk_gate *VAR_2 = FUNC_4(VAR_1);
 unsigned long VAR_3 = 0;
 unsigned long VAR_4;
 u32 VAR_5;

 if (VAR_2->lock)
  FUNC_2(VAR_2->lock, VAR_3);

 VAR_5 = FUNC_1(VAR_2->reg);
 VAR_5 &= ~VAR_2->mask;
 VAR_5 |= VAR_2->val_enable;
 FUNC_6(VAR_5, VAR_2->reg);

 if (VAR_2->lock)
  FUNC_3(VAR_2->lock, VAR_3);

 if (VAR_2->flags & VAR_0) {
  VAR_4 = FUNC_0(VAR_1);

  FUNC_5(2000000/VAR_4);
 }

 return 0;
}
