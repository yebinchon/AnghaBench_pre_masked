
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider_gate {int cached_val; } ;
struct clk_divider {int shift; int lock; int reg; int width; int flags; int table; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct clk_hw*) ;
 int FUNC_2 (unsigned long,unsigned long,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 struct clk_divider* FUNC_6 (struct clk_hw*) ;
 struct clk_divider_gate* FUNC_7 (struct clk_hw*) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_0, unsigned long VAR_1,
    unsigned long VAR_2)
{
 struct clk_divider_gate *VAR_3 = FUNC_7(VAR_0);
 struct clk_divider *VAR_4 = FUNC_6(VAR_0);
 unsigned long VAR_5 = 0;
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4->table,
    VAR_4->width, VAR_4->flags);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_4(VAR_4->lock, VAR_5);

 if (FUNC_1(VAR_0)) {
  VAR_7 = FUNC_3(VAR_4->reg);
  VAR_7 &= ~(FUNC_0(VAR_4->width) << VAR_4->shift);
  VAR_7 |= (u32)VAR_6 << VAR_4->shift;
  FUNC_8(VAR_7, VAR_4->reg);
 } else {
  VAR_3->cached_val = VAR_6;
 }

 FUNC_5(VAR_4->lock, VAR_5);

 return 0;
}
