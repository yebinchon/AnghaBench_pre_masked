
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {TYPE_2__ sched; } ;
struct TYPE_5__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_7__ {unsigned int num_instances; TYPE_4__* instance; } ;
struct amdgpu_device {TYPE_1__ mman; TYPE_3__ sdma; } ;
struct TYPE_8__ {struct amdgpu_ring ring; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_3)
{
 struct amdgpu_ring *VAR_4;
 u32 VAR_5;
 unsigned VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->sdma.num_instances; VAR_6++) {
  VAR_4 = &VAR_3->sdma.instance[VAR_6].ring;

  VAR_5 = FUNC_0(VAR_0 + VAR_2[VAR_6]);
  VAR_5 &= ~VAR_1;
  FUNC_1(VAR_0 + VAR_2[VAR_6], VAR_5);

  if (VAR_3->mman.buffer_funcs_ring == VAR_4)
   FUNC_2(VAR_3, 0);
  VAR_4->sched.ready = 0;
 }
}
