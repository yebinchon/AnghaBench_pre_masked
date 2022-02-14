
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int count; TYPE_1__* entries; } ;
struct radeon_clock_and_voltage_limits {scalar_t__ vddc; } ;
struct TYPE_9__ {TYPE_2__ vce_clock_voltage_dependency_table; struct radeon_clock_and_voltage_limits max_clock_voltage_on_dc; struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_10__ {TYPE_3__ dyn_state; scalar_t__ ac_power; } ;
struct TYPE_11__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct TYPE_12__ {int vce_dpm_enable_mask; } ;
struct ci_power_info {TYPE_6__ dpm_level_enable_mask; int caps_vce_dpm; } ;
struct TYPE_7__ {scalar_t__ v; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*,int ) ;
 int FUNC_2 (struct radeon_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct radeon_device *VAR_5, bool VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_0(VAR_5);
 const struct radeon_clock_and_voltage_limits *VAR_8;
 int VAR_9;

 if (VAR_5->pm.dpm.ac_power)
  VAR_8 = &VAR_5->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 else
  VAR_8 = &VAR_5->pm.dpm.dyn_state.max_clock_voltage_on_dc;

 if (VAR_6) {
  VAR_7->dpm_level_enable_mask.vce_dpm_enable_mask = 0;
  for (VAR_9 = VAR_5->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.count - 1; VAR_9 >= 0; VAR_9--) {
   if (VAR_5->pm.dpm.dyn_state.vce_clock_voltage_dependency_table.entries[VAR_9].v <= VAR_8->vddc) {
    VAR_7->dpm_level_enable_mask.vce_dpm_enable_mask |= 1 << VAR_9;

    if (!VAR_7->caps_vce_dpm)
     break;
   }
  }

  FUNC_2(VAR_5,
        VAR_3,
        VAR_7->dpm_level_enable_mask.vce_dpm_enable_mask);
 }

 return (FUNC_1(VAR_5, VAR_6 ?
       VAR_2 : VAR_1) == VAR_4) ?
  0 : -VAR_0;
}
