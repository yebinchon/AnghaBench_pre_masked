
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct etnaviv_gpu {int lock; TYPE_1__* event; scalar_t__ mmu_context; int dev; } ;
struct TYPE_4__ {scalar_t__ size; scalar_t__ user_size; } ;
struct etnaviv_gem_submit {int runtime_resumed; int refcount; scalar_t__ nr_pmrs; TYPE_2__ cmdbuf; scalar_t__ mmu_context; int exec_state; scalar_t__ prev_mmu_context; struct etnaviv_gpu* gpu; } ;
struct dma_fence {int dummy; } ;
struct TYPE_3__ {struct etnaviv_gem_submit* submit; int * sync_point; struct dma_fence* fence; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct etnaviv_gpu*,int ,scalar_t__,unsigned int,TYPE_2__*) ;
 struct dma_fence* FUNC_2 (struct etnaviv_gpu*) ;
 int FUNC_3 (struct etnaviv_gpu*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct etnaviv_gpu*,unsigned int) ;
 int FUNC_6 (struct etnaviv_gpu*,unsigned int,unsigned int*) ;
 int FUNC_7 (struct etnaviv_gpu*,unsigned int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

struct dma_fence *FUNC_12(struct etnaviv_gem_submit *VAR_2)
{
 struct etnaviv_gpu *VAR_3 = VAR_2->gpu;
 struct dma_fence *VAR_4;
 unsigned int VAR_5, VAR_6 = 1, VAR_7[3];
 int VAR_8;

 if (!VAR_2->runtime_resumed) {
  VAR_8 = FUNC_11(VAR_3->dev);
  if (VAR_8 < 0)
   return ((void*)0);
  VAR_2->runtime_resumed = 1;
 }
 if (VAR_2->nr_pmrs)
  VAR_6 = 3;

 VAR_8 = FUNC_6(VAR_3, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0("no free events\n");
  return ((void*)0);
 }

 FUNC_9(&VAR_3->lock);

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_7(VAR_3, VAR_7[VAR_5]);

  goto out_unlock;
 }

 if (!VAR_3->mmu_context) {
  FUNC_4(VAR_2->mmu_context);
  VAR_3->mmu_context = VAR_2->mmu_context;
  FUNC_3(VAR_3);
 } else {
  FUNC_4(VAR_3->mmu_context);
  VAR_2->prev_mmu_context = VAR_3->mmu_context;
 }

 if (VAR_2->nr_pmrs) {
  VAR_3->event[VAR_7[1]].sync_point = &VAR_1;
  FUNC_8(&VAR_2->refcount);
  VAR_3->event[VAR_7[1]].submit = VAR_2;
  FUNC_5(VAR_3, VAR_7[1]);
 }

 VAR_3->event[VAR_7[0]].fence = VAR_4;
 VAR_2->cmdbuf.user_size = VAR_2->cmdbuf.size - 8;
 FUNC_1(VAR_3, VAR_2->exec_state, VAR_2->mmu_context,
        VAR_7[0], &VAR_2->cmdbuf);

 if (VAR_2->nr_pmrs) {
  VAR_3->event[VAR_7[2]].sync_point = &VAR_0;
  FUNC_8(&VAR_2->refcount);
  VAR_3->event[VAR_7[2]].submit = VAR_2;
  FUNC_5(VAR_3, VAR_7[2]);
 }

out_unlock:
 FUNC_10(&VAR_3->lock);

 return VAR_4;
}
