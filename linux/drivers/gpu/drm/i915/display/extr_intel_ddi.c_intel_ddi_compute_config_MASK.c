
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct intel_encoder {int port; TYPE_2__ base; } ;
struct TYPE_6__ {int force_thru; scalar_t__ enabled; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {scalar_t__ cpu_transcoder; int lane_count; int lane_lat_optim_mask; scalar_t__ crc_enabled; TYPE_3__ pch_pfit; TYPE_1__ base; } ;
struct intel_crtc {scalar_t__ pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct intel_crtc_state*,int ) ;
 int FUNC_5 (struct drm_i915_private*,struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 int FUNC_7 (struct intel_encoder*,struct intel_crtc_state*,struct drm_connector_state*) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct intel_encoder *VAR_4,
        struct intel_crtc_state *VAR_5,
        struct drm_connector_state *VAR_6)
{
 struct intel_crtc *VAR_7 = FUNC_9(VAR_5->base.crtc);
 struct drm_i915_private *VAR_8 = FUNC_8(VAR_4->base.dev);
 enum port VAR_9 = VAR_4->port;
 int VAR_10;

 if (FUNC_0(VAR_8) && VAR_9 == VAR_2)
  VAR_5->cpu_transcoder = VAR_3;

 if (FUNC_4(VAR_5, VAR_0))
  VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_6);
 else
  VAR_10 = FUNC_6(VAR_4, VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;

 if (FUNC_2(VAR_8) && VAR_7->pipe == VAR_1 &&
     VAR_5->cpu_transcoder == VAR_3)
  VAR_5->pch_pfit.force_thru =
   VAR_5->pch_pfit.enabled ||
   VAR_5->crc_enabled;

 if (FUNC_1(VAR_8))
  VAR_5->lane_lat_optim_mask =
   FUNC_3(VAR_5->lane_count);

 FUNC_5(VAR_8, VAR_5);

 return 0;
}
