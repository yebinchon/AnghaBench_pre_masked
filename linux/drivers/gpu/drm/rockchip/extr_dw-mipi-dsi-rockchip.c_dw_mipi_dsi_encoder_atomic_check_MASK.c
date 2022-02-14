
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_crtc_state {int output_flags; int output_type; int output_mode; } ;
struct dw_mipi_dsi_rockchip {int format; scalar_t__ slave; } ;
struct drm_encoder {int dummy; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 struct dw_mipi_dsi_rockchip* FUNC_1 (struct drm_encoder*) ;
 struct rockchip_crtc_state* FUNC_2 (struct drm_crtc_state*) ;

__attribute__((used)) static int
FUNC_3(struct drm_encoder *VAR_6,
     struct drm_crtc_state *VAR_7,
     struct drm_connector_state *VAR_8)
{
 struct rockchip_crtc_state *VAR_9 = FUNC_2(VAR_7);
 struct dw_mipi_dsi_rockchip *VAR_10 = FUNC_1(VAR_6);

 switch (VAR_10->format) {
 case 128:
  VAR_9->output_mode = VAR_5;
  break;
 case 129:
  VAR_9->output_mode = VAR_4;
  break;
 case 130:
  VAR_9->output_mode = VAR_3;
  break;
 default:
  FUNC_0(1);
  return -VAR_1;
 }

 VAR_9->output_type = VAR_0;
 if (VAR_10->slave)
  VAR_9->output_flags = VAR_2;

 return 0;
}
