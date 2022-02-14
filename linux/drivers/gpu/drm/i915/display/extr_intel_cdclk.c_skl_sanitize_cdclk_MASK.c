
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
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_2)
{
 u32 VAR_3, VAR_4;






 if ((FUNC_1(FUNC_2(0x18)) & 0x00FFFFFF) == 0)
  goto sanitize;

 FUNC_4(VAR_2);
 FUNC_3(&VAR_2->cdclk.hw, "Current CDCLK");


 if (VAR_2->cdclk.hw.vco == 0 ||
     VAR_2->cdclk.hw.cdclk == VAR_2->cdclk.hw.bypass)
  goto sanitize;







 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = (VAR_3 & VAR_1) |
  FUNC_5(VAR_2->cdclk.hw.cdclk);
 if (VAR_3 == VAR_4)

  return;

sanitize:
 FUNC_0("Sanitizing cdclk programmed by pre-os\n");


 VAR_2->cdclk.hw.cdclk = 0;

 VAR_2->cdclk.hw.vco = -1;
}
