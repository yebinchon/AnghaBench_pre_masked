
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_cdclk_state {int cdclk; int voltage_level; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,char*) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*,int ,int) ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct drm_i915_private *VAR_17,
     const struct intel_cdclk_state *VAR_18,
     enum pipe VAR_19)
{
 int VAR_20 = VAR_18->cdclk;
 u32 VAR_21;
 int VAR_22;

 if (FUNC_5((FUNC_2(VAR_12) &
    (VAR_13 | VAR_14 |
     VAR_4 | VAR_16 |
     VAR_3 | VAR_15 |
     VAR_5)) != VAR_14,
   "trying to change cdclk frequency with cdclk not enabled\n"))
  return;

 VAR_22 = FUNC_7(VAR_17,
          VAR_0, 0x0);
 if (VAR_22) {
  FUNC_1("failed to inform pcode about cdclk change\n");
  return;
 }

 VAR_21 = FUNC_2(VAR_12);
 VAR_21 |= VAR_5;
 FUNC_3(VAR_12, VAR_21);





 if (FUNC_8(FUNC_2(VAR_12) &
   VAR_6, 100))
  FUNC_1("Switching to FCLK failed\n");

 VAR_21 = FUNC_2(VAR_12);
 VAR_21 &= ~VAR_11;

 switch (VAR_20) {
 default:
  FUNC_4(VAR_20);

 case 337500:
  VAR_21 |= VAR_7;
  break;
 case 450000:
  VAR_21 |= VAR_8;
  break;
 case 540000:
  VAR_21 |= VAR_9;
  break;
 case 675000:
  VAR_21 |= VAR_10;
  break;
 }

 FUNC_3(VAR_12, VAR_21);

 VAR_21 = FUNC_2(VAR_12);
 VAR_21 &= ~VAR_5;
 FUNC_3(VAR_12, VAR_21);

 if (FUNC_8((FUNC_2(VAR_12) &
   VAR_6) == 0, 1))
  FUNC_1("Switching back to LCPLL failed\n");

 FUNC_7(VAR_17, VAR_2,
    VAR_18->voltage_level);

 FUNC_3(VAR_1, FUNC_0(VAR_20, 1000) - 1);

 FUNC_6(VAR_17);
}
