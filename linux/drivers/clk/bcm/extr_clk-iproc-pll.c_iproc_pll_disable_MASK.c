
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_pll_ctrl {int flags; } ;
struct iproc_pll {struct iproc_pll_ctrl* ctrl; } ;
struct iproc_clk {struct iproc_pll* pll; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iproc_pll*) ;
 struct iproc_clk* FUNC_1 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_2(struct clk_hw *VAR_1)
{
 struct iproc_clk *VAR_2 = FUNC_1(VAR_1);
 struct iproc_pll *VAR_3 = VAR_2->pll;
 const struct iproc_pll_ctrl *VAR_4 = VAR_3->ctrl;

 if (VAR_4->flags & VAR_0)
  return;

 FUNC_0(VAR_3);
}
