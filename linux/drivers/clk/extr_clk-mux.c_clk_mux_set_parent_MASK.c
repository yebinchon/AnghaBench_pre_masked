
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct clk_mux {int flags; int mask; int shift; scalar_t__ lock; int table; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct clk_mux*) ;
 int FUNC_4 (struct clk_mux*,int) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 struct clk_mux* FUNC_7 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_1, u8 VAR_2)
{
 struct clk_mux *VAR_3 = FUNC_7(VAR_1);
 u32 VAR_4 = FUNC_2(VAR_3->table, VAR_3->flags, VAR_2);
 unsigned long VAR_5 = 0;
 u32 VAR_6;

 if (VAR_3->lock)
  FUNC_5(VAR_3->lock, VAR_5);
 else
  FUNC_0(VAR_3->lock);

 if (VAR_3->flags & VAR_0) {
  VAR_6 = VAR_3->mask << (VAR_3->shift + 16);
 } else {
  VAR_6 = FUNC_3(VAR_3);
  VAR_6 &= ~(VAR_3->mask << VAR_3->shift);
 }
 VAR_4 = VAR_4 << VAR_3->shift;
 VAR_6 |= VAR_4;
 FUNC_4(VAR_3, VAR_6);

 if (VAR_3->lock)
  FUNC_6(VAR_3->lock, VAR_5);
 else
  FUNC_1(VAR_3->lock);

 return 0;
}
