
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_job {int node; struct drm_gpu_scheduler* sched; } ;
struct drm_gpu_scheduler {int job_list_lock; int ring_mirror_list; } ;


 int FUNC_0 (struct drm_gpu_scheduler*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct drm_sched_job *VAR_0)
{
 struct drm_gpu_scheduler *VAR_1 = VAR_0->sched;
 unsigned long VAR_2;

 FUNC_2(&VAR_1->job_list_lock, VAR_2);
 FUNC_1(&VAR_0->node, &VAR_1->ring_mirror_list);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->job_list_lock, VAR_2);
}
