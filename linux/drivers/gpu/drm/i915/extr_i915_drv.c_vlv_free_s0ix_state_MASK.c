
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int * vlv_s0ix_state; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct drm_i915_private *VAR_0)
{
 if (!VAR_0->vlv_s0ix_state)
  return;

 FUNC_0(VAR_0->vlv_s0ix_state);
 VAR_0->vlv_s0ix_state = ((void*)0);
}
