
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {int ref; int cdclk; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {int max_cdclk_freq; int skl_preferred_vco_freq; int max_dotclk_freq; TYPE_2__ cdclk; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct drm_i915_private*) ;
 int FUNC_15 (int,int) ;

void FUNC_16(struct drm_i915_private *VAR_7)
{
 if (FUNC_9(VAR_7)) {
  if (VAR_7->cdclk.hw.ref == 24000)
   VAR_7->max_cdclk_freq = 552000;
  else
   VAR_7->max_cdclk_freq = 556800;
 } else if (FUNC_2(VAR_7) >= 11) {
  if (VAR_7->cdclk.hw.ref == 24000)
   VAR_7->max_cdclk_freq = 648000;
  else
   VAR_7->max_cdclk_freq = 652800;
 } else if (FUNC_7(VAR_7)) {
  VAR_7->max_cdclk_freq = 528000;
 } else if (FUNC_11(VAR_7)) {
  u32 VAR_8 = FUNC_1(VAR_2) & VAR_6;
  int VAR_9, VAR_10;

  VAR_10 = VAR_7->skl_preferred_vco_freq;
  FUNC_13(VAR_10 != 8100000 && VAR_10 != 8640000);






  if (VAR_8 == VAR_5)
   VAR_9 = 617143;
  else if (VAR_8 == VAR_4)
   VAR_9 = 540000;
  else if (VAR_8 == VAR_3)
   VAR_9 = 432000;
  else
   VAR_9 = 308571;

  VAR_7->max_cdclk_freq = FUNC_15(VAR_9, VAR_10);
 } else if (FUNC_10(VAR_7)) {
  VAR_7->max_cdclk_freq = 316800;
 } else if (FUNC_6(VAR_7)) {
  VAR_7->max_cdclk_freq = 624000;
 } else if (FUNC_5(VAR_7)) {






  if (FUNC_1(VAR_0) & VAR_1)
   VAR_7->max_cdclk_freq = 450000;
  else if (FUNC_4(VAR_7))
   VAR_7->max_cdclk_freq = 450000;
  else if (FUNC_3(VAR_7))
   VAR_7->max_cdclk_freq = 540000;
  else
   VAR_7->max_cdclk_freq = 675000;
 } else if (FUNC_8(VAR_7)) {
  VAR_7->max_cdclk_freq = 320000;
 } else if (FUNC_12(VAR_7)) {
  VAR_7->max_cdclk_freq = 400000;
 } else {

  VAR_7->max_cdclk_freq = VAR_7->cdclk.hw.cdclk;
 }

 VAR_7->max_dotclk_freq = FUNC_14(VAR_7);

 FUNC_0("Max CD clock rate: %d kHz\n",
    VAR_7->max_cdclk_freq);

 FUNC_0("Max dotclock rate: %d kHz\n",
    VAR_7->max_dotclk_freq);
}
