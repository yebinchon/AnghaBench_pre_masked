
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_config {int num_pipes_active; int sprites_scaled; int sprites_enabled; } ;
struct intel_pipe_wm {int * wm; int sprites_scaled; int sprites_enabled; } ;
struct ilk_wm_maximums {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private const*,int ,struct intel_wm_config const*,int ,struct ilk_wm_maximums*) ;
 int FUNC_2 (int ,struct ilk_wm_maximums*,int *) ;

__attribute__((used)) static bool FUNC_3(const struct drm_i915_private *VAR_1,
     struct intel_pipe_wm *VAR_2)
{

 const struct intel_wm_config VAR_3 = {
  .num_pipes_active = 1,
  .sprites_enabled = VAR_2->sprites_enabled,
  .sprites_scaled = VAR_2->sprites_scaled,
 };
 struct ilk_wm_maximums VAR_4;


 FUNC_1(VAR_1, 0, &VAR_3, VAR_0, &VAR_4);


 if (!FUNC_2(0, &VAR_4, &VAR_2->wm[0])) {
  FUNC_0("LP0 watermark invalid\n");
  return 0;
 }

 return 1;
}
