
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_gt {TYPE_2__* i915; } ;
struct i915_gem_context {scalar_t__ vm; } ;
struct drm_file {scalar_t__ vm; } ;
struct TYPE_5__ {int struct_mutex; } ;
struct TYPE_6__ {TYPE_1__ drm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_gem_context*) ;
 int FUNC_1 (struct i915_gem_context*) ;
 int FUNC_2 (struct intel_gt*,scalar_t__,int ,int ) ;
 int VAR_1 ;
 struct i915_gem_context* FUNC_3 (TYPE_2__*,struct i915_gem_context*) ;
 struct i915_gem_context* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,struct i915_gem_context*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_2)
{
 struct intel_gt *VAR_3 = VAR_2;
 struct i915_gem_context *VAR_4;
 struct drm_file *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_3->i915);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 FUNC_6(&VAR_3->i915->drm.struct_mutex);
 VAR_4 = FUNC_3(VAR_3->i915, VAR_5);
 FUNC_7(&VAR_3->i915->drm.struct_mutex);
 if (FUNC_0(VAR_4)) {
  VAR_6 = FUNC_1(VAR_4);
  goto out;
 }

 VAR_6 = 0;
 if (VAR_4->vm)
  VAR_6 = FUNC_2(VAR_3, VAR_4->vm,
         VAR_1, VAR_0);

out:
 FUNC_5(VAR_3->i915, VAR_5);
 return VAR_6;
}
