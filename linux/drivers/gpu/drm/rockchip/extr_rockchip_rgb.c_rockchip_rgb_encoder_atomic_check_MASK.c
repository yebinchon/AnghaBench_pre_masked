
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rockchip_crtc_state {int output_type; int output_mode; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_info {int* bus_formats; scalar_t__ num_bus_formats; } ;
struct drm_crtc_state {int dummy; } ;
struct drm_connector_state {struct drm_connector* connector; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rockchip_crtc_state* FUNC_0 (struct drm_crtc_state*) ;

__attribute__((used)) static int
FUNC_1(struct drm_encoder *VAR_4,
       struct drm_crtc_state *VAR_5,
       struct drm_connector_state *VAR_6)
{
 struct rockchip_crtc_state *VAR_7 = FUNC_0(VAR_5);
 struct drm_connector *VAR_8 = VAR_6->connector;
 struct drm_display_info *VAR_9 = &VAR_8->display_info;
 u32 VAR_10;

 if (VAR_9->num_bus_formats)
  VAR_10 = VAR_9->bus_formats[0];
 else
  VAR_10 = 128;

 switch (VAR_10) {
 case 130:
  VAR_7->output_mode = VAR_2;
  break;
 case 131:
  VAR_7->output_mode = VAR_1;
  break;
 case 128:
 case 129:
 default:
  VAR_7->output_mode = VAR_3;
  break;
 }

 VAR_7->output_type = VAR_0;

 return 0;
}
