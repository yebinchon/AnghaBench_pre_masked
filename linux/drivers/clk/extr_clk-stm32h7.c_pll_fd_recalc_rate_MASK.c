
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef int u32 ;
struct stm32_fractional_divider {int mshift; int nshift; scalar_t__ nwidth; int nreg; scalar_t__ mwidth; int mreg; } ;
struct stm32_pll_obj {struct stm32_fractional_divider div; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (int ) ;
 struct stm32_pll_obj* FUNC_5 (struct clk_hw*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk_hw *VAR_0,
  unsigned long VAR_1)
{
 struct stm32_pll_obj *VAR_2 = FUNC_5(VAR_0);
 struct stm32_fractional_divider *VAR_3 = &VAR_2->div;
 unsigned long VAR_4, VAR_5;
 u32 VAR_6, VAR_7;
 u64 VAR_8, VAR_9 = 0;

 VAR_6 = FUNC_4(VAR_3->mreg);
 VAR_7 = FUNC_0(VAR_3->mwidth - 1, 0) << VAR_3->mshift;
 VAR_4 = (VAR_6 & VAR_7) >> VAR_3->mshift;

 VAR_6 = FUNC_4(VAR_3->nreg);
 VAR_7 = FUNC_0(VAR_3->nwidth - 1, 0) << VAR_3->nshift;
 VAR_5 = ((VAR_6 & VAR_7) >> VAR_3->nshift) + 1;

 if (!VAR_5 || !VAR_4)
  return VAR_1;

 VAR_8 = (u64)VAR_1 * VAR_5;
 FUNC_1(VAR_8, VAR_4);

 if (FUNC_2(VAR_0)) {
  VAR_6 = FUNC_3(VAR_0);
  VAR_9 = (u64)VAR_1 * (u64)VAR_6;
  FUNC_1(VAR_9, (VAR_4 * 8191));
 }

 return VAR_8 + VAR_9;
}
