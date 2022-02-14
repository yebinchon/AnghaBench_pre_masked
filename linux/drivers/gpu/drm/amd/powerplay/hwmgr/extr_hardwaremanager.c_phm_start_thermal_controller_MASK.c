
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int platformCaps; } ;
struct pp_hwmgr {TYPE_2__* hwmgr_func; TYPE_1__ platform_descriptor; struct amdgpu_device* adev; } ;
struct TYPE_8__ {int max_mem_emergency_temp; int max_mem_crit_temp; int min_mem_temp; int max_hotspot_emergency_temp; int max_hotspot_crit_temp; int min_hotspot_temp; int max_edge_emergency_temp; int max_temp; int min_temp; } ;
struct TYPE_9__ {TYPE_3__ thermal; } ;
struct TYPE_10__ {TYPE_4__ dpm; } ;
struct amdgpu_device {TYPE_5__ pm; } ;
struct PP_TemperatureRange {int mem_emergency_max; int mem_crit_max; int mem_min; int hotspot_emergency_max; int hotspot_crit_max; int hotspot_min; int edge_emergency_max; int max; int min; int member_8; int member_7; int member_6; int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {int (* start_thermal_controller ) (struct pp_hwmgr*,struct PP_TemperatureRange*) ;int (* get_thermal_temperature_range ) (struct pp_hwmgr*,struct PP_TemperatureRange*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct pp_hwmgr*,struct PP_TemperatureRange*) ;
 int FUNC_2 (struct pp_hwmgr*,struct PP_TemperatureRange*) ;

int FUNC_3(struct pp_hwmgr *VAR_3)
{
 int VAR_4 = 0;
 struct PP_TemperatureRange VAR_5 = {
  VAR_2,
  VAR_1,
  VAR_1,
  VAR_2,
  VAR_1,
  VAR_1,
  VAR_2,
  VAR_1,
  VAR_1};
 struct amdgpu_device *VAR_6 = VAR_3->adev;

 if (VAR_3->hwmgr_func->get_thermal_temperature_range)
  VAR_3->hwmgr_func->get_thermal_temperature_range(
    VAR_3, &VAR_5);

 if (FUNC_0(VAR_3->platform_descriptor.platformCaps,
   VAR_0)
   && VAR_3->hwmgr_func->start_thermal_controller != ((void*)0))
  VAR_4 = VAR_3->hwmgr_func->start_thermal_controller(VAR_3, &VAR_5);

 VAR_6->pm.dpm.thermal.min_temp = VAR_5.min;
 VAR_6->pm.dpm.thermal.max_temp = VAR_5.max;
 VAR_6->pm.dpm.thermal.max_edge_emergency_temp = VAR_5.edge_emergency_max;
 VAR_6->pm.dpm.thermal.min_hotspot_temp = VAR_5.hotspot_min;
 VAR_6->pm.dpm.thermal.max_hotspot_crit_temp = VAR_5.hotspot_crit_max;
 VAR_6->pm.dpm.thermal.max_hotspot_emergency_temp = VAR_5.hotspot_emergency_max;
 VAR_6->pm.dpm.thermal.min_mem_temp = VAR_5.mem_min;
 VAR_6->pm.dpm.thermal.max_mem_crit_temp = VAR_5.mem_crit_max;
 VAR_6->pm.dpm.thermal.max_mem_emergency_temp = VAR_5.mem_emergency_max;

 return VAR_4;
}
