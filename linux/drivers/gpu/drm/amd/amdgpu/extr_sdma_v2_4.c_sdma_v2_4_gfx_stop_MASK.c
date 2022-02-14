
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7)
{
 struct amdgpu_ring *VAR_8 = &VAR_7->sdma.instance[0].ring;
 struct amdgpu_ring *VAR_9 = &VAR_7->sdma.instance[1].ring;
 u32 VAR_10, VAR_11;
 int VAR_12;

 if ((VAR_7->mman.buffer_funcs_ring == VAR_8) ||
     (VAR_7->mman.buffer_funcs_ring == VAR_9))
  FUNC_3(VAR_7, 0);

 for (VAR_12 = 0; VAR_12 < VAR_7->sdma.num_instances; VAR_12++) {
  VAR_10 = FUNC_1(VAR_5 + VAR_6[VAR_12]);
  VAR_10 = FUNC_0(VAR_10, VAR_3, VAR_1, 0);
  FUNC_2(VAR_5 + VAR_6[VAR_12], VAR_10);
  VAR_11 = FUNC_1(VAR_4 + VAR_6[VAR_12]);
  VAR_11 = FUNC_0(VAR_11, VAR_2, VAR_0, 0);
  FUNC_2(VAR_4 + VAR_6[VAR_12], VAR_11);
 }
 VAR_8->sched.ready = 0;
 VAR_9->sched.ready = 0;
}
