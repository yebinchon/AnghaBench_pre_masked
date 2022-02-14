
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int dummy; } ;
struct drm_i915_private {struct i915_wa_list gt_wa_list; } ;


 int FUNC_0 (struct drm_i915_private*,struct i915_wa_list*) ;
 int FUNC_1 (struct i915_wa_list*) ;
 int FUNC_2 (struct i915_wa_list*,char*,char*) ;

void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct i915_wa_list *VAR_1 = &VAR_0->gt_wa_list;

 FUNC_2(VAR_1, "GT", "global");
 FUNC_0(VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
