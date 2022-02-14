
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ac_power; int mutex; scalar_t__ dpm_enabled; } ;
struct TYPE_5__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_3__ pm; TYPE_2__ powerplay; } ;
struct TYPE_4__ {scalar_t__ enable_bapm; } ;


 int FUNC_0 (struct amdgpu_device*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(struct amdgpu_device *VAR_0)
{
 if (VAR_0->pm.dpm_enabled) {
  FUNC_1(&VAR_0->pm.mutex);
  if (FUNC_3() > 0)
   VAR_0->pm.ac_power = 1;
  else
   VAR_0->pm.ac_power = 0;
  if (VAR_0->powerplay.pp_funcs->enable_bapm)
   FUNC_0(VAR_0, VAR_0->pm.ac_power);
  FUNC_2(&VAR_0->pm.mutex);
 }
}
