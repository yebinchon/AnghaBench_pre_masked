
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int mmio_base; struct drm_i915_private* i915; } ;
struct i915_wa_list {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_wa_list*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct intel_engine_cs *VAR_2, struct i915_wa_list *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_2->i915;


 if (FUNC_0(VAR_4, VAR_0, VAR_1)) {
  FUNC_2(VAR_3,
    FUNC_1(VAR_2->mmio_base),
    1);
 }
}
