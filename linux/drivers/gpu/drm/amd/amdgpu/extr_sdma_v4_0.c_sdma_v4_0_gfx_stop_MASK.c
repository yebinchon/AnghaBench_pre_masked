
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
struct TYPE_7__ {struct amdgpu_ring* buffer_funcs_ring; } ;
struct TYPE_6__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_3__ mman; TYPE_2__ sdma; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct amdgpu_device*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct amdgpu_device *VAR_7)
{
 struct amdgpu_ring *VAR_8[VAR_0];
 u32 VAR_9, VAR_10;
 int VAR_11, VAR_12 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_7->sdma.num_instances; VAR_11++) {
  VAR_8[VAR_11] = &VAR_7->sdma.instance[VAR_11].ring;

  if ((VAR_7->mman.buffer_funcs_ring == VAR_8[VAR_11]) && VAR_12 != 1) {
   FUNC_3(VAR_7, 0);
   VAR_12 = 1;
  }

  VAR_9 = FUNC_1(VAR_11, VAR_6);
  VAR_9 = FUNC_0(VAR_9, VAR_4, VAR_2, 0);
  FUNC_2(VAR_11, VAR_6, VAR_9);
  VAR_10 = FUNC_1(VAR_11, VAR_5);
  VAR_10 = FUNC_0(VAR_10, VAR_3, VAR_1, 0);
  FUNC_2(VAR_11, VAR_5, VAR_10);

  VAR_8[VAR_11]->sched.ready = 0;
 }
}
