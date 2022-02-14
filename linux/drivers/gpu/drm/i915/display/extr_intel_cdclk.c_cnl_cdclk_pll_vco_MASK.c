
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bypass; int ref; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == VAR_0->cdclk.hw.bypass)
  return 0;

 switch (VAR_1) {
 default:
  FUNC_0(VAR_1);

 case 168000:
 case 336000:
  VAR_2 = VAR_0->cdclk.hw.ref == 19200 ? 35 : 28;
  break;
 case 528000:
  VAR_2 = VAR_0->cdclk.hw.ref == 19200 ? 55 : 44;
  break;
 }

 return VAR_0->cdclk.hw.ref * VAR_2;
}
