
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_sseu ;
struct TYPE_2__ {int max_eus_per_subslice; int min_eus_per_subslice; int subslice_mask; int slice_mask; } ;
struct intel_context {TYPE_1__ sseu; } ;
struct i915_gem_context {int dummy; } ;
struct drm_i915_gem_context_param_sseu {int flags; int max_eus_per_subslice; int min_eus_per_subslice; int subslice_mask; int slice_mask; int engine; scalar_t__ rsvd; } ;
struct drm_i915_gem_context_param {int size; int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_context*) ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct intel_context*) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_context_param_sseu*,int ,int) ;
 scalar_t__ FUNC_3 (int ,struct drm_i915_gem_context_param_sseu*,int) ;
 int FUNC_4 (struct intel_context*) ;
 int FUNC_5 (struct intel_context*) ;
 int FUNC_6 (struct intel_context*) ;
 struct intel_context* FUNC_7 (struct i915_gem_context*,unsigned long,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct i915_gem_context *VAR_4,
      struct drm_i915_gem_context_param *VAR_5)
{
 struct drm_i915_gem_context_param_sseu VAR_6;
 struct intel_context *VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_5->size == 0)
  goto out;
 else if (VAR_5->size < sizeof(VAR_6))
  return -VAR_1;

 if (FUNC_2(&VAR_6, FUNC_8(VAR_5->value),
      sizeof(VAR_6)))
  return -VAR_0;

 if (VAR_6.rsvd)
  return -VAR_1;

 if (VAR_6.flags & ~(VAR_2))
  return -VAR_1;

 VAR_8 = 0;
 if (VAR_6.flags & VAR_2)
  VAR_8 |= VAR_3;

 VAR_7 = FUNC_7(VAR_4, VAR_8, &VAR_6.engine);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9) {
  FUNC_5(VAR_7);
  return VAR_9;
 }

 VAR_6.slice_mask = VAR_7->sseu.slice_mask;
 VAR_6.subslice_mask = VAR_7->sseu.subslice_mask;
 VAR_6.min_eus_per_subslice = VAR_7->sseu.min_eus_per_subslice;
 VAR_6.max_eus_per_subslice = VAR_7->sseu.max_eus_per_subslice;

 FUNC_6(VAR_7);
 FUNC_5(VAR_7);

 if (FUNC_3(FUNC_8(VAR_5->value), &VAR_6,
    sizeof(VAR_6)))
  return -VAR_0;

out:
 VAR_5->size = sizeof(VAR_6);

 return 0;
}
