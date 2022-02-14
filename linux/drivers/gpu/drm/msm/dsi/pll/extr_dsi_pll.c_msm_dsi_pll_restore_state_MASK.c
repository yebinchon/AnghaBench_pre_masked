
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_pll {int (* restore_state ) (struct msm_dsi_pll*) ;int state_saved; } ;


 int FUNC_0 (struct msm_dsi_pll*) ;

int FUNC_1(struct msm_dsi_pll *VAR_0)
{
 int VAR_1;

 if (VAR_0->restore_state && VAR_0->state_saved) {
  VAR_1 = VAR_0->restore_state(VAR_0);
  if (VAR_1)
   return VAR_1;

  VAR_0->state_saved = 0;
 }

 return 0;
}
