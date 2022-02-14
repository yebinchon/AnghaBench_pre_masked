
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ui_label; } ;
struct pp_power_state {TYPE_1__ classification; } ;
struct pp_hwmgr {int num_ps; scalar_t__ ps_size; struct pp_power_state* ps; } ;
typedef enum PP_StateUILabel { ____Placeholder_PP_StateUILabel } PP_StateUILabel ;


 int VAR_0 ;


 int VAR_1 ;

int FUNC_0(struct pp_hwmgr *VAR_2,
     enum PP_StateUILabel VAR_3,
     struct pp_power_state **VAR_4)
{
 int VAR_5;
 int VAR_6;

 if (!VAR_2->ps)
  return 0;

 VAR_5 = VAR_2->num_ps;
 *VAR_4 = VAR_2->ps;

restart_search:
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if ((*VAR_4)->classification.ui_label & VAR_3)
   return 0;
  *VAR_4 = (struct pp_power_state *)((uintptr_t)*VAR_4 + VAR_2->ps_size);
 }

 switch (VAR_3) {
 case 128:
 case 129:
  VAR_3 = VAR_1;
  goto restart_search;
 default:
  break;
 }
 return -VAR_0;
}
