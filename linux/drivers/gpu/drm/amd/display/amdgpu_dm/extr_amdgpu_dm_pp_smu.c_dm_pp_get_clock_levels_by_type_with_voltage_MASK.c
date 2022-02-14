
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_clock_levels_with_voltage {int member_0; } ;
struct dm_pp_clock_levels_with_voltage {int dummy; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_6__ {TYPE_2__* ppt_funcs; } ;
struct TYPE_4__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_3__ smu; TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* get_clock_by_type_with_voltage ) (void*,int ,struct pp_clock_levels_with_voltage*) ;} ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
struct TYPE_5__ {scalar_t__ get_clock_by_type_with_voltage; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pp_clock_levels_with_voltage*,struct dm_pp_clock_levels_with_voltage*,int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ,struct pp_clock_levels_with_voltage*) ;
 int FUNC_3 (void*,int ,struct pp_clock_levels_with_voltage*) ;

bool FUNC_4(
 const struct dc_context *VAR_0,
 enum dm_pp_clock_type VAR_1,
 struct dm_pp_clock_levels_with_voltage *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0->driver_context;
 void *VAR_4 = VAR_3->powerplay.pp_handle;
 struct pp_clock_levels_with_voltage VAR_5 = {0};
 const struct amd_pm_funcs *VAR_6 = VAR_3->powerplay.pp_funcs;
 int VAR_7;

 if (VAR_6 && VAR_6->get_clock_by_type_with_voltage) {
  VAR_7 = VAR_6->get_clock_by_type_with_voltage(VAR_4,
      FUNC_0(VAR_1),
      &VAR_5);
  if (VAR_7)
   return 0;
 } else if (VAR_3->smu.ppt_funcs && VAR_3->smu.ppt_funcs->get_clock_by_type_with_voltage) {
  if (FUNC_2(&VAR_3->smu,
             FUNC_0(VAR_1),
             &VAR_5))
   return 0;
 }

 FUNC_1(&VAR_5, VAR_2, VAR_1);

 return 1;
}
