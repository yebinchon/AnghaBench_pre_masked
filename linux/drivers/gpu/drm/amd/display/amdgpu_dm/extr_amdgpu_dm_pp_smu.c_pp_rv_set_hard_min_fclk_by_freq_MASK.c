
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_smu {struct dc_context* dm; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_2__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* set_hard_min_fclk_by_freq ) (void*,int) ;} ;


 int FUNC_0 (void*,int) ;

void FUNC_1(struct pp_smu *VAR_0, int VAR_1)
{
 const struct dc_context *VAR_2 = VAR_0->dm;
 struct amdgpu_device *VAR_3 = VAR_2->driver_context;
 void *VAR_4 = VAR_3->powerplay.pp_handle;
 const struct amd_pm_funcs *VAR_5 = VAR_3->powerplay.pp_funcs;

 if (!VAR_5 || !VAR_5->set_hard_min_fclk_by_freq)
  return;

 VAR_5->set_hard_min_fclk_by_freq(VAR_4, VAR_1);
}
