
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
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct drm_i915_private *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == VAR_0->cdclk.hw.bypass)
  return 0;

 switch (VAR_1) {
 default:
  FUNC_0(VAR_1);

 case 172800:
 case 307200:
 case 556800:
 case 652800:
  FUNC_1(VAR_0->cdclk.hw.ref != 19200 &&
   VAR_0->cdclk.hw.ref != 38400);
  break;
 case 180000:
 case 312000:
 case 552000:
 case 648000:
  FUNC_1(VAR_0->cdclk.hw.ref != 24000);
  break;
 case 192000:
  FUNC_1(VAR_0->cdclk.hw.ref != 19200 &&
   VAR_0->cdclk.hw.ref != 38400 &&
   VAR_0->cdclk.hw.ref != 24000);
  break;
 }

 VAR_2 = VAR_1 / (VAR_0->cdclk.hw.ref / 2);

 return VAR_0->cdclk.hw.ref * VAR_2;
}
