
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_prt_users; } ;
struct amdgpu_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (struct amdgpu_device*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdgpu_device *VAR_0)
{
 if (FUNC_1(&VAR_0->vm_manager.num_prt_users) == 0)
  FUNC_0(VAR_0);
}
