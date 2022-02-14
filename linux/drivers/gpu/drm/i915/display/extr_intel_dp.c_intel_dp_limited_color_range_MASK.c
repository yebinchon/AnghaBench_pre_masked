
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_digital_connector_state {scalar_t__ broadcast_rgb; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int pipe_bpp; TYPE_1__ base; } ;
struct drm_connector_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_display_mode const*) ;
 struct intel_digital_connector_state* FUNC_1 (struct drm_connector_state const*) ;

bool FUNC_2(const struct intel_crtc_state *VAR_3,
      const struct drm_connector_state *VAR_4)
{
 const struct intel_digital_connector_state *VAR_5 =
  FUNC_1(VAR_4);
 const struct drm_display_mode *VAR_6 =
  &VAR_3->base.adjusted_mode;

 if (VAR_5->broadcast_rgb == VAR_1) {





  return VAR_3->pipe_bpp != 18 &&
   FUNC_0(VAR_6) ==
   VAR_0;
 } else {
  return VAR_5->broadcast_rgb ==
   VAR_2;
 }
}
