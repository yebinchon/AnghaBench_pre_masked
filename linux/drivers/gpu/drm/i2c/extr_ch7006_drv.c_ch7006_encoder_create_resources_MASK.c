
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_config {int tv_flicker_reduction_property; int tv_contrast_property; int tv_brightness_property; int tv_mode_property; int tv_bottom_margin_property; int tv_left_margin_property; int tv_subconnector_property; int tv_select_subconnector_property; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector {int base; } ;
struct ch7006_priv {int scale; int scale_property; int flicker; int contrast; int brightness; int norm; int vmargin; int hmargin; int subconnector; int select_subconnector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct drm_device*,int ,char*,int ,int) ;
 struct ch7006_priv* FUNC_3 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_4(struct drm_encoder *VAR_3,
        struct drm_connector *VAR_4)
{
 struct ch7006_priv *VAR_5 = FUNC_3(VAR_3);
 struct drm_device *VAR_6 = VAR_3->dev;
 struct drm_mode_config *VAR_7 = &VAR_6->mode_config;

 FUNC_0(VAR_6, VAR_1, VAR_2);

 VAR_5->scale_property = FUNC_2(VAR_6, 0, "scale", 0, 2);
 if (!VAR_5->scale_property)
  return -VAR_0;

 FUNC_1(&VAR_4->base, VAR_7->tv_select_subconnector_property,
          VAR_5->select_subconnector);
 FUNC_1(&VAR_4->base, VAR_7->tv_subconnector_property,
          VAR_5->subconnector);
 FUNC_1(&VAR_4->base, VAR_7->tv_left_margin_property,
          VAR_5->hmargin);
 FUNC_1(&VAR_4->base, VAR_7->tv_bottom_margin_property,
          VAR_5->vmargin);
 FUNC_1(&VAR_4->base, VAR_7->tv_mode_property,
          VAR_5->norm);
 FUNC_1(&VAR_4->base, VAR_7->tv_brightness_property,
          VAR_5->brightness);
 FUNC_1(&VAR_4->base, VAR_7->tv_contrast_property,
          VAR_5->contrast);
 FUNC_1(&VAR_4->base, VAR_7->tv_flicker_reduction_property,
          VAR_5->flicker);
 FUNC_1(&VAR_4->base, VAR_5->scale_property,
          VAR_5->scale);

 return 0;
}
