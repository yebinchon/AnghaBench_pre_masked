
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_rings; TYPE_2__* ring; } ;
struct amdgpu_device {TYPE_3__ vce; } ;
struct TYPE_4__ {int ready; } ;
struct TYPE_5__ {TYPE_1__ sched; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 int VAR_2;

 if (!FUNC_1(VAR_1)) {

  FUNC_2(VAR_1);
 } else {

  FUNC_0("For SRIOV client, shouldn't do anything.\n");
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->vce.num_rings; VAR_2++)
  VAR_1->vce.ring[VAR_2].sched.ready = 0;

 return 0;
}
