
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int hw; } ;
struct drm_i915_private {TYPE_1__ cdclk; int uncore; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*,int ,int,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (int,int) ;

__attribute__((used)) static void FUNC_12(struct drm_i915_private *VAR_9)
{
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_5);

 if ((VAR_10 & (VAR_7 | VAR_6 | VAR_3 |
      VAR_8)) == VAR_7)
  return;





 FUNC_8(&VAR_9->uncore, VAR_2);

 if (VAR_10 & VAR_8) {
  VAR_10 &= ~VAR_8;
  FUNC_2(VAR_5, VAR_10);
  FUNC_3(VAR_5);
 }

 VAR_10 = FUNC_4(VAR_9);
 VAR_10 |= VAR_1;
 VAR_10 &= ~VAR_0;
 FUNC_5(VAR_9, VAR_10);

 VAR_10 = FUNC_1(VAR_5);
 VAR_10 &= ~VAR_6;
 FUNC_2(VAR_5, VAR_10);

 if (FUNC_6(VAR_9, VAR_5, VAR_7, 5))
  FUNC_0("LCPLL not locked yet\n");

 if (VAR_10 & VAR_3) {
  VAR_10 = FUNC_1(VAR_5);
  VAR_10 &= ~VAR_3;
  FUNC_2(VAR_5, VAR_10);

  if (FUNC_11((FUNC_1(VAR_5) &
     VAR_4) == 0, 1))
   FUNC_0("Switching back to LCPLL failed\n");
 }

 FUNC_9(&VAR_9->uncore, VAR_2);

 FUNC_10(VAR_9);
 FUNC_7(&VAR_9->cdclk.hw, "Current CDCLK");
}
