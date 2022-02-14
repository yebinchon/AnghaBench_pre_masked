
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int priority; int priority_mutex; TYPE_1__* funcs; int * num_jobs; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_2__ {int (* set_priority ) (struct amdgpu_ring*,int) ;} ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct amdgpu_ring*,int) ;

void FUNC_4(struct amdgpu_ring *VAR_0,
         enum drm_sched_priority VAR_1)
{
 if (!VAR_0->funcs->set_priority)
  return;

 if (FUNC_0(&VAR_0->num_jobs[VAR_1]) <= 0)
  return;

 FUNC_1(&VAR_0->priority_mutex);
 if (VAR_1 <= VAR_0->priority)
  goto out_unlock;

 VAR_0->priority = VAR_1;
 VAR_0->funcs->set_priority(VAR_0, VAR_1);

out_unlock:
 FUNC_2(&VAR_0->priority_mutex);
}
