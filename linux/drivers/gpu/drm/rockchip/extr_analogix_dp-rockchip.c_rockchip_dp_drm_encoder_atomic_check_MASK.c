
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_crtc_state {int output_bpc; int output_type; int output_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_info {int bpc; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {TYPE_1__* connector; } ;
struct TYPE_2__ {struct drm_display_info display_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rockchip_crtc_state* FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static int
FUNC_1(struct drm_encoder *VAR_2,
          struct drm_crtc_state *VAR_3,
          struct drm_connector_state *VAR_4)
{
 struct rockchip_crtc_state *VAR_5 = FUNC_0(VAR_3);
 struct drm_display_info *VAR_6 = &VAR_4->connector->display_info;
 VAR_5->output_mode = VAR_1;
 VAR_5->output_type = VAR_0;
 VAR_5->output_bpc = VAR_6->bpc;

 return 0;
}
