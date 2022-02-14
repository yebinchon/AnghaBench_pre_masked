
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_states {int dprefclk_khz; } ;
struct clk_state_registers_and_bypass {int dprefclk; int member_0; } ;
struct clk_mgr {int dummy; } ;
struct clk_log_info {int member_0; } ;


 int FUNC_0 (struct clk_state_registers_and_bypass*,struct clk_mgr*,struct clk_log_info*) ;

void FUNC_1(struct clk_mgr *VAR_0, struct clk_states *VAR_1)
{
 struct clk_state_registers_and_bypass VAR_2 = { 0 };
 struct clk_log_info VAR_3 = { 0 };

 FUNC_0(&VAR_2, VAR_0, &VAR_3);

 VAR_1->dprefclk_khz = VAR_2.dprefclk;
}
