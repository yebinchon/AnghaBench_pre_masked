
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smu_dpm_context {TYPE_2__* dpm_current_power_state; int dpm_context; } ;
struct smu_context {int mutex; struct smu_dpm_context smu_dpm; } ;
typedef enum amd_pm_state_type { ____Placeholder_amd_pm_state_type } amd_pm_state_type ;
struct TYPE_3__ {int ui_label; int flags; } ;
struct TYPE_4__ {TYPE_1__ classification; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static enum
amd_pm_state_type FUNC_2(struct smu_context *VAR_7)
{
 enum amd_pm_state_type VAR_8;
 struct smu_dpm_context *VAR_9 = &(VAR_7->smu_dpm);

 if (!VAR_9->dpm_context ||
     !VAR_9->dpm_current_power_state)
  return -VAR_0;

 FUNC_0(&(VAR_7->mutex));
 switch (VAR_9->dpm_current_power_state->classification.ui_label) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_5;
  break;
 default:
  if (VAR_9->dpm_current_power_state->classification.flags & VAR_6)
   VAR_8 = VAR_4;
  else
   VAR_8 = VAR_3;
  break;
 }
 FUNC_1(&(VAR_7->mutex));

 return VAR_8;
}
