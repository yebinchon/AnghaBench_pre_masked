
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pp_clock_levels_with_latency {int member_0; } ;
struct dm_pp_clock_levels_with_latency {int dummy; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_6__ {TYPE_2__* ppt_funcs; } ;
struct TYPE_4__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_3__ smu; TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* get_clock_by_type_with_latency ) (void*,int ,struct pp_clock_levels_with_latency*) ;} ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
struct TYPE_5__ {scalar_t__ get_clock_by_type_with_latency; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct pp_clock_levels_with_latency*,struct dm_pp_clock_levels_with_latency*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int ,struct pp_clock_levels_with_latency*) ;
 int FUNC_4 (void*,int ,struct pp_clock_levels_with_latency*) ;

bool FUNC_5(
 const struct dc_context *VAR_0,
 enum dm_pp_clock_type VAR_1,
 struct dm_pp_clock_levels_with_latency *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0->driver_context;
 void *VAR_4 = VAR_3->powerplay.pp_handle;
 struct pp_clock_levels_with_latency VAR_5 = { 0 };
 const struct amd_pm_funcs *VAR_6 = VAR_3->powerplay.pp_funcs;
 int VAR_7;

 if (VAR_6 && VAR_6->get_clock_by_type_with_latency) {
  VAR_7 = VAR_6->get_clock_by_type_with_latency(VAR_4,
      FUNC_0(VAR_1),
      &VAR_5);
  if (VAR_7)
   return 0;
 } else if (VAR_3->smu.ppt_funcs && VAR_3->smu.ppt_funcs->get_clock_by_type_with_latency) {
  if (FUNC_3(&VAR_3->smu,
             FUNC_1(VAR_1),
             &VAR_5))
   return 0;
 }


 FUNC_2(&VAR_5, VAR_2, VAR_1);

 return 1;
}
