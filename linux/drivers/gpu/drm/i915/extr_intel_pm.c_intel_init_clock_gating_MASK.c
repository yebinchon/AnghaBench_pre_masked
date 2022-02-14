
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* init_clock_gating ) (struct drm_i915_private*) ;} ;
struct drm_i915_private {TYPE_1__ display; } ;


 int FUNC_0 (struct drm_i915_private*) ;

void FUNC_1(struct drm_i915_private *VAR_0)
{
 VAR_0->display.init_clock_gating(VAR_0);
}
