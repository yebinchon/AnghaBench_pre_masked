
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_gem_object {TYPE_1__* ops; int base; } ;
struct TYPE_2__ {int (* truncate ) (struct drm_i915_gem_object*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

void FUNC_2(struct drm_i915_gem_object *VAR_0)
{
 FUNC_0(&VAR_0->base);
 if (VAR_0->ops->truncate)
  VAR_0->ops->truncate(VAR_0);
}
