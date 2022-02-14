
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_ps {int class; scalar_t__ vce_active; scalar_t__ ecclk; scalar_t__ evclk; } ;
struct radeon_clock_and_voltage_limits {scalar_t__ mclk; scalar_t__ sclk; } ;
struct TYPE_6__ {struct radeon_clock_and_voltage_limits max_clock_voltage_on_dc; struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_8__ {size_t vce_level; int new_active_crtc_count; int ac_power; TYPE_2__* vce_states; TYPE_1__ dyn_state; } ;
struct TYPE_9__ {TYPE_3__ dpm; } ;
struct radeon_device {TYPE_4__ pm; } ;
struct ci_ps {int performance_level_count; TYPE_5__* performance_levels; } ;
struct ci_power_info {int battery_state; } ;
struct TYPE_10__ {scalar_t__ mclk; scalar_t__ sclk; } ;
struct TYPE_7__ {scalar_t__ sclk; scalar_t__ mclk; scalar_t__ ecclk; scalar_t__ evclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct radeon_device*) ;
 struct ci_power_info* FUNC_1 (struct radeon_device*) ;
 struct ci_ps* FUNC_2 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_3(struct radeon_device *VAR_2,
     struct radeon_ps *VAR_3)
{
 struct ci_ps *VAR_4 = FUNC_2(VAR_3);
 struct ci_power_info *VAR_5 = FUNC_1(VAR_2);
 struct radeon_clock_and_voltage_limits *VAR_6;
 bool VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_3->vce_active) {
  VAR_3->evclk = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].evclk;
  VAR_3->ecclk = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].ecclk;
 } else {
  VAR_3->evclk = 0;
  VAR_3->ecclk = 0;
 }

 if ((VAR_2->pm.dpm.new_active_crtc_count > 1) ||
     FUNC_0(VAR_2))
  VAR_7 = 1;
 else
  VAR_7 = 0;

 if ((VAR_3->class & VAR_1) == VAR_0)
  VAR_5->battery_state = 1;
 else
  VAR_5->battery_state = 0;

 if (VAR_2->pm.dpm.ac_power)
  VAR_6 = &VAR_2->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 else
  VAR_6 = &VAR_2->pm.dpm.dyn_state.max_clock_voltage_on_dc;

 if (VAR_2->pm.dpm.ac_power == 0) {
  for (VAR_10 = 0; VAR_10 < VAR_4->performance_level_count; VAR_10++) {
   if (VAR_4->performance_levels[VAR_10].mclk > VAR_6->mclk)
    VAR_4->performance_levels[VAR_10].mclk = VAR_6->mclk;
   if (VAR_4->performance_levels[VAR_10].sclk > VAR_6->sclk)
    VAR_4->performance_levels[VAR_10].sclk = VAR_6->sclk;
  }
 }



 if (VAR_7) {
  VAR_9 = VAR_4->performance_levels[VAR_4->performance_level_count - 1].mclk;
  VAR_8 = VAR_4->performance_levels[0].sclk;
 } else {
  VAR_9 = VAR_4->performance_levels[0].mclk;
  VAR_8 = VAR_4->performance_levels[0].sclk;
 }

 if (VAR_3->vce_active) {
  if (VAR_8 < VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].sclk)
   VAR_8 = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].sclk;
  if (VAR_9 < VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].mclk)
   VAR_9 = VAR_2->pm.dpm.vce_states[VAR_2->pm.dpm.vce_level].mclk;
 }

 VAR_4->performance_levels[0].sclk = VAR_8;
 VAR_4->performance_levels[0].mclk = VAR_9;

 if (VAR_4->performance_levels[1].sclk < VAR_4->performance_levels[0].sclk)
  VAR_4->performance_levels[1].sclk = VAR_4->performance_levels[0].sclk;

 if (VAR_7) {
  if (VAR_4->performance_levels[0].mclk < VAR_4->performance_levels[1].mclk)
   VAR_4->performance_levels[0].mclk = VAR_4->performance_levels[1].mclk;
 } else {
  if (VAR_4->performance_levels[1].mclk < VAR_4->performance_levels[0].mclk)
   VAR_4->performance_levels[1].mclk = VAR_4->performance_levels[0].mclk;
 }
}
