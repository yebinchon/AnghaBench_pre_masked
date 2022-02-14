
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_ddb_allocation {int enabled_slices; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;

void FUNC_1(struct drm_i915_private *VAR_0,
     struct skl_ddb_allocation *VAR_1 )
{
 VAR_1->enabled_slices = FUNC_0(VAR_0);
}
