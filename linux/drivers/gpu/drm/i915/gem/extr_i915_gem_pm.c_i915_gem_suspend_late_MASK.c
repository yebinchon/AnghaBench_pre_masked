
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {int obj_lock; struct list_head purge_list; struct list_head shrink_list; } ;
struct drm_i915_private {TYPE_3__ mm; } ;
struct TYPE_5__ {int refcount; } ;
struct TYPE_4__ {int link; } ;
struct drm_i915_gem_object {TYPE_2__ base; TYPE_1__ mm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct drm_i915_gem_object* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;
 int FUNC_5 (struct drm_i915_gem_object*,int) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,struct list_head*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

void FUNC_13(struct drm_i915_private *VAR_1)
{
 struct drm_i915_gem_object *VAR_2;
 struct list_head *VAR_3[] = {
  &VAR_1->mm.shrink_list,
  &VAR_1->mm.purge_list,
  ((void*)0)
 }, **VAR_4;
 unsigned long VAR_5;
 FUNC_11(&VAR_1->mm.obj_lock, VAR_5);
 for (VAR_4 = VAR_3; *VAR_4; VAR_4++) {
  FUNC_0(VAR_0);

  while ((VAR_2 = FUNC_2(*VAR_4))) {
   FUNC_9(&VAR_2->mm.link, &VAR_0);


   if (!FUNC_8(&VAR_2->base.refcount))
    continue;

   FUNC_12(&VAR_1->mm.obj_lock, VAR_5);

   FUNC_3(VAR_2);
   FUNC_1(FUNC_5(VAR_2, 0));
   FUNC_6(VAR_2);
   FUNC_4(VAR_2);

   FUNC_11(&VAR_1->mm.obj_lock, VAR_5);
  }

  FUNC_10(&VAR_0, *VAR_4);
 }
 FUNC_12(&VAR_1->mm.obj_lock, VAR_5);

 FUNC_7(VAR_1);
}
