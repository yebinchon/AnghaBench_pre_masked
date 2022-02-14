
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_display_mode {int dummy; } ;
struct TYPE_2__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {int port_clock; int lspcon_downsampling; int output_format; TYPE_1__ base; } ;
struct drm_display_info {int dummy; } ;
struct drm_connector {scalar_t__ ycbcr_420_allowed; struct drm_display_info display_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_display_info const*,struct drm_display_mode const*) ;

void FUNC_1(struct drm_connector *VAR_1,
       struct intel_crtc_state *VAR_2)
{
 const struct drm_display_info *VAR_3 = &VAR_1->display_info;
 const struct drm_display_mode *VAR_4 =
     &VAR_2->base.adjusted_mode;

 if (FUNC_0(VAR_3, VAR_4) &&
     VAR_1->ycbcr_420_allowed) {
  VAR_2->port_clock /= 2;
  VAR_2->output_format = VAR_0;
  VAR_2->lspcon_downsampling = 1;
 }
}
