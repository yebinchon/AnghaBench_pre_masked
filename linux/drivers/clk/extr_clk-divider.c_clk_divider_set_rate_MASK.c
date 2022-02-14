
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct clk_hw {int dummy; } ;
struct clk_divider {int flags; int shift; scalar_t__ lock; int width; int table; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct clk_divider*) ;
 int FUNC_4 (struct clk_divider*,int) ;
 int FUNC_5 (unsigned long,unsigned long,int ,int ,int) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 struct clk_divider* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long VAR_3)
{
 struct clk_divider *VAR_4 = FUNC_8(VAR_1);
 int VAR_5;
 unsigned long VAR_6 = 0;
 u32 VAR_7;

 VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4->table,
    VAR_4->width, VAR_4->flags);
 if (VAR_5 < 0)
  return VAR_5;

 if (VAR_4->lock)
  FUNC_6(VAR_4->lock, VAR_6);
 else
  FUNC_0(VAR_4->lock);

 if (VAR_4->flags & VAR_0) {
  VAR_7 = FUNC_2(VAR_4->width) << (VAR_4->shift + 16);
 } else {
  VAR_7 = FUNC_3(VAR_4);
  VAR_7 &= ~(FUNC_2(VAR_4->width) << VAR_4->shift);
 }
 VAR_7 |= (u32)VAR_5 << VAR_4->shift;
 FUNC_4(VAR_4, VAR_7);

 if (VAR_4->lock)
  FUNC_7(VAR_4->lock, VAR_6);
 else
  FUNC_1(VAR_4->lock);

 return 0;
}
