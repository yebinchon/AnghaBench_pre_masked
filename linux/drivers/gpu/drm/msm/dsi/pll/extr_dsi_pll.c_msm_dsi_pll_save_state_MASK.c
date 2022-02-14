
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int state_saved; int (* save_state ) (struct msm_dsi_pll*) ;} ;


 int FUNC_0 (struct msm_dsi_pll*) ;

void FUNC_1(struct msm_dsi_pll *VAR_0)
{
 if (VAR_0->save_state) {
  VAR_0->save_state(VAR_0);
  VAR_0->state_saved = 1;
 }
}
