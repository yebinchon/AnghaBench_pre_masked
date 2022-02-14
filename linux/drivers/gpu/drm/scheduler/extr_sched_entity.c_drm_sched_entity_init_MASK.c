
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_sched_rq {int dummy; } ;
struct drm_sched_entity {unsigned int num_rq_list; int fence_context; int fence_seq; int job_queue; int rq_lock; int * last_scheduled; struct drm_sched_rq* rq; struct drm_sched_rq** rq_list; int * guilty; int list; } ;
typedef int atomic_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 struct drm_sched_rq** FUNC_3 (unsigned int,int,int ) ;
 int FUNC_4 (struct drm_sched_entity*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct drm_sched_entity *VAR_3,
     struct drm_sched_rq **VAR_4,
     unsigned int VAR_5,
     atomic_t *VAR_6)
{
 int VAR_7;

 if (!(VAR_3 && VAR_4 && (VAR_5 == 0 || VAR_4[0])))
  return -VAR_0;

 FUNC_4(VAR_3, 0, sizeof(struct drm_sched_entity));
 FUNC_0(&VAR_3->list);
 VAR_3->rq = ((void*)0);
 VAR_3->guilty = VAR_6;
 VAR_3->num_rq_list = VAR_5;
 VAR_3->rq_list = FUNC_3(VAR_5, sizeof(struct drm_sched_rq *),
    VAR_2);
 if (!VAR_3->rq_list)
  return -VAR_1;

 for (VAR_7 = 0; VAR_7 < VAR_5; ++VAR_7)
  VAR_3->rq_list[VAR_7] = VAR_4[VAR_7];

 if (VAR_5)
  VAR_3->rq = VAR_4[0];

 VAR_3->last_scheduled = ((void*)0);

 FUNC_5(&VAR_3->rq_lock);
 FUNC_6(&VAR_3->job_queue);

 FUNC_1(&VAR_3->fence_seq, 0);
 VAR_3->fence_context = FUNC_2(2);

 return 0;
}
