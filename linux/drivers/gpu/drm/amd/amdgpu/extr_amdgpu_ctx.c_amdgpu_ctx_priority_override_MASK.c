
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_sched_entity {int dummy; } ;
struct amdgpu_ctx {int override_priority; int init_priority; TYPE_1__** entities; } ;
typedef enum drm_sched_priority { ____Placeholder_drm_sched_priority } drm_sched_priority ;
struct TYPE_2__ {struct drm_sched_entity entity; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 () ;
 int FUNC_1 (struct drm_sched_entity*,int) ;

void FUNC_2(struct amdgpu_ctx *VAR_1,
      enum drm_sched_priority VAR_2)
{
 unsigned VAR_3 = FUNC_0();
 enum drm_sched_priority VAR_4;
 unsigned VAR_5;

 VAR_1->override_priority = VAR_2;

 VAR_4 = (VAR_1->override_priority == VAR_0) ?
   VAR_1->init_priority : VAR_1->override_priority;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  struct drm_sched_entity *VAR_6 = &VAR_1->entities[0][VAR_5].entity;

  FUNC_1(VAR_6, VAR_4);
 }
}
