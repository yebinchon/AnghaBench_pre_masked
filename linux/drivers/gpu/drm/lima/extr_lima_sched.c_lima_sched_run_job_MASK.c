
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lima_vm {int dummy; } ;
struct lima_sched_task {struct dma_fence* fence; struct lima_vm* vm; } ;
struct lima_sched_pipe {int num_l2_cache; int num_mmu; int error; int (* task_run ) (struct lima_sched_pipe*,struct lima_sched_task*) ;scalar_t__* mmu; scalar_t__ bcast_mmu; struct lima_vm* current_vm; int * l2_cache; struct lima_sched_task* current_task; } ;
struct dma_fence {int dummy; } ;
struct lima_fence {struct dma_fence base; } ;
struct drm_sched_job {TYPE_2__* s_fence; int sched; } ;
struct TYPE_3__ {scalar_t__ error; } ;
struct TYPE_4__ {TYPE_1__ finished; } ;


 struct dma_fence* FUNC_0 (struct dma_fence*) ;
 struct lima_fence* FUNC_1 (struct lima_sched_pipe*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,struct lima_vm*) ;
 struct lima_vm* FUNC_4 (struct lima_vm*) ;
 int FUNC_5 (struct lima_vm*) ;
 int FUNC_6 (struct lima_sched_pipe*,struct lima_sched_task*) ;
 struct lima_sched_pipe* FUNC_7 (int ) ;
 struct lima_sched_task* FUNC_8 (struct drm_sched_job*) ;

__attribute__((used)) static struct dma_fence *FUNC_9(struct drm_sched_job *VAR_0)
{
 struct lima_sched_task *VAR_1 = FUNC_8(VAR_0);
 struct lima_sched_pipe *VAR_2 = FUNC_7(VAR_0->sched);
 struct lima_fence *VAR_3;
 struct dma_fence *VAR_4;
 struct lima_vm *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7;


 if (VAR_0->s_fence->finished.error < 0)
  return ((void*)0);

 VAR_3 = FUNC_1(VAR_2);
 if (!VAR_3)
  return ((void*)0);
 VAR_1->fence = &VAR_3->base;




 VAR_4 = FUNC_0(VAR_1->fence);

 VAR_2->current_task = VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_2->num_l2_cache; VAR_7++)
  FUNC_2(VAR_2->l2_cache[VAR_7]);

 if (VAR_1->vm != VAR_2->current_vm) {
  VAR_5 = FUNC_4(VAR_1->vm);
  VAR_6 = VAR_2->current_vm;
  VAR_2->current_vm = VAR_1->vm;
 }

 if (VAR_2->bcast_mmu)
  FUNC_3(VAR_2->bcast_mmu, VAR_5);
 else {
  for (VAR_7 = 0; VAR_7 < VAR_2->num_mmu; VAR_7++)
   FUNC_3(VAR_2->mmu[VAR_7], VAR_5);
 }

 if (VAR_6)
  FUNC_5(VAR_6);

 VAR_2->error = 0;
 VAR_2->task_run(VAR_2, VAR_1);

 return VAR_1->fence;
}
