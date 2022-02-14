
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int ready; } ;
struct amdgpu_ring {TYPE_4__ sched; } ;
struct TYPE_7__ {int num_instances; TYPE_1__* instance; } ;
struct TYPE_6__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct amdgpu_device {TYPE_3__ sdma; TYPE_2__ mman; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct amdgpu_device *VAR_4)
{
 struct amdgpu_ring *VAR_5 = &VAR_4->sdma.instance[0].ring;
 struct amdgpu_ring *VAR_6 = &VAR_4->sdma.instance[1].ring;
 u32 VAR_7;
 int VAR_8;

 if ((VAR_4->mman.buffer_funcs_ring == VAR_5) ||
     (VAR_4->mman.buffer_funcs_ring == VAR_6))
   FUNC_2(VAR_4, 0);

 for (VAR_8 = 0; VAR_8 < VAR_4->sdma.num_instances; VAR_8++) {
  VAR_7 = FUNC_0(VAR_2 + VAR_3[VAR_8]);
  VAR_7 &= ~VAR_0;
  FUNC_1(VAR_2 + VAR_3[VAR_8], VAR_7);
  FUNC_1(VAR_1 + VAR_3[VAR_8], 0);
 }
 VAR_5->sched.ready = 0;
 VAR_6->sched.ready = 0;
}
