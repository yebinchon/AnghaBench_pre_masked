
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uc {int load_err_log; } ;
struct drm_i915_gem_object {int dummy; } ;


 struct drm_i915_gem_object* FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;

__attribute__((used)) static void FUNC_2(struct intel_uc *VAR_0)
{
 struct drm_i915_gem_object *VAR_1 = FUNC_0(&VAR_0->load_err_log);

 if (VAR_1)
  FUNC_1(VAR_1);
}
