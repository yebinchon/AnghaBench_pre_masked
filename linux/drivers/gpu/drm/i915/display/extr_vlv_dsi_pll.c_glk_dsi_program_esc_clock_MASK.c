
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_i915_private* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_6,
       const struct intel_crtc_state *VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_3(VAR_6);
 u32 VAR_9 = 0;
 u32 VAR_10 = 0;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;

 VAR_10 = VAR_7->dsi_pll.ctrl & VAR_0;

 VAR_9 = (VAR_1 * VAR_10) / 2;

 VAR_11 = VAR_9 / 2;


 VAR_12 = FUNC_0(VAR_11, 20000);


 if (VAR_12 <= 10)
  VAR_14 = VAR_12;
 else if ((VAR_12 > 10) && (VAR_12 <= 20))
  VAR_14 = FUNC_1(VAR_12, 2);
 else if ((VAR_12 > 20) && (VAR_12 <= 30))
  VAR_14 = FUNC_1(VAR_12, 4);
 else if ((VAR_12 > 30) && (VAR_12 <= 40))
  VAR_14 = FUNC_1(VAR_12, 6);
 else if ((VAR_12 > 40) && (VAR_12 <= 50))
  VAR_14 = FUNC_1(VAR_12, 8);
 else
  VAR_14 = 10;


 VAR_13 = FUNC_1(VAR_12, VAR_14);

 if (VAR_13 < 10)
  VAR_15 = VAR_13;
 else
  VAR_15 = 10;

 FUNC_2(VAR_4, (1 << (VAR_14 - 1)) & VAR_2);
 FUNC_2(VAR_5, (1 << (VAR_15 - 1)) & VAR_3);
}
