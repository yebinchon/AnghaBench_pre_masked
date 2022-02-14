
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readonly; } ;
struct TYPE_4__ {TYPE_1__ vma_node; } ;
struct drm_i915_gem_object {TYPE_2__ base; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct drm_i915_gem_object *VAR_0)
{
 return VAR_0->base.vma_node.readonly;
}
