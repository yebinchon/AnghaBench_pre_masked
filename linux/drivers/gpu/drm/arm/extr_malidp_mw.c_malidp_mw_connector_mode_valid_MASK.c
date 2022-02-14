
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_config {int min_width; int max_width; int min_height; int max_height; } ;
struct drm_display_mode {int hdisplay; int vdisplay; } ;
struct drm_device {struct drm_mode_config mode_config; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static enum drm_mode_status
FUNC_0(struct drm_connector *VAR_3,
          struct drm_display_mode *VAR_4)
{
 struct drm_device *VAR_5 = VAR_3->dev;
 struct drm_mode_config *VAR_6 = &VAR_5->mode_config;
 int VAR_7 = VAR_4->hdisplay, VAR_8 = VAR_4->vdisplay;

 if ((VAR_7 < VAR_6->min_width) || (VAR_7 > VAR_6->max_width))
  return VAR_0;

 if ((VAR_8 < VAR_6->min_height) || (VAR_8 > VAR_6->max_height))
  return VAR_1;

 return VAR_2;
}
