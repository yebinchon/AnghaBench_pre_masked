
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct TYPE_7__ {scalar_t__ compression_enable; } ;
struct TYPE_5__ {int crtc_hdisplay; int crtc_vdisplay; } ;
struct TYPE_6__ {TYPE_1__ adjusted_mode; } ;
struct intel_crtc_state {scalar_t__ crc_enabled; TYPE_3__ dsc_params; TYPE_2__ base; } ;
struct TYPE_8__ {int su_x_granularity; int sink_psr2_support; } ;
struct drm_i915_private {TYPE_4__ psr; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static bool FUNC_5(struct intel_dp *VAR_0,
        struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = VAR_1->base.adjusted_mode.crtc_hdisplay;
 int VAR_4 = VAR_1->base.adjusted_mode.crtc_vdisplay;
 int VAR_5 = 0, VAR_6 = 0;

 if (!VAR_2->psr.sink_psr2_support)
  return 0;






 if (VAR_1->dsc_params.compression_enable) {
  FUNC_0("PSR2 cannot be enabled since DSC is enabled\n");
  return 0;
 }

 if (FUNC_1(VAR_2) >= 10 || FUNC_2(VAR_2)) {
  VAR_5 = 4096;
  VAR_6 = 2304;
 } else if (FUNC_3(VAR_2, 9)) {
  VAR_5 = 3640;
  VAR_6 = 2304;
 }

 if (VAR_3 > VAR_5 || VAR_4 > VAR_6) {
  FUNC_0("PSR2 not enabled, resolution %dx%d > max supported %dx%d\n",
         VAR_3, VAR_4,
         VAR_5, VAR_6);
  return 0;
 }







 if (VAR_3 % VAR_2->psr.su_x_granularity) {
  FUNC_0("PSR2 not enabled, hdisplay(%d) not multiple of %d\n",
         VAR_3, VAR_2->psr.su_x_granularity);
  return 0;
 }

 if (VAR_1->crc_enabled) {
  FUNC_0("PSR2 not enabled because it would inhibit pipe CRC calculation\n");
  return 0;
 }

 return 1;
}
