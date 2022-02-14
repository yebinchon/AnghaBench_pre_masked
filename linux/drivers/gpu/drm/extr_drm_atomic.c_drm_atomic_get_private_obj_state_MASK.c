
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_private_state {struct drm_atomic_state* state; } ;
struct drm_private_obj {int state; TYPE_1__* funcs; int lock; } ;
struct drm_atomic_state {int num_private_objs; struct __drm_private_objs_state* private_objs; int acquire_ctx; } ;
struct __drm_private_objs_state {struct drm_private_obj* ptr; struct drm_private_state* new_state; int old_state; struct drm_private_state* state; } ;
struct TYPE_2__ {struct drm_private_state* (* atomic_duplicate_state ) (struct drm_private_obj*) ;} ;


 int FUNC_0 (char*,struct drm_private_obj*,struct drm_private_state*,struct drm_atomic_state*) ;
 int VAR_0 ;
 struct drm_private_state* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 struct __drm_private_objs_state* FUNC_3 (struct __drm_private_objs_state*,size_t,int ) ;
 int FUNC_4 (struct __drm_private_objs_state*,int ,int) ;
 struct drm_private_state* FUNC_5 (struct drm_private_obj*) ;

struct drm_private_state *
FUNC_6(struct drm_atomic_state *VAR_2,
     struct drm_private_obj *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 size_t VAR_8;
 struct __drm_private_objs_state *VAR_9;
 struct drm_private_state *VAR_10;

 for (VAR_6 = 0; VAR_6 < VAR_2->num_private_objs; VAR_6++)
  if (VAR_3 == VAR_2->private_objs[VAR_6].ptr)
   return VAR_2->private_objs[VAR_6].state;

 VAR_7 = FUNC_2(&VAR_3->lock, VAR_2->acquire_ctx);
 if (VAR_7)
  return FUNC_1(VAR_7);

 VAR_5 = VAR_2->num_private_objs + 1;
 VAR_8 = sizeof(*VAR_2->private_objs) * VAR_5;
 VAR_9 = FUNC_3(VAR_2->private_objs, VAR_8, VAR_1);
 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_2->private_objs = VAR_9;
 VAR_4 = VAR_2->num_private_objs;
 FUNC_4(&VAR_2->private_objs[VAR_4], 0, sizeof(*VAR_2->private_objs));

 VAR_10 = VAR_3->funcs->atomic_duplicate_state(VAR_3);
 if (!VAR_10)
  return FUNC_1(-VAR_0);

 VAR_2->private_objs[VAR_4].state = VAR_10;
 VAR_2->private_objs[VAR_4].old_state = VAR_3->state;
 VAR_2->private_objs[VAR_4].new_state = VAR_10;
 VAR_2->private_objs[VAR_4].ptr = VAR_3;
 VAR_10->state = VAR_2;

 VAR_2->num_private_objs = VAR_5;

 FUNC_0("Added new private object %p state %p to %p\n",
    VAR_3, VAR_10, VAR_2);

 return VAR_10;
}
