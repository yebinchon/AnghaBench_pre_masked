
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int priority; int priority_mutex; TYPE_1__* funcs; int * num_jobs; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_2__ {int (* set_priority ) (struct amdgpu_ring*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct amdgpu_ring*,int) ;

void FUNC_5(struct amdgpu_ring *VAR_2,
         enum drm_sched_priority VAR_3)
{
 int VAR_4;

 if (!VAR_2->funcs->set_priority)
  return;

 if (FUNC_0(&VAR_2->num_jobs[VAR_3]) > 0)
  return;


 if (VAR_3 == VAR_1)
  return;

 FUNC_2(&VAR_2->priority_mutex);

 if (VAR_2->priority > VAR_3)
  goto out_unlock;


 for (VAR_4 = VAR_3; VAR_4 >= VAR_0; VAR_4--) {
  if (VAR_4 == VAR_1
    || FUNC_1(&VAR_2->num_jobs[VAR_4])) {
   VAR_2->priority = VAR_4;
   VAR_2->funcs->set_priority(VAR_2, VAR_4);
   break;
  }
 }

out_unlock:
 FUNC_3(&VAR_2->priority_mutex);
}
