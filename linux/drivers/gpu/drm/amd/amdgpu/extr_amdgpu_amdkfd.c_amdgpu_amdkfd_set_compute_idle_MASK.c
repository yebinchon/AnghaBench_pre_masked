
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kgd_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_2__ powerplay; int smu; } ;
struct TYPE_3__ {scalar_t__ switch_power_profile; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct kgd_dev *VAR_1, bool VAR_2)
{
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;

 if (FUNC_1(VAR_3))
  FUNC_2(&VAR_3->smu,
      VAR_0,
      !VAR_2);
 else if (VAR_3->powerplay.pp_funcs &&
   VAR_3->powerplay.pp_funcs->switch_power_profile)
  FUNC_0(VAR_3,
      VAR_0,
      !VAR_2);
}
