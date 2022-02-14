
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_ring {int adev; } ;
struct TYPE_4__ {TYPE_1__* s_fence; int sched; } ;
struct amdgpu_job {unsigned int num_ibs; int * ibs; struct dma_fence* fence; TYPE_2__ base; } ;
struct TYPE_3__ {struct dma_fence finished; } ;


 int FUNC_0 (int ,int *,struct dma_fence*) ;
 struct amdgpu_ring* FUNC_1 (int ) ;

void FUNC_2(struct amdgpu_job *VAR_0)
{
 struct amdgpu_ring *VAR_1 = FUNC_1(VAR_0->base.sched);
 struct dma_fence *VAR_2;
 unsigned VAR_3;


 VAR_2 = VAR_0->base.s_fence ? &VAR_0->base.s_fence->finished : VAR_0->fence;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_ibs; ++VAR_3)
  FUNC_0(VAR_1->adev, &VAR_0->ibs[VAR_3], VAR_2);
}
