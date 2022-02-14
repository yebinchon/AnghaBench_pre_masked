
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
struct radeon_ps {int dummy; } ;
struct TYPE_9__ {scalar_t__ current_active_crtc_count; scalar_t__ new_active_crtc_count; } ;
struct TYPE_10__ {TYPE_4__ dpm; } ;
struct radeon_device {TYPE_5__ pm; } ;
struct ci_single_dpm_table {size_t count; TYPE_3__* dpm_levels; } ;
struct ci_ps {int performance_level_count; TYPE_2__* performance_levels; } ;
struct TYPE_6__ {struct ci_single_dpm_table mclk_table; struct ci_single_dpm_table sclk_table; } ;
struct ci_power_info {int need_update_smu7_dpm_table; TYPE_1__ dpm_table; } ;
struct TYPE_8__ {size_t value; } ;
struct TYPE_7__ {size_t sclk; size_t mclk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;

__attribute__((used)) static void FUNC_2(struct radeon_device *VAR_5,
         struct radeon_ps *VAR_6)
{
 struct ci_power_info *VAR_7 = FUNC_0(VAR_5);
 struct ci_ps *VAR_8 = FUNC_1(VAR_6);
 struct ci_single_dpm_table *VAR_9 = &VAR_7->dpm_table.sclk_table;
 u32 VAR_10 = VAR_8->performance_levels[VAR_8->performance_level_count-1].sclk;
 struct ci_single_dpm_table *VAR_11 = &VAR_7->dpm_table.mclk_table;
 u32 VAR_12 = VAR_8->performance_levels[VAR_8->performance_level_count-1].mclk;
 u32 VAR_13;

 VAR_7->need_update_smu7_dpm_table = 0;

 for (VAR_13 = 0; VAR_13 < VAR_9->count; VAR_13++) {
  if (VAR_10 == VAR_9->dpm_levels[VAR_13].value)
   break;
 }

 if (VAR_13 >= VAR_9->count) {
  VAR_7->need_update_smu7_dpm_table |= VAR_2;
 } else {




  if (VAR_0 != VAR_0)
   VAR_7->need_update_smu7_dpm_table |= VAR_4;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->count; VAR_13++) {
  if (VAR_12 == VAR_11->dpm_levels[VAR_13].value)
   break;
 }

 if (VAR_13 >= VAR_11->count)
  VAR_7->need_update_smu7_dpm_table |= VAR_1;

 if (VAR_5->pm.dpm.current_active_crtc_count !=
     VAR_5->pm.dpm.new_active_crtc_count)
  VAR_7->need_update_smu7_dpm_table |= VAR_3;
}
