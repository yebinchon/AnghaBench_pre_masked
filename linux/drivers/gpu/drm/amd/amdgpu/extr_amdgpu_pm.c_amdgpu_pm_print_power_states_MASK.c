
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_ps; int * ps; } ;
struct TYPE_8__ {TYPE_3__ dpm; } ;
struct TYPE_6__ {TYPE_1__* pp_funcs; } ;
struct amdgpu_device {TYPE_4__ pm; TYPE_2__ powerplay; } ;
struct TYPE_5__ {int * print_power_state; } ;


 int FUNC_0 (struct amdgpu_device*,int *) ;

void FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1;

 if (VAR_0->powerplay.pp_funcs->print_power_state == ((void*)0))
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->pm.dpm.num_ps; VAR_1++)
  FUNC_0(VAR_0, &VAR_0->pm.dpm.ps[VAR_1]);

}
