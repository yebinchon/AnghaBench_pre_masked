
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sseu {int slice_mask; } ;
struct intel_context {int dummy; } ;
struct igt_spinner {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;


 int FUNC_0 (struct intel_context*,struct intel_sseu) ;
 int FUNC_1 (char const*,unsigned int,struct intel_context*,struct drm_i915_gem_object*,int ,struct igt_spinner*) ;
 int FUNC_2 (char const*,unsigned int,struct intel_context*,struct igt_spinner**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct igt_spinner*) ;
 int FUNC_5 (struct igt_spinner*) ;
 int FUNC_6 (struct igt_spinner*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_0,
     unsigned int VAR_1,
     struct intel_context *VAR_2,
     struct drm_i915_gem_object *VAR_3,
     struct intel_sseu VAR_4)
{
 struct igt_spinner *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_4);
 if (VAR_6)
  goto out_spin;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
       FUNC_3(VAR_4.slice_mask), VAR_5);

out_spin:
 if (VAR_5) {
  FUNC_4(VAR_5);
  FUNC_5(VAR_5);
  FUNC_6(VAR_5);
 }
 return VAR_6;
}
