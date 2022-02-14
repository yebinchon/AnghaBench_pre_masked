
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int FUNC_0 (struct drm_i915_private*) ;

int FUNC_1(struct drm_i915_private *VAR_0)
{
 int VAR_1 = VAR_0->cdclk.hw.ref;





 if (FUNC_0(VAR_0) >= 11 && VAR_1 == 38400)
  VAR_1 = 19200;

 return VAR_1;
}
