
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pp_display_clock_request {int clock_type; int clock_freq_in_khz; int member_0; } ;
struct dm_pp_clock_for_voltage_req {int clocks_in_khz; int clk_type; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_8__ {TYPE_3__* funcs; } ;
struct TYPE_6__ {int pp_handle; TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ smu; TYPE_2__ powerplay; } ;
struct TYPE_7__ {scalar_t__ display_clock_voltage_request; } ;
struct TYPE_5__ {int (* display_clock_voltage_request ) (int ,struct pp_display_clock_request*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,struct pp_display_clock_request*) ;
 int FUNC_2 (int ,struct pp_display_clock_request*) ;

bool FUNC_3(
 const struct dc_context *VAR_0,
 struct dm_pp_clock_for_voltage_req *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_0->driver_context;
 struct pp_display_clock_request VAR_3 = {0};
 int VAR_4 = 0;

 VAR_3.clock_type = FUNC_0(VAR_1->clk_type);
 VAR_3.clock_freq_in_khz = VAR_1->clocks_in_khz;

 if (!VAR_3.clock_type)
  return 0;

 if (VAR_2->powerplay.pp_funcs && VAR_2->powerplay.pp_funcs->display_clock_voltage_request)
  VAR_4 = VAR_2->powerplay.pp_funcs->display_clock_voltage_request(
   VAR_2->powerplay.pp_handle,
   &VAR_3);
 else if (VAR_2->smu.funcs &&
   VAR_2->smu.funcs->display_clock_voltage_request)
  VAR_4 = FUNC_1(&VAR_2->smu,
       &VAR_3);
 if (VAR_4)
  return 0;
 return 1;
}
