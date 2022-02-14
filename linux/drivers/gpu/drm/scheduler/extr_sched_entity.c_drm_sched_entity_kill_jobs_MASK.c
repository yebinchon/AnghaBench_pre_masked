
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_job {int finish_cb; struct drm_sched_fence* s_fence; } ;
struct drm_sched_fence {int finished; } ;
struct drm_sched_entity {int last_scheduled; int job_queue; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int (*) (int *,int *)) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct drm_sched_fence*) ;
 int FUNC_5 (int *) ;
 struct drm_sched_job* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct drm_sched_entity *VAR_2)
{
 struct drm_sched_job *VAR_3;
 int VAR_4;

 while ((VAR_3 = FUNC_6(FUNC_5(&VAR_2->job_queue)))) {
  struct drm_sched_fence *VAR_5 = VAR_3->s_fence;

  FUNC_4(VAR_5);
  FUNC_2(&VAR_5->finished, -VAR_1);






  if (!VAR_2->last_scheduled) {
   FUNC_3(((void*)0), &VAR_3->finish_cb);
   continue;
  }

  VAR_4 = FUNC_1(VAR_2->last_scheduled,
        &VAR_3->finish_cb,
        FUNC_3);
  if (VAR_4 == -VAR_0)
   FUNC_3(((void*)0), &VAR_3->finish_cb);
  else if (VAR_4)
   FUNC_0("fence add callback failed (%d)\n", VAR_4);
 }
}
