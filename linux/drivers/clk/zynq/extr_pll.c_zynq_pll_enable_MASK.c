
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct zynq_pll {int lockbit; int lock; int pll_status; int pll_ctrl; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 struct zynq_pll* FUNC_4 (struct clk_hw*) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_7(struct clk_hw *VAR_2)
{
 unsigned long VAR_3 = 0;
 u32 VAR_4;
 struct zynq_pll *VAR_5 = FUNC_4(VAR_2);

 if (FUNC_6(VAR_2))
  return 0;

 FUNC_0("PLL: enable\n");


 FUNC_2(VAR_5->lock, VAR_3);

 VAR_4 = FUNC_1(VAR_5->pll_ctrl);
 VAR_4 &= ~(VAR_1 | VAR_0);
 FUNC_5(VAR_4, VAR_5->pll_ctrl);
 while (!(FUNC_1(VAR_5->pll_status) & (1 << VAR_5->lockbit)))
  ;

 FUNC_3(VAR_5->lock, VAR_3);

 return 0;
}
