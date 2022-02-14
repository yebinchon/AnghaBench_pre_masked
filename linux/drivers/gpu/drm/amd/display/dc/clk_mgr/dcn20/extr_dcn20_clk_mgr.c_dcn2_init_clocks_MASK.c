
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dc_clocks {int dummy; } ;
struct TYPE_2__ {int p_state_change_support; int prev_p_state_change_support; } ;
struct clk_mgr {TYPE_1__ clks; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

void FUNC_1(struct clk_mgr *VAR_0)
{
 FUNC_0(&(VAR_0->clks), 0, sizeof(struct dc_clocks));

 VAR_0->clks.p_state_change_support = 1;
 VAR_0->clks.prev_p_state_change_support = 1;
}
