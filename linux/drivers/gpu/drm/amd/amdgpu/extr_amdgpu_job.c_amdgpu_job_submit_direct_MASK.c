
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_fence {int dummy; } ;
struct amdgpu_ring {int sched; } ;
struct TYPE_2__ {int * sched; } ;
struct amdgpu_job {int fence; int ibs; int num_ibs; TYPE_1__ base; } ;


 int FUNC_0 (struct amdgpu_ring*,int ,int ,int *,struct dma_fence**) ;
 int FUNC_1 (struct amdgpu_job*) ;
 int FUNC_2 (struct dma_fence*) ;

int FUNC_3(struct amdgpu_job *VAR_0, struct amdgpu_ring *VAR_1,
        struct dma_fence **VAR_2)
{
 int VAR_3;

 VAR_0->base.sched = &VAR_1->sched;
 VAR_3 = FUNC_0(VAR_1, VAR_0->num_ibs, VAR_0->ibs, ((void*)0), VAR_2);
 VAR_0->fence = FUNC_2(*VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_1(VAR_0);
 return 0;
}
