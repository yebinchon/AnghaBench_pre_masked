
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct xgene_clk_pmd {unsigned long denom; int flags; int mask; int shift; scalar_t__ lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct xgene_clk_pmd* FUNC_6 (struct clk_hw*) ;
 int FUNC_7 (int,int ) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{
 struct xgene_clk_pmd *VAR_4 = FUNC_6(VAR_1);
 unsigned long VAR_5 = 0;
 u64 VAR_6, VAR_7;
 u32 VAR_8;







 VAR_7 = VAR_2 * VAR_4->denom;
 VAR_6 = FUNC_0(VAR_7, (u64)VAR_3);


 if (VAR_4->flags & VAR_0)
  VAR_6 = VAR_4->denom - VAR_6;
 else
  VAR_6--;

 if (VAR_4->lock)
  FUNC_4(VAR_4->lock, VAR_5);
 else
  FUNC_1(VAR_4->lock);

 VAR_8 = FUNC_3(VAR_4->reg);
 VAR_8 &= ~VAR_4->mask;
 VAR_8 |= (VAR_6 << VAR_4->shift);
 FUNC_7(VAR_8, VAR_4->reg);

 if (VAR_4->lock)
  FUNC_5(VAR_4->lock, VAR_5);
 else
  FUNC_2(VAR_4->lock);

 return 0;
}
