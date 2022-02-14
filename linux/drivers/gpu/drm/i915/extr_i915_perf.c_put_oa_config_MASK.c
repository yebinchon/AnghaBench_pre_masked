
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_oa_config {int ref_count; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,struct i915_oa_config*) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_0,
     struct i915_oa_config *VAR_1)
{
 if (!FUNC_0(&VAR_1->ref_count))
  return;

 FUNC_1(VAR_0, VAR_1);
}
