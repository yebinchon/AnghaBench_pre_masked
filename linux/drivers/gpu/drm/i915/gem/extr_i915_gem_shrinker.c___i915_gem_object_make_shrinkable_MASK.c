
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {int obj_lock; int shrink_memory; int shrink_count; } ;
struct drm_i915_private {TYPE_3__ mm; } ;
struct TYPE_5__ {scalar_t__ size; int refcount; } ;
struct TYPE_4__ {int link; } ;
struct drm_i915_gem_object {TYPE_2__ base; TYPE_1__ mm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int *) ;
 struct drm_i915_private* FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_gem_object *VAR_0,
           struct list_head *VAR_1)
{
 FUNC_0(!FUNC_1(VAR_0));
 FUNC_0(!FUNC_5(&VAR_0->mm.link));

 if (FUNC_2(VAR_0)) {
  struct drm_i915_private *VAR_2 = FUNC_6(VAR_0);
  unsigned long VAR_3;

  FUNC_7(&VAR_2->mm.obj_lock, VAR_3);
  FUNC_0(!FUNC_3(&VAR_0->base.refcount));

  FUNC_4(&VAR_0->mm.link, VAR_1);
  VAR_2->mm.shrink_count++;
  VAR_2->mm.shrink_memory += VAR_0->base.size;

  FUNC_8(&VAR_2->mm.obj_lock, VAR_3);
 }
}
