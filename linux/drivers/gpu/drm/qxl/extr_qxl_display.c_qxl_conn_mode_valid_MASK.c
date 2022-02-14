
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qxl_device {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {struct qxl_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qxl_device*,int ,int ) ;

__attribute__((used)) static enum drm_mode_status FUNC_1(struct drm_connector *VAR_2,
          struct drm_display_mode *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct qxl_device *VAR_5 = VAR_4->dev_private;

 if (FUNC_0(VAR_5, VAR_3->hdisplay, VAR_3->vdisplay) != 0)
  return VAR_0;

 return VAR_1;
}
