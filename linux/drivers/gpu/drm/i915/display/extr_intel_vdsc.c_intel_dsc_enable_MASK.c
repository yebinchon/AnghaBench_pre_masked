
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_6__ {scalar_t__ dsc_split; int compression_enable; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {scalar_t__ cpu_transcoder; TYPE_3__ dsc_params; TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 int FUNC_5 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_6 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

void FUNC_9(struct intel_encoder *VAR_6,
        const struct intel_crtc_state *VAR_7)
{
 struct intel_crtc *VAR_8 = FUNC_8(VAR_7->base.crtc);
 struct drm_i915_private *VAR_9 = FUNC_7(VAR_6->base.dev);
 enum pipe VAR_10 = VAR_8->pipe;
 i915_reg_t VAR_11, VAR_12;
 u32 VAR_13 = 0;
 u32 VAR_14 = 0;

 if (!VAR_7->dsc_params.compression_enable)
  return;


 FUNC_4(VAR_9,
    FUNC_6(VAR_7));

 FUNC_3(VAR_6, VAR_7);

 FUNC_5(VAR_6, VAR_7);

 if (VAR_7->cpu_transcoder == VAR_5) {
  VAR_11 = VAR_0;
  VAR_12 = VAR_1;
 } else {
  VAR_11 = FUNC_1(VAR_10);
  VAR_12 = FUNC_2(VAR_10);
 }
 VAR_14 |= VAR_3;
 if (VAR_7->dsc_params.dsc_split) {
  VAR_14 |= VAR_4;
  VAR_13 |= VAR_2;
 }
 FUNC_0(VAR_11, VAR_13);
 FUNC_0(VAR_12, VAR_14);
}
