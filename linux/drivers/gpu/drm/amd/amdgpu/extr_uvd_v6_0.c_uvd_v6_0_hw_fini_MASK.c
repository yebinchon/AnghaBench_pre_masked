
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {TYPE_3__ sched; } ;
struct TYPE_5__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_4__ {struct amdgpu_ring ring; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1)
{
 struct amdgpu_device *VAR_2 = (struct amdgpu_device *)VAR_1;
 struct amdgpu_ring *VAR_3 = &VAR_2->uvd.inst->ring;

 if (FUNC_0(VAR_0) != 0)
  FUNC_1(VAR_2);

 VAR_3->sched.ready = 0;

 return 0;
}
