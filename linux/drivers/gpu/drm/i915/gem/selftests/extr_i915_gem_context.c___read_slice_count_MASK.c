
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct intel_context {TYPE_1__* engine; } ;
struct igt_spinner {int dummy; } ;
struct i915_request {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_2__ {int i915; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int*) ;
 int VAR_5 ;
 long FUNC_2 (unsigned int*) ;
 long FUNC_3 (struct drm_i915_gem_object*,struct intel_context*,struct i915_request**) ;
 unsigned int* FUNC_4 (struct drm_i915_gem_object*,int ) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct i915_request*) ;
 long FUNC_7 (struct i915_request*,int ,int ) ;
 int FUNC_8 (struct igt_spinner*) ;

__attribute__((used)) static int
FUNC_9(struct intel_context *VAR_6,
     struct drm_i915_gem_object *VAR_7,
     struct igt_spinner *VAR_8,
     u32 *VAR_9)
{
 struct i915_request *VAR_10 = ((void*)0);
 u32 VAR_11, VAR_12;
 unsigned int VAR_13;
 u32 *VAR_14, VAR_15;
 long VAR_16;

 VAR_16 = FUNC_3(VAR_7, VAR_6, &VAR_10);
 if (VAR_16)
  return VAR_16;

 if (VAR_8)
  FUNC_8(VAR_8);

 VAR_16 = FUNC_7(VAR_10, 0, VAR_5);
 FUNC_6(VAR_10);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_14 = FUNC_4(VAR_7, VAR_4);
 if (FUNC_1(VAR_14)) {
  VAR_16 = FUNC_2(VAR_14);
  return VAR_16;
 }

 if (FUNC_0(VAR_6->engine->i915) >= 11) {
  VAR_11 = VAR_0;
  VAR_12 = VAR_1;
 } else {
  VAR_11 = VAR_2;
  VAR_12 = VAR_3;
 }

 VAR_15 = *VAR_14;
 VAR_13 = (VAR_15 & VAR_11) >> VAR_12;
 *VAR_9 = VAR_15;

 FUNC_5(VAR_7);

 return VAR_13;
}
