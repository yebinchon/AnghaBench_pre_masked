
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_wm_config {int dummy; } ;
struct ilk_wm_maximums {int fbc; int cur; void* spr; void* pri; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_ddb_partitioning { ____Placeholder_intel_ddb_partitioning } intel_ddb_partitioning ;


 int FUNC_0 (struct drm_i915_private const*,int,struct intel_wm_config const*) ;
 int FUNC_1 (struct drm_i915_private const*) ;
 void* FUNC_2 (struct drm_i915_private const*,int,struct intel_wm_config const*,int,int) ;

__attribute__((used)) static void FUNC_3(const struct drm_i915_private *VAR_0,
        int VAR_1,
        const struct intel_wm_config *VAR_2,
        enum intel_ddb_partitioning VAR_3,
        struct ilk_wm_maximums *VAR_4)
{
 VAR_4->pri = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 VAR_4->spr = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, 1);
 VAR_4->cur = FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_4->fbc = FUNC_1(VAR_0);
}
