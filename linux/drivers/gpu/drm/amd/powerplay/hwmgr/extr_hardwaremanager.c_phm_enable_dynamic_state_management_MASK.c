
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pp_hwmgr {TYPE_1__* hwmgr_func; struct amdgpu_device* adev; } ;
struct amdgpu_device {scalar_t__ in_suspend; } ;
struct TYPE_2__ {int (* dynamic_state_management_enable ) (struct pp_hwmgr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct pp_hwmgr*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct pp_hwmgr*) ;
 int FUNC_4 (struct pp_hwmgr*) ;

int FUNC_5(struct pp_hwmgr *VAR_1)
{
 struct amdgpu_device *VAR_2 = ((void*)0);
 int VAR_3 = -VAR_0;
 FUNC_0(VAR_1);
 VAR_2 = VAR_1->adev;


 if (FUNC_3(VAR_1) && !FUNC_1(VAR_2)
  && VAR_2->in_suspend) {
  FUNC_2("dpm has been enabled\n");
  return 0;
 }

 if (((void*)0) != VAR_1->hwmgr_func->dynamic_state_management_enable)
  VAR_3 = VAR_1->hwmgr_func->dynamic_state_management_enable(VAR_1);

 return VAR_3;
}
