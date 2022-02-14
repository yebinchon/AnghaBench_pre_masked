
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct clk_fractional_divider {int flags; unsigned long mmask; unsigned long nmask; unsigned long mshift; unsigned long nshift; scalar_t__ lock; scalar_t__ nwidth; scalar_t__ mwidth; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 unsigned long FUNC_3 (struct clk_fractional_divider*) ;
 int FUNC_4 (struct clk_fractional_divider*,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long,int ,int ,unsigned long*,unsigned long*) ;
 int FUNC_6 (scalar_t__,unsigned long) ;
 int FUNC_7 (scalar_t__,unsigned long) ;
 struct clk_fractional_divider* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_9(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct clk_fractional_divider *VAR_4 = FUNC_8(VAR_1);
 unsigned long VAR_5 = 0;
 unsigned long VAR_6, VAR_7;
 u32 VAR_8;

 FUNC_5(VAR_2, VAR_3,
   FUNC_0(VAR_4->mwidth - 1, 0), FUNC_0(VAR_4->nwidth - 1, 0),
   &VAR_6, &VAR_7);

 if (VAR_4->flags & VAR_0) {
  VAR_6--;
  VAR_7--;
 }

 if (VAR_4->lock)
  FUNC_6(VAR_4->lock, VAR_5);
 else
  FUNC_1(VAR_4->lock);

 VAR_8 = FUNC_3(VAR_4);
 VAR_8 &= ~(VAR_4->mmask | VAR_4->nmask);
 VAR_8 |= (VAR_6 << VAR_4->mshift) | (VAR_7 << VAR_4->nshift);
 FUNC_4(VAR_4, VAR_8);

 if (VAR_4->lock)
  FUNC_7(VAR_4->lock, VAR_5);
 else
  FUNC_2(VAR_4->lock);

 return 0;
}
