
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct i915_vma {int dummy; } ;
struct i915_ggtt_view {int dummy; } ;
struct i915_address_space {int dummy; } ;
struct TYPE_4__ {struct i915_address_space vm; } ;
struct drm_i915_private {TYPE_2__ ggtt; } ;
struct TYPE_3__ {int dev; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int VAR_0 ;
 struct i915_vma* FUNC_0 (struct drm_i915_gem_object*,struct i915_address_space*,struct i915_ggtt_view const*,int,int,int) ;
 struct drm_i915_private* FUNC_1 (int ) ;

struct i915_vma *
FUNC_2(struct drm_i915_gem_object *VAR_1,
    const struct i915_ggtt_view *VAR_2,
    u64 VAR_3,
    u64 VAR_4,
    u64 VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_1(VAR_1->base.dev);
 struct i915_address_space *VAR_7 = &VAR_6->ggtt.vm;

 return FUNC_0(VAR_1, VAR_7, VAR_2, VAR_3, VAR_4,
       VAR_5 | VAR_0);
}
