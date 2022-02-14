
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {TYPE_2__* gt; } ;
struct i915_vma {int dummy; } ;
struct i915_gem_context {int vm; } ;
struct i915_address_space {scalar_t__ total; } ;
struct TYPE_6__ {scalar_t__ size; } ;
struct drm_i915_gem_object {TYPE_3__ base; } ;
struct TYPE_5__ {TYPE_1__* ggtt; } ;
struct TYPE_4__ {struct i915_address_space vm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 struct i915_vma* FUNC_6 (struct drm_i915_gem_object*,struct i915_address_space*,int *) ;
 int FUNC_7 (struct i915_vma*,int ,int ,int) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*,struct i915_gem_context*,struct intel_engine_cs*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_10 (struct intel_engine_cs*) ;
 unsigned int FUNC_11 (struct drm_i915_gem_object*) ;

__attribute__((used)) static int FUNC_12(struct drm_i915_gem_object *VAR_3,
      struct i915_gem_context *VAR_4,
      struct intel_engine_cs *VAR_5,
      unsigned int VAR_6)
{
 struct i915_address_space *VAR_7 = VAR_4->vm ?: &VAR_5->gt->ggtt->vm;
 struct i915_vma *VAR_8;
 int VAR_9;

 FUNC_0(VAR_3->base.size > VAR_7->total);
 FUNC_0(!FUNC_10(VAR_5));

 VAR_8 = FUNC_6(VAR_3, VAR_7, ((void*)0));
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 FUNC_3(VAR_3);
 VAR_9 = FUNC_4(VAR_3, 1);
 FUNC_5(VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_8, 0, 0, VAR_1 | VAR_2);
 if (VAR_9)
  return VAR_9;
 VAR_9 = FUNC_9(VAR_8,
         VAR_4,
         VAR_5,
         (VAR_6 * FUNC_11(VAR_3)) << VAR_0 |
         (VAR_6 * sizeof(u32)),
         FUNC_11(VAR_3),
         VAR_6);
 FUNC_8(VAR_8);

 return VAR_9;
}
