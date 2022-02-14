
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_params {int dummy; } ;
struct drm_printer {int dummy; } ;
struct drm_i915_error_state_buf {int dummy; } ;


 struct drm_printer FUNC_0 (struct drm_i915_error_state_buf*) ;
 int FUNC_1 (struct i915_params const*,struct drm_printer*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_error_state_buf *VAR_0,
        const struct i915_params *VAR_1)
{
 struct drm_printer VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, &VAR_2);
}
