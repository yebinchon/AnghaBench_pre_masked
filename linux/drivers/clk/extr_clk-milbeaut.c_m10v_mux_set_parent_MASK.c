
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_mux {int mask; int shift; scalar_t__ lock; int reg; int flags; int table; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 struct clk_mux* FUNC_8 (struct clk_hw*) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct clk_hw *VAR_0, u8 VAR_1)
{
 struct clk_mux *VAR_2 = FUNC_8(VAR_0);
 u32 VAR_3 = FUNC_3(VAR_2->table, VAR_2->flags, VAR_1);
 unsigned long VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6 = FUNC_0(FUNC_4(VAR_2->mask) - 1);

 if (VAR_2->lock)
  FUNC_6(VAR_2->lock, VAR_4);
 else
  FUNC_1(VAR_2->lock);

 VAR_5 = FUNC_5(VAR_2->reg);
 VAR_5 &= ~(VAR_2->mask << VAR_2->shift);

 VAR_3 = (VAR_3 | VAR_6) << VAR_2->shift;
 VAR_5 |= VAR_3;
 FUNC_9(VAR_5, VAR_2->reg);

 if (VAR_2->lock)
  FUNC_7(VAR_2->lock, VAR_4);
 else
  FUNC_2(VAR_2->lock);

 return 0;
}
