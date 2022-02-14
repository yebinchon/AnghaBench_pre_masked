
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int vco; scalar_t__ cdclk; scalar_t__ bypass; } ;
struct TYPE_3__ {TYPE_2__ hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_3(VAR_3);
 FUNC_2(&VAR_3->cdclk.hw, "Current CDCLK");

 if (VAR_3->cdclk.hw.vco == 0 ||
     VAR_3->cdclk.hw.cdclk == VAR_3->cdclk.hw.bypass)
  goto sanitize;







 VAR_4 = FUNC_1(VAR_2);





 VAR_4 &= ~VAR_1;

 VAR_5 = (VAR_4 & VAR_0) |
     FUNC_4(VAR_3->cdclk.hw.cdclk);

 if (VAR_4 == VAR_5)

  return;

sanitize:
 FUNC_0("Sanitizing cdclk programmed by pre-os\n");


 VAR_3->cdclk.hw.cdclk = 0;


 VAR_3->cdclk.hw.vco = -1;
}
