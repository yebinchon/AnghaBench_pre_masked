
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_prt_users; } ;
struct TYPE_5__ {TYPE_1__* gmc_funcs; } ;
struct amdgpu_device {TYPE_3__ vm_manager; TYPE_2__ gmc; } ;
struct TYPE_4__ {int set_prt; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0)
{
 if (!VAR_0->gmc.gmc_funcs->set_prt)
  return;

 if (FUNC_1(&VAR_0->vm_manager.num_prt_users) == 1)
  FUNC_0(VAR_0);
}
