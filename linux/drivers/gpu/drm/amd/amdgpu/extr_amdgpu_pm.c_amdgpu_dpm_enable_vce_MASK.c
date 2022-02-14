
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int mutex; } ;
struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_3__ pm; TYPE_2__ powerplay; int smu; } ;
struct TYPE_4__ {scalar_t__ set_powergating_by_smu; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct amdgpu_device*,int ,int) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;

void FUNC_6(struct amdgpu_device *VAR_1, bool VAR_2)
{
 int VAR_3 = 0;
 if (FUNC_2(VAR_1)) {
     VAR_3 = FUNC_5(&VAR_1->smu, VAR_0, VAR_2);
     if (VAR_3)
  FUNC_0("[SW SMU]: dpm enable vce failed, state = %s, ret = %d. \n",
     VAR_2 ? "true" : "false", VAR_3);
 } else if (VAR_1->powerplay.pp_funcs->set_powergating_by_smu) {

  FUNC_3(&VAR_1->pm.mutex);
  FUNC_1(VAR_1, VAR_0, !VAR_2);
  FUNC_4(&VAR_1->pm.mutex);
 }
}
