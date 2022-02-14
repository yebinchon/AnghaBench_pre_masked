
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ctrl; int div; } ;
struct intel_crtc_state {TYPE_1__ dsi_pll; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct drm_i915_private *VAR_5,
   struct intel_crtc_state *VAR_6,
   int VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10 = 2, VAR_11 = 6;
 unsigned int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17, VAR_18;


 if (VAR_7 < 300000 || VAR_7 > 1150000) {
  FUNC_0("DSI CLK Out of Range\n");
  return -VAR_3;
 }

 if (FUNC_1(VAR_5)) {
  VAR_18 = 100000;
  VAR_13 = 4;
  VAR_8 = 70;
  VAR_9 = 96;
 } else {
  VAR_18 = 25000;
  VAR_13 = 1;
  VAR_8 = 62;
  VAR_9 = 92;
 }

 VAR_16 = VAR_10;
 VAR_15 = VAR_8;
 VAR_17 = abs(VAR_7 - (VAR_8 * VAR_18) / (VAR_10 * VAR_13));

 for (VAR_12 = VAR_8; VAR_12 <= VAR_9 && VAR_17; VAR_12++) {
  for (VAR_14 = VAR_10; VAR_14 <= VAR_11 && VAR_17; VAR_14++) {




   int VAR_19 = (VAR_12 * VAR_18) / (VAR_14 * VAR_13);
   int VAR_20 = FUNC_2(VAR_7 - VAR_19);
   if (VAR_20 < VAR_17) {
    VAR_17 = VAR_20;
    VAR_15 = VAR_12;
    VAR_16 = VAR_14;
   }
  }
 }


 VAR_6->dsi_pll.ctrl = 1 << (VAR_2 + VAR_16 - 2);
 VAR_6->dsi_pll.div =
  (FUNC_3(VAR_13) - 1) << VAR_1 |
  (u32)VAR_4[VAR_15 - 62] << VAR_0;

 return 0;
}
