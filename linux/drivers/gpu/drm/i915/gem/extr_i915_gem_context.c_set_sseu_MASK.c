
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_sseu ;
struct intel_sseu {int dummy; } ;
struct intel_context {TYPE_1__* engine; } ;
struct i915_gem_context {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
struct drm_i915_gem_context_param_sseu {int flags; int engine; scalar_t__ rsvd; } ;
struct drm_i915_gem_context_param {int size; int value; } ;
struct TYPE_2__ {scalar_t__ class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct intel_context*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 unsigned long VAR_4 ;
 int FUNC_2 (struct intel_context*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct drm_i915_gem_context_param_sseu*,int ,int) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_context*,struct intel_sseu) ;
 struct intel_context* FUNC_6 (struct i915_gem_context*,unsigned long,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct drm_i915_private*,struct drm_i915_gem_context_param_sseu*,struct intel_sseu*) ;

__attribute__((used)) static int FUNC_9(struct i915_gem_context *VAR_6,
      struct drm_i915_gem_context_param *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_6->i915;
 struct drm_i915_gem_context_param_sseu VAR_9;
 struct intel_context *VAR_10;
 struct intel_sseu VAR_11;
 unsigned long VAR_12;
 int VAR_13;

 if (VAR_7->size < sizeof(VAR_9))
  return -VAR_1;

 if (!FUNC_1(VAR_8, 11))
  return -VAR_2;

 if (FUNC_3(&VAR_9, FUNC_7(VAR_7->value),
      sizeof(VAR_9)))
  return -VAR_0;

 if (VAR_9.rsvd)
  return -VAR_1;

 if (VAR_9.flags & ~(VAR_3))
  return -VAR_1;

 VAR_12 = 0;
 if (VAR_9.flags & VAR_3)
  VAR_12 |= VAR_4;

 VAR_10 = FUNC_6(VAR_6, VAR_12, &VAR_9.engine);
 if (FUNC_0(VAR_10))
  return FUNC_2(VAR_10);


 if (VAR_10->engine->class != VAR_5) {
  VAR_13 = -VAR_2;
  goto out_ce;
 }

 VAR_13 = FUNC_8(VAR_8, &VAR_9, &VAR_11);
 if (VAR_13)
  goto out_ce;

 VAR_13 = FUNC_5(VAR_10, VAR_11);
 if (VAR_13)
  goto out_ce;

 VAR_7->size = sizeof(VAR_9);

out_ce:
 FUNC_4(VAR_10);
 return VAR_13;
}
