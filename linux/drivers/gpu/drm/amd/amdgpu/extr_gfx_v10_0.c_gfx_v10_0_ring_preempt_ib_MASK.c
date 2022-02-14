
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {scalar_t__ trail_seq; int idx; int * trail_fence_cpu_addr; int trail_fence_gpu_addr; struct amdgpu_device* adev; } ;
struct amdgpu_kiq {TYPE_2__* pmf; struct amdgpu_ring ring; } ;
struct TYPE_3__ {struct amdgpu_kiq kiq; } ;
struct amdgpu_device {int usec_timeout; TYPE_1__ gfx; } ;
struct TYPE_4__ {int (* kiq_unmap_queues ) (struct amdgpu_ring*,struct amdgpu_ring*,int ,int ,scalar_t__) ;int unmap_queues_size; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct amdgpu_ring*,int ) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct amdgpu_ring*,struct amdgpu_ring*,int ,int ,scalar_t__) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_ring *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 struct amdgpu_device *VAR_6 = VAR_3->adev;
 struct amdgpu_kiq *VAR_7 = &VAR_6->gfx.kiq;
 struct amdgpu_ring *VAR_8 = &VAR_7->ring;

 if (!VAR_7->pmf || !VAR_7->pmf->kiq_unmap_queues)
  return -VAR_0;

 if (FUNC_1(VAR_8, VAR_7->pmf->unmap_queues_size))
  return -VAR_1;


 FUNC_3(VAR_3, 0);


 VAR_7->pmf->kiq_unmap_queues(VAR_8, VAR_3, VAR_2,
       VAR_3->trail_fence_gpu_addr,
       ++VAR_3->trail_seq);
 FUNC_2(VAR_8);


 for (VAR_4 = 0; VAR_4 < VAR_6->usec_timeout; VAR_4++) {
  if (VAR_3->trail_seq ==
      FUNC_4(*(VAR_3->trail_fence_cpu_addr)))
   break;
  FUNC_6(1);
 }

 if (VAR_4 >= VAR_6->usec_timeout) {
  VAR_5 = -VAR_0;
  FUNC_0("ring %d failed to preempt ib\n", VAR_3->idx);
 }


 FUNC_3(VAR_3, 1);
 return VAR_5;
}
