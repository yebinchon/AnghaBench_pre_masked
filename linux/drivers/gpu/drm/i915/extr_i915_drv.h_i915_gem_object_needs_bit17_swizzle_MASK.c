
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bit_6_swizzle_x; } ;
struct drm_i915_private {TYPE_2__ mm; } ;
struct TYPE_3__ {int dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_gem_object*) ;
 struct drm_i915_private* FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(struct drm_i915_gem_object *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_1(VAR_1->base.dev);

 return VAR_2->mm.bit_6_swizzle_x == VAR_0 &&
  FUNC_0(VAR_1);
}
