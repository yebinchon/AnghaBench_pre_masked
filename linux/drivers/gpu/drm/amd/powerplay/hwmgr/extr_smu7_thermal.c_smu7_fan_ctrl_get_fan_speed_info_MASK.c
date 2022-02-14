
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ulMaxRPM; scalar_t__ ulMinRPM; scalar_t__ ucTachometerPulsesPerRevolution; scalar_t__ bNoFan; } ;
struct TYPE_4__ {TYPE_1__ fanInfo; } ;
struct pp_hwmgr {TYPE_2__ thermal_controller; } ;
struct phm_fan_speed_info {int supports_percent_read; int supports_percent_write; int max_percent; int supports_rpm_read; int supports_rpm_write; scalar_t__ max_rpm; scalar_t__ min_rpm; scalar_t__ min_percent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct pp_hwmgr *VAR_2,
  struct phm_fan_speed_info *VAR_3)
{
 if (VAR_2->thermal_controller.fanInfo.bNoFan)
  return -VAR_0;

 VAR_3->supports_percent_read = 1;
 VAR_3->supports_percent_write = 1;
 VAR_3->min_percent = 0;
 VAR_3->max_percent = 100;

 if (FUNC_0(VAR_1) &&
     VAR_2->thermal_controller.fanInfo.ucTachometerPulsesPerRevolution) {
  VAR_3->supports_rpm_read = 1;
  VAR_3->supports_rpm_write = 1;
  VAR_3->min_rpm = VAR_2->thermal_controller.fanInfo.ulMinRPM;
  VAR_3->max_rpm = VAR_2->thermal_controller.fanInfo.ulMaxRPM;
 } else {
  VAR_3->min_rpm = 0;
  VAR_3->max_rpm = 0;
 }

 return 0;
}
