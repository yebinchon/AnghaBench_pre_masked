
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct clk_hw {int dummy; } ;
struct clk_fractional_divider {unsigned long mmask; unsigned long mshift; unsigned long nmask; unsigned long nshift; int flags; scalar_t__ lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned long FUNC_2 (struct clk_fractional_divider*) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct clk_fractional_divider* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_7(struct clk_hw *VAR_1,
     unsigned long VAR_2)
{
 struct clk_fractional_divider *VAR_3 = FUNC_6(VAR_1);
 unsigned long VAR_4 = 0;
 unsigned long VAR_5, VAR_6;
 u32 VAR_7;
 u64 VAR_8;

 if (VAR_3->lock)
  FUNC_4(VAR_3->lock, VAR_4);
 else
  FUNC_0(VAR_3->lock);

 VAR_7 = FUNC_2(VAR_3);

 if (VAR_3->lock)
  FUNC_5(VAR_3->lock, VAR_4);
 else
  FUNC_1(VAR_3->lock);

 VAR_5 = (VAR_7 & VAR_3->mmask) >> VAR_3->mshift;
 VAR_6 = (VAR_7 & VAR_3->nmask) >> VAR_3->nshift;

 if (VAR_3->flags & VAR_0) {
  VAR_5++;
  VAR_6++;
 }

 if (!VAR_6 || !VAR_5)
  return VAR_2;

 VAR_8 = (u64)VAR_2 * VAR_5;
 FUNC_3(VAR_8, VAR_6);

 return VAR_8;
}
