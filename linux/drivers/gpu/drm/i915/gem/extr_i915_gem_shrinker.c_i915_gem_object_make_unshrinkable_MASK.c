
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int obj_lock; int shrink_memory; int shrink_count; } ;
struct drm_i915_private {TYPE_3__ mm; } ;
struct TYPE_4__ {scalar_t__ size; } ;
struct TYPE_5__ {int link; } ;
struct drm_i915_gem_object {TYPE_1__ base; TYPE_2__ mm; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct drm_i915_gem_object *VAR_0)
{






 if (!FUNC_2(&VAR_0->mm.link)) {
  struct drm_i915_private *VAR_1 = FUNC_3(VAR_0);
  unsigned long VAR_2;

  FUNC_4(&VAR_1->mm.obj_lock, VAR_2);
  FUNC_0(FUNC_2(&VAR_0->mm.link));

  FUNC_1(&VAR_0->mm.link);
  VAR_1->mm.shrink_count--;
  VAR_1->mm.shrink_memory -= VAR_0->base.size;

  FUNC_5(&VAR_1->mm.obj_lock, VAR_2);
 }
}
