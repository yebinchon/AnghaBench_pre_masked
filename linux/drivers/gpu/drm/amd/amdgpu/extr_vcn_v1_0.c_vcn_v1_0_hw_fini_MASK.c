
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
struct amdgpu_device {int pg_flags; TYPE_2__ vcn; } ;
struct TYPE_4__ {struct amdgpu_ring ring_dec; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_4)
{
 struct amdgpu_device *VAR_5 = (struct amdgpu_device *)VAR_4;
 struct amdgpu_ring *VAR_6 = &VAR_5->vcn.inst->ring_dec;

 if ((VAR_5->pg_flags & VAR_1) ||
  FUNC_0(VAR_2, 0, VAR_3))
  FUNC_1(VAR_5, VAR_0);

 VAR_6->sched.ready = 0;

 return 0;
}
