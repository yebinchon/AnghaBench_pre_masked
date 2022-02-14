
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct drm_i915_gem_object {TYPE_2__* ops; TYPE_1__ mm; } ;
struct TYPE_4__ {int (* writeback ) (struct drm_i915_gem_object*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;

void FUNC_4(struct drm_i915_gem_object *VAR_0)
{
 FUNC_2(&VAR_0->mm.lock);
 FUNC_0(FUNC_1(VAR_0));

 if (VAR_0->ops->writeback)
  VAR_0->ops->writeback(VAR_0);
}
