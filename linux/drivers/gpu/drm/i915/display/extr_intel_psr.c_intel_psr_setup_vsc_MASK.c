
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct intel_digital_port {int base; int (* write_infoframe ) (int *,struct intel_crtc_state const*,int ,struct dp_sdp*,int) ;} ;
struct intel_crtc_state {int dummy; } ;
struct TYPE_3__ {scalar_t__ colorimetry_support; scalar_t__ psr2_enabled; } ;
struct drm_i915_private {TYPE_1__ psr; } ;
struct TYPE_4__ {int HB1; int HB2; int HB3; scalar_t__ HB0; } ;
struct dp_sdp {TYPE_2__ sdp_header; } ;
typedef int psr_vsc ;


 int VAR_0 ;
 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct dp_sdp*,int ,int) ;
 int FUNC_3 (int *,struct intel_crtc_state const*,int ,struct dp_sdp*,int) ;

__attribute__((used)) static void FUNC_4(struct intel_dp *VAR_1,
    const struct intel_crtc_state *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_0(VAR_1);
 struct drm_i915_private *VAR_4 = FUNC_1(VAR_1);
 struct dp_sdp VAR_5;

 if (VAR_4->psr.psr2_enabled) {

  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.sdp_header.HB0 = 0;
  VAR_5.sdp_header.HB1 = 0x7;
  if (VAR_4->psr.colorimetry_support) {
   VAR_5.sdp_header.HB2 = 0x5;
   VAR_5.sdp_header.HB3 = 0x13;
  } else {
   VAR_5.sdp_header.HB2 = 0x4;
   VAR_5.sdp_header.HB3 = 0xe;
  }
 } else {

  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
  VAR_5.sdp_header.HB0 = 0;
  VAR_5.sdp_header.HB1 = 0x7;
  VAR_5.sdp_header.HB2 = 0x2;
  VAR_5.sdp_header.HB3 = 0x8;
 }

 VAR_3->write_infoframe(&VAR_3->base,
     VAR_2,
     VAR_0, &VAR_5, sizeof(VAR_5));
}
