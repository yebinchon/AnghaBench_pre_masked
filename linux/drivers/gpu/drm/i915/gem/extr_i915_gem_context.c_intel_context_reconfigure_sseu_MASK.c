
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_sseu {int dummy; } ;
struct intel_context {TYPE_1__* engine; } ;
struct TYPE_4__ {int struct_mutex; } ;
struct drm_i915_private {TYPE_2__ drm; } ;
struct TYPE_3__ {struct drm_i915_private* i915; } ;


 int FUNC_0 (struct intel_context*,struct intel_sseu) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct intel_context *VAR_0, struct intel_sseu VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->engine->i915;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->drm.struct_mutex);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_2->drm.struct_mutex);

 return VAR_3;
}
