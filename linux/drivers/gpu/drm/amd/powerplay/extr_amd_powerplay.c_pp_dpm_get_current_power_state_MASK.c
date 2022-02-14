
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ui_label; int flags; } ;
struct pp_power_state {TYPE_1__ classification; } ;
struct pp_hwmgr {int smu_lock; struct pp_power_state* current_ps; int pm_en; } ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum amd_pm_state_type FUNC_2(void *VAR_7)
{
 struct pp_hwmgr *VAR_8 = VAR_7;
 struct pp_power_state *VAR_9;
 enum amd_pm_state_type VAR_10;

 if (!VAR_8 || !VAR_8->pm_en || !VAR_8->current_ps)
  return -VAR_0;

 FUNC_0(&VAR_8->smu_lock);

 VAR_9 = VAR_8->current_ps;

 switch (VAR_9->classification.ui_label) {
 case 129:
  VAR_10 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_5;
  break;
 default:
  if (VAR_9->classification.flags & VAR_6)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_3;
  break;
 }
 FUNC_1(&VAR_8->smu_lock);

 return VAR_10;
}
