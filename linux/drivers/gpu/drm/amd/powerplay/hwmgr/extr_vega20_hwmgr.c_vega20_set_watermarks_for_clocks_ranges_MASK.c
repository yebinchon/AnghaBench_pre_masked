
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disable_water_mark; } ;
struct TYPE_6__ {int water_marks_table; } ;
struct vega20_hwmgr {int water_marks_bitmap; TYPE_2__* smu_features; TYPE_1__ registry_data; TYPE_3__ smc_state_table; } ;
struct pp_hwmgr {scalar_t__ backend; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int dummy; } ;
typedef int Watermarks_t ;
struct TYPE_5__ {scalar_t__ supported; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_4,
         void *VAR_5)
{
 struct vega20_hwmgr *VAR_6 = (struct vega20_hwmgr *)(VAR_4->backend);
 Watermarks_t *VAR_7 = &(VAR_6->smc_state_table.water_marks_table);
 struct dm_pp_wm_sets_with_clock_ranges_soc15 *VAR_8 = VAR_5;

 if (!VAR_6->registry_data.disable_water_mark &&
     VAR_6->smu_features[VAR_0].supported &&
     VAR_6->smu_features[VAR_1].supported) {
  FUNC_0(VAR_7, VAR_8);
  VAR_6->water_marks_bitmap |= VAR_2;
  VAR_6->water_marks_bitmap &= ~VAR_3;
 }

 return 0;
}
