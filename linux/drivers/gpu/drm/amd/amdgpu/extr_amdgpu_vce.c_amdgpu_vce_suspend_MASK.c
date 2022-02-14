
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * handles; int * vcpu_bo; int idle_work; } ;
struct amdgpu_device {TYPE_1__ vce; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct amdgpu_device *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_2->vce.idle_work);

 if (VAR_2->vce.vcpu_bo == ((void*)0))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  if (FUNC_0(&VAR_2->vce.handles[VAR_3]))
   break;

 if (VAR_3 == VAR_0)
  return 0;


 return -VAR_1;
}
