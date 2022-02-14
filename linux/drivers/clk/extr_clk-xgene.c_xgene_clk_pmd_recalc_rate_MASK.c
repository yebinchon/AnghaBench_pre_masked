
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned long u32 ;
struct xgene_clk_pmd {unsigned long mask; unsigned long shift; int flags; unsigned long denom; scalar_t__ lock; int reg; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (scalar_t__,unsigned long) ;
 struct xgene_clk_pmd* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_7(struct clk_hw *VAR_1,
            unsigned long VAR_2)
{
 struct xgene_clk_pmd *VAR_3 = FUNC_6(VAR_1);
 unsigned long VAR_4 = 0;
 u64 VAR_5, VAR_6;
 u32 VAR_7;

 if (VAR_3->lock)
  FUNC_4(VAR_3->lock, VAR_4);
 else
  FUNC_0(VAR_3->lock);

 VAR_7 = FUNC_3(VAR_3->reg);

 if (VAR_3->lock)
  FUNC_5(VAR_3->lock, VAR_4);
 else
  FUNC_1(VAR_3->lock);

 VAR_5 = (u64)VAR_2;

 VAR_6 = (VAR_7 & VAR_3->mask) >> VAR_3->shift;
 if (VAR_3->flags & VAR_0)
  VAR_6 = VAR_3->denom - VAR_6;
 else
  VAR_6++;


 FUNC_2(VAR_5, VAR_3->denom);
 VAR_5 *= VAR_6;
 if (VAR_5 == 0)
  VAR_5 = (u64)VAR_2;

 return VAR_5;
}
