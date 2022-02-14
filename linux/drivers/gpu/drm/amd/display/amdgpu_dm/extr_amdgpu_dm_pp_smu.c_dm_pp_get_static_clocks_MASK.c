
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_pp_static_clock_info {int max_mclk_khz; int max_sclk_khz; int max_clocks_state; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_6__ {scalar_t__ funcs; } ;
struct TYPE_5__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_3__ smu; TYPE_2__ powerplay; } ;
struct amd_pp_clock_info {int max_memory_clock; int max_engine_clock; int max_clocks_state; int member_0; } ;
struct TYPE_4__ {int (* get_current_clocks ) (int ,struct amd_pp_clock_info*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,struct amd_pp_clock_info*) ;
 int FUNC_2 (int ,struct amd_pp_clock_info*) ;

bool FUNC_3(
 const struct dc_context *VAR_0,
 struct dm_pp_static_clock_info *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->driver_context;
 struct amd_pp_clock_info VAR_3 = {0};
 int VAR_4 = 0;

 if (VAR_2->powerplay.pp_funcs && VAR_2->powerplay.pp_funcs->get_current_clocks)
  VAR_4 = VAR_2->powerplay.pp_funcs->get_current_clocks(
   VAR_2->powerplay.pp_handle,
   &VAR_3);
 else if (VAR_2->smu.funcs)
  VAR_4 = FUNC_1(&VAR_2->smu, &VAR_3);
 if (VAR_4)
  return 0;

 VAR_1->max_clocks_state = FUNC_0(VAR_3.max_clocks_state);
 VAR_1->max_mclk_khz = VAR_3.max_memory_clock * 10;
 VAR_1->max_sclk_khz = VAR_3.max_engine_clock * 10;

 return 1;
}
