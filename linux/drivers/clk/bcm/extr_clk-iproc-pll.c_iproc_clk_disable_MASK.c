
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iproc_pll {scalar_t__ control_base; } ;
struct TYPE_2__ {int enable_shift; scalar_t__ offset; } ;
struct iproc_clk_ctrl {int flags; TYPE_1__ enable; } ;
struct iproc_clk {struct iproc_pll* pll; struct iproc_clk_ctrl* ctrl; } ;
struct clk_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iproc_pll*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 struct iproc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct iproc_clk *VAR_2 = FUNC_2(VAR_1);
 const struct iproc_clk_ctrl *VAR_3 = VAR_2->ctrl;
 struct iproc_pll *VAR_4 = VAR_2->pll;
 u32 VAR_5;

 if (VAR_3->flags & VAR_0)
  return;

 VAR_5 = FUNC_1(VAR_4->control_base + VAR_3->enable.offset);
 VAR_5 |= 1 << VAR_3->enable.enable_shift;
 FUNC_0(VAR_4, VAR_4->control_base, VAR_3->enable.offset, VAR_5);
}
