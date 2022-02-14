
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int dummy; } ;
struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {int crtc; struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int output_format; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_display_info {int dummy; } ;
struct drm_connector {int ycbcr_420_allowed; struct drm_display_info display_info; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_display_info const*,struct drm_display_mode const*) ;
 int FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_crtc*,struct intel_crtc_state*,int ) ;
 int FUNC_4 (struct intel_crtc_state*) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct intel_dp *VAR_2,
    struct drm_connector *VAR_3,
    struct intel_crtc_state *VAR_4)
{
 const struct drm_display_info *VAR_5 = &VAR_3->display_info;
 const struct drm_display_mode *VAR_6 =
  &VAR_4->base.adjusted_mode;
 struct intel_crtc *VAR_7 = FUNC_5(VAR_4->base.crtc);
 int VAR_8;

 if (!FUNC_1(VAR_5, VAR_6) ||
     !FUNC_2(VAR_2) ||
     !VAR_3->ycbcr_420_allowed)
  return 0;

 VAR_4->output_format = VAR_1;


 VAR_8 = FUNC_4(VAR_4);
 if (VAR_8) {
  FUNC_0("Scaler allocation for output failed\n");
  return VAR_8;
 }

 FUNC_3(VAR_7, VAR_4, VAR_0);

 return 0;
}
