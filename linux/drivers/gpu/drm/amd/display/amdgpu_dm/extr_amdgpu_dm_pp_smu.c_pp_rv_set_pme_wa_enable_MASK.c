
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pp_smu {struct dc_context* dm; } ;
struct dc_context {struct amdgpu_device* driver_context; } ;
struct TYPE_4__ {scalar_t__ funcs; } ;
struct TYPE_3__ {struct amd_pm_funcs* pp_funcs; void* pp_handle; } ;
struct amdgpu_device {TYPE_2__ smu; TYPE_1__ powerplay; } ;
struct amd_pm_funcs {int (* notify_smu_enable_pwe ) (void*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (void*) ;

void FUNC_2(struct pp_smu *VAR_0)
{
 const struct dc_context *VAR_1 = VAR_0->dm;
 struct amdgpu_device *VAR_2 = VAR_1->driver_context;
 void *VAR_3 = VAR_2->powerplay.pp_handle;
 const struct amd_pm_funcs *VAR_4 = VAR_2->powerplay.pp_funcs;

 if (VAR_4 && VAR_4->notify_smu_enable_pwe)
  VAR_4->notify_smu_enable_pwe(VAR_3);
 else if (VAR_2->smu.funcs)
  FUNC_0(&VAR_2->smu);
}
