
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_i915_gem_object {TYPE_1__* ops; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline bool
FUNC_0(const struct drm_i915_gem_object *VAR_1)
{
 return VAR_1->ops->flags & VAR_0;
}
