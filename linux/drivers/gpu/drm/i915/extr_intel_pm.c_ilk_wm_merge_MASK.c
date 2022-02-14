
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_level {int enable; scalar_t__ fbc_val; } ;
struct intel_wm_config {int num_pipes_active; } ;
struct intel_pipe_wm {int fbc_wm_enabled; struct intel_wm_level* wm; } ;
struct ilk_wm_maximums {scalar_t__ fbc; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,int,struct intel_wm_level*) ;
 int FUNC_4 (int,struct ilk_wm_maximums const*,struct intel_wm_level*) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_0,
    const struct intel_wm_config *VAR_1,
    const struct ilk_wm_maximums *VAR_2,
    struct intel_pipe_wm *VAR_3)
{
 int VAR_4, VAR_5 = FUNC_5(VAR_0);
 int VAR_6 = VAR_5;


 if ((FUNC_0(VAR_0) <= 6 || FUNC_2(VAR_0)) &&
     VAR_1->num_pipes_active > 1)
  VAR_6 = 0;


 VAR_3->fbc_wm_enabled = FUNC_0(VAR_0) >= 6;


 for (VAR_4 = 1; VAR_4 <= VAR_5; VAR_4++) {
  struct intel_wm_level *VAR_7 = &VAR_3->wm[VAR_4];

  FUNC_3(VAR_0, VAR_4, VAR_7);

  if (VAR_4 > VAR_6)
   VAR_7->enable = 0;
  else if (!FUNC_4(VAR_4, VAR_2, VAR_7))

   VAR_6 = VAR_4 - 1;





  if (VAR_7->fbc_val > VAR_2->fbc) {
   if (VAR_7->enable)
    VAR_3->fbc_wm_enabled = 0;
   VAR_7->fbc_val = 0;
  }
 }







 if (FUNC_1(VAR_0, 5) && !VAR_3->fbc_wm_enabled &&
     FUNC_6(VAR_0)) {
  for (VAR_4 = 2; VAR_4 <= VAR_5; VAR_4++) {
   struct intel_wm_level *VAR_8 = &VAR_3->wm[VAR_4];

   VAR_8->enable = 0;
  }
 }
}
