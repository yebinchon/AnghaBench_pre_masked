
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
struct radeon_clock_and_voltage_limits {size_t mclk; } ;
struct TYPE_6__ {struct radeon_clock_and_voltage_limits max_clock_voltage_on_ac; } ;
struct TYPE_7__ {int new_active_crtc_count; TYPE_1__ dyn_state; } ;
struct TYPE_8__ {TYPE_2__ dpm; } ;
struct radeon_device {scalar_t__ family; TYPE_3__ pm; } ;
struct TYPE_9__ {size_t* nbp_memory_clock; scalar_t__ nb_dpm_enable; } ;
struct kv_power_info {size_t lowest_valid; size_t highest_valid; TYPE_5__* graphics_level; scalar_t__ battery_state; TYPE_4__ sys_info; scalar_t__ video_start; } ;
struct TYPE_10__ {int GnbSlow; int ForceNbPs1; int UpH; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct kv_power_info* FUNC_0 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_1(struct radeon_device *VAR_3)
{
 struct kv_power_info *VAR_4 = FUNC_0(VAR_3);
 u32 VAR_5;
 bool VAR_6;
 struct radeon_clock_and_voltage_limits *VAR_7 =
  &VAR_3->pm.dpm.dyn_state.max_clock_voltage_on_ac;
 u32 VAR_8 = VAR_7->mclk;

 if (VAR_4->lowest_valid > VAR_4->highest_valid)
  return -VAR_2;

 if (VAR_3->family == VAR_0 || VAR_3->family == VAR_1) {
  for (VAR_5 = VAR_4->lowest_valid; VAR_5 <= VAR_4->highest_valid; VAR_5++) {
   VAR_4->graphics_level[VAR_5].GnbSlow = 1;
   VAR_4->graphics_level[VAR_5].ForceNbPs1 = 0;
   VAR_4->graphics_level[VAR_5].UpH = 0;
  }

  if (!VAR_4->sys_info.nb_dpm_enable)
   return 0;

  VAR_6 = ((VAR_8 >= VAR_4->sys_info.nbp_memory_clock[3]) ||
         (VAR_3->pm.dpm.new_active_crtc_count >= 3) || VAR_4->video_start);

  if (VAR_6) {
   for (VAR_5 = VAR_4->lowest_valid; VAR_5 <= VAR_4->highest_valid; VAR_5++)
    VAR_4->graphics_level[VAR_5].GnbSlow = 0;
  } else {
   if (VAR_4->battery_state)
    VAR_4->graphics_level[0].ForceNbPs1 = 1;

   VAR_4->graphics_level[1].GnbSlow = 0;
   VAR_4->graphics_level[2].GnbSlow = 0;
   VAR_4->graphics_level[3].GnbSlow = 0;
   VAR_4->graphics_level[4].GnbSlow = 0;
  }
 } else {
  for (VAR_5 = VAR_4->lowest_valid; VAR_5 <= VAR_4->highest_valid; VAR_5++) {
   VAR_4->graphics_level[VAR_5].GnbSlow = 1;
   VAR_4->graphics_level[VAR_5].ForceNbPs1 = 0;
   VAR_4->graphics_level[VAR_5].UpH = 0;
  }

  if (VAR_4->sys_info.nb_dpm_enable && VAR_4->battery_state) {
   VAR_4->graphics_level[VAR_4->lowest_valid].UpH = 0x28;
   VAR_4->graphics_level[VAR_4->lowest_valid].GnbSlow = 0;
   if (VAR_4->lowest_valid != VAR_4->highest_valid)
    VAR_4->graphics_level[VAR_4->lowest_valid].ForceNbPs1 = 1;
  }
 }
 return 0;
}
