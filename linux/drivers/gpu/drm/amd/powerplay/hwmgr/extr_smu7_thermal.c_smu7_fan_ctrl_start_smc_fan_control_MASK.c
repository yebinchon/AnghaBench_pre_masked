
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ucTargetTemperature; int usMaxFanPWM; int usMaxFanRPM; } ;
struct TYPE_6__ {TYPE_2__ advanceFanControlParameters; } ;
struct pp_hwmgr {int fan_ctrl_enabled; TYPE_3__ thermal_controller; int device; TYPE_1__* hwmgr_func; } ;
struct TYPE_4__ {int (* set_max_fan_pwm_output ) (struct pp_hwmgr*,int ) ;int (* set_max_fan_rpm_output ) (struct pp_hwmgr*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct pp_hwmgr*,int ) ;
 int FUNC_3 (struct pp_hwmgr*,int ,scalar_t__) ;
 int FUNC_4 (struct pp_hwmgr*,int ) ;
 int FUNC_5 (struct pp_hwmgr*,int ) ;

int FUNC_6(struct pp_hwmgr *VAR_7)
{
 int VAR_8;

 if (FUNC_0(VAR_3)) {
  FUNC_1(VAR_7->device, VAR_6, VAR_0);
  VAR_8 = FUNC_2(VAR_7, VAR_5);

  if (FUNC_0(VAR_2))
   VAR_7->hwmgr_func->set_max_fan_rpm_output(VAR_7,
     VAR_7->thermal_controller.
     advanceFanControlParameters.usMaxFanRPM);
  else
   VAR_7->hwmgr_func->set_max_fan_pwm_output(VAR_7,
     VAR_7->thermal_controller.
     advanceFanControlParameters.usMaxFanPWM);

 } else {
  FUNC_1(VAR_7->device, VAR_6, VAR_1);
  VAR_8 = FUNC_2(VAR_7, VAR_5);
 }

 if (!VAR_8 && VAR_7->thermal_controller.
   advanceFanControlParameters.ucTargetTemperature)
  VAR_8 = FUNC_3(VAR_7,
    VAR_4,
    VAR_7->thermal_controller.
    advanceFanControlParameters.ucTargetTemperature);
 VAR_7->fan_ctrl_enabled = 1;

 return VAR_8;
}
