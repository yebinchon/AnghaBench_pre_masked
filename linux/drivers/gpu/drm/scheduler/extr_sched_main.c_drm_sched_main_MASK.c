
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct drm_sched_job {int cb; struct drm_sched_fence* s_fence; } ;
struct drm_sched_fence {int finished; int parent; } ;
struct drm_sched_entity {int dummy; } ;
struct drm_gpu_scheduler {int job_scheduled; TYPE_1__* ops; int hw_rq_count; int wake_up_worker; } ;
struct dma_fence {int dummy; } ;
struct TYPE_2__ {struct dma_fence* (* run_job ) (struct drm_sched_job*) ;} ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct dma_fence*) ;
 int FUNC_2 (struct dma_fence*) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int FUNC_4 (struct dma_fence*,int *,int (*) (struct dma_fence*,int *)) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (struct dma_fence*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct drm_gpu_scheduler*) ;
 int FUNC_9 (struct drm_gpu_scheduler*) ;
 struct drm_sched_job* FUNC_10 (struct drm_sched_entity*) ;
 int FUNC_11 (struct drm_sched_fence*) ;
 int FUNC_12 (struct drm_sched_job*) ;
 int FUNC_13 (struct dma_fence*,int *) ;
 struct drm_sched_entity* FUNC_14 (struct drm_gpu_scheduler*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int ,int ,struct sched_param*) ;
 struct dma_fence* FUNC_17 (struct drm_sched_job*) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(void *VAR_3)
{
 struct sched_param VAR_4 = {.sched_priority = 1};
 struct drm_gpu_scheduler *VAR_5 = (struct drm_gpu_scheduler *)VAR_3;
 int VAR_6;

 FUNC_16(VAR_2, VAR_1, &VAR_4);

 while (!FUNC_15()) {
  struct drm_sched_entity *VAR_7 = ((void*)0);
  struct drm_sched_fence *VAR_8;
  struct drm_sched_job *VAR_9;
  struct dma_fence *VAR_10;

  FUNC_18(VAR_5->wake_up_worker,
      (FUNC_9(VAR_5),
      (!FUNC_8(VAR_5) &&
       (VAR_7 = FUNC_14(VAR_5))) ||
      FUNC_15()));

  if (!VAR_7)
   continue;

  VAR_9 = FUNC_10(VAR_7);
  if (!VAR_9)
   continue;

  VAR_8 = VAR_9->s_fence;

  FUNC_3(&VAR_5->hw_rq_count);
  FUNC_12(VAR_9);

  VAR_10 = VAR_5->ops->run_job(VAR_9);
  FUNC_11(VAR_8);

  if (!FUNC_1(VAR_10)) {
   VAR_8->parent = FUNC_5(VAR_10);
   VAR_6 = FUNC_4(VAR_10, &VAR_9->cb,
         FUNC_13);
   if (VAR_6 == -VAR_0)
    FUNC_13(VAR_10, &VAR_9->cb);
   else if (VAR_6)
    FUNC_0("fence add callback failed (%d)\n",
       VAR_6);
   FUNC_6(VAR_10);
  } else {

   FUNC_7(&VAR_8->finished, FUNC_2(VAR_10));
   FUNC_13(((void*)0), &VAR_9->cb);
  }

  FUNC_19(&VAR_5->job_scheduled);
 }
 return 0;
}
