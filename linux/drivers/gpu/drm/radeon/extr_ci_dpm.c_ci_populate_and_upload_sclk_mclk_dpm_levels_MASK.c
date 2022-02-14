
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* u32 ;
struct radeon_ps {int dummy; } ;
struct radeon_device {int dummy; } ;
struct ci_ps {int performance_level_count; TYPE_1__* performance_levels; } ;
struct TYPE_10__ {int count; TYPE_4__* dpm_levels; } ;
struct TYPE_8__ {int count; TYPE_2__* dpm_levels; } ;
struct ci_dpm_table {TYPE_5__ mclk_table; TYPE_3__ sclk_table; } ;
struct ci_power_info {int need_update_smu7_dpm_table; struct ci_dpm_table dpm_table; } ;
struct TYPE_9__ {void* value; } ;
struct TYPE_7__ {void* value; } ;
struct TYPE_6__ {void* mclk; void* sclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ci_power_info* FUNC_0 (struct radeon_device*) ;
 struct ci_ps* FUNC_1 (struct radeon_ps*) ;
 int FUNC_2 (struct radeon_device*) ;
 int FUNC_3 (struct radeon_device*) ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_4,
             struct radeon_ps *VAR_5)
{
 struct ci_power_info *VAR_6 = FUNC_0(VAR_4);
 struct ci_ps *VAR_7 = FUNC_1(VAR_5);
 u32 VAR_8 = VAR_7->performance_levels[VAR_7->performance_level_count-1].sclk;
 u32 VAR_9 = VAR_7->performance_levels[VAR_7->performance_level_count-1].mclk;
 struct ci_dpm_table *VAR_10 = &VAR_6->dpm_table;
 int VAR_11;

 if (!VAR_6->need_update_smu7_dpm_table)
  return 0;

 if (VAR_6->need_update_smu7_dpm_table & VAR_1)
  VAR_10->sclk_table.dpm_levels[VAR_10->sclk_table.count-1].value = VAR_8;

 if (VAR_6->need_update_smu7_dpm_table & VAR_0)
  VAR_10->mclk_table.dpm_levels[VAR_10->mclk_table.count-1].value = VAR_9;

 if (VAR_6->need_update_smu7_dpm_table & (VAR_1 | VAR_3)) {
  VAR_11 = FUNC_2(VAR_4);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_6->need_update_smu7_dpm_table & (VAR_0 | VAR_2)) {
  VAR_11 = FUNC_3(VAR_4);
  if (VAR_11)
   return VAR_11;
 }

 return 0;
}
