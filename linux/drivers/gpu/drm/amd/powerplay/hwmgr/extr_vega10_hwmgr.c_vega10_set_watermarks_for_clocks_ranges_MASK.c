
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int disable_water_mark; } ;
struct TYPE_3__ {int water_marks_table; } ;
struct vega10_hwmgr {int water_marks_bitmap; TYPE_2__ registry_data; TYPE_1__ smc_state_table; } ;
struct pp_hwmgr {struct vega10_hwmgr* backend; } ;
struct dm_pp_wm_sets_with_clock_ranges_soc15 {int dummy; } ;
typedef int Watermarks_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct dm_pp_wm_sets_with_clock_ranges_soc15*) ;

__attribute__((used)) static int FUNC_1(struct pp_hwmgr *VAR_1,
       void *VAR_2)
{
 struct vega10_hwmgr *VAR_3 = VAR_1->backend;
 struct dm_pp_wm_sets_with_clock_ranges_soc15 *VAR_4 = VAR_2;
 Watermarks_t *VAR_5 = &(VAR_3->smc_state_table.water_marks_table);
 int VAR_6 = 0;

 if (!VAR_3->registry_data.disable_water_mark) {
  FUNC_0(VAR_5, VAR_4);
  VAR_3->water_marks_bitmap = VAR_0;
 }

 return VAR_6;
}
