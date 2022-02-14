
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iproc_pll {scalar_t__ control_base; } ;
struct TYPE_2__ {int enable_shift; int hold_shift; scalar_t__ offset; } ;
struct iproc_clk_ctrl {TYPE_1__ enable; } ;
struct iproc_clk {struct iproc_pll* pll; struct iproc_clk_ctrl* ctrl; } ;
struct clk_hw {int dummy; } ;


 int FUNC_0 (struct iproc_pll*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 struct iproc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_0)
{
 struct iproc_clk *VAR_1 = FUNC_2(VAR_0);
 const struct iproc_clk_ctrl *VAR_2 = VAR_1->ctrl;
 struct iproc_pll *VAR_3 = VAR_1->pll;
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3->control_base + VAR_2->enable.offset);
 VAR_4 &= ~(1 << VAR_2->enable.enable_shift);
 FUNC_0(VAR_3, VAR_3->control_base, VAR_2->enable.offset, VAR_4);


 VAR_4 = FUNC_1(VAR_3->control_base + VAR_2->enable.offset);
 VAR_4 &= ~(1 << VAR_2->enable.hold_shift);
 FUNC_0(VAR_3, VAR_3->control_base, VAR_2->enable.offset, VAR_4);

 return 0;
}
