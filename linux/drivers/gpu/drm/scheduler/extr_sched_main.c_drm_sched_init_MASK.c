
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_backend_ops {int dummy; } ;
struct drm_gpu_scheduler {unsigned int hw_submission_limit; char const* name; long timeout; unsigned int hang_limit; int ready; int * thread; int job_id_count; int num_jobs; int work_tdr; int hw_rq_count; int job_list_lock; int ring_mirror_list; int job_scheduled; int wake_up_worker; int * sched_rq; struct drm_sched_backend_ops const* ops; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (struct drm_gpu_scheduler*,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,struct drm_gpu_scheduler*,char const*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct drm_gpu_scheduler *VAR_4,
     const struct drm_sched_backend_ops *VAR_5,
     unsigned VAR_6,
     unsigned VAR_7,
     long VAR_8,
     const char *VAR_9)
{
 int VAR_10, VAR_11;
 VAR_4->ops = VAR_5;
 VAR_4->hw_submission_limit = VAR_6;
 VAR_4->name = VAR_9;
 VAR_4->timeout = VAR_8;
 VAR_4->hang_limit = VAR_7;
 for (VAR_10 = VAR_1; VAR_10 < VAR_0; VAR_10++)
  FUNC_7(VAR_4, &VAR_4->sched_rq[VAR_10]);

 FUNC_8(&VAR_4->wake_up_worker);
 FUNC_8(&VAR_4->job_scheduled);
 FUNC_2(&VAR_4->ring_mirror_list);
 FUNC_10(&VAR_4->job_list_lock);
 FUNC_6(&VAR_4->hw_rq_count, 0);
 FUNC_1(&VAR_4->work_tdr, VAR_2);
 FUNC_6(&VAR_4->num_jobs, 0);
 FUNC_5(&VAR_4->job_id_count, 0);


 VAR_4->thread = FUNC_9(VAR_3, VAR_4, VAR_4->name);
 if (FUNC_3(VAR_4->thread)) {
  VAR_11 = FUNC_4(VAR_4->thread);
  VAR_4->thread = ((void*)0);
  FUNC_0("Failed to create scheduler for %s.\n", VAR_9);
  return VAR_11;
 }

 VAR_4->ready = 1;
 return 0;
}
