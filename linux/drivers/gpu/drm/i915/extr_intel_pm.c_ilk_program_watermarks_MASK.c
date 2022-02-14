
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_config {int num_pipes_active; scalar_t__ sprites_enabled; } ;
struct intel_pipe_wm {int dummy; } ;
struct ilk_wm_values {int dummy; } ;
struct ilk_wm_maximums {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_ddb_partitioning { ____Placeholder_intel_ddb_partitioning } intel_ddb_partitioning ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_wm_config*) ;
 int FUNC_2 (struct drm_i915_private*,int,struct intel_wm_config*,int,struct ilk_wm_maximums*) ;
 int FUNC_3 (struct drm_i915_private*,struct intel_pipe_wm*,int,struct ilk_wm_values*) ;
 struct intel_pipe_wm* FUNC_4 (struct drm_i915_private*,struct intel_pipe_wm*,struct intel_pipe_wm*) ;
 int FUNC_5 (struct drm_i915_private*,struct intel_wm_config*,struct ilk_wm_maximums*,struct intel_pipe_wm*) ;
 int FUNC_6 (struct drm_i915_private*,struct ilk_wm_values*) ;

__attribute__((used)) static void FUNC_7(struct drm_i915_private *VAR_2)
{
 struct intel_pipe_wm VAR_3 = {}, VAR_4 = {}, *VAR_5;
 struct ilk_wm_maximums VAR_6;
 struct intel_wm_config VAR_7 = {};
 struct ilk_wm_values VAR_8 = {};
 enum intel_ddb_partitioning VAR_9;

 FUNC_1(VAR_2, &VAR_7);

 FUNC_2(VAR_2, 1, &VAR_7, VAR_0, &VAR_6);
 FUNC_5(VAR_2, &VAR_7, &VAR_6, &VAR_3);


 if (FUNC_0(VAR_2) >= 7 &&
     VAR_7.num_pipes_active == 1 && VAR_7.sprites_enabled) {
  FUNC_2(VAR_2, 1, &VAR_7, VAR_1, &VAR_6);
  FUNC_5(VAR_2, &VAR_7, &VAR_6, &VAR_4);

  VAR_5 = FUNC_4(VAR_2, &VAR_3, &VAR_4);
 } else {
  VAR_5 = &VAR_3;
 }

 VAR_9 = (VAR_5 == &VAR_3) ?
         VAR_0 : VAR_1;

 FUNC_3(VAR_2, VAR_5, VAR_9, &VAR_8);

 FUNC_6(VAR_2, &VAR_8);
}
