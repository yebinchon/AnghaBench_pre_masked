
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pp_hwmgr {int * pptable_func; int * hwmgr_func; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (struct pp_hwmgr*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(struct pp_hwmgr *VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_2->adev;

 VAR_2->hwmgr_func = &VAR_0;
 VAR_2->pptable_func = &VAR_1;
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_2);

 return 0;
}
