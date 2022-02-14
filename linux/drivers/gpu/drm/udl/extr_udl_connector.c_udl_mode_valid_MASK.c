
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udl_device {int sku_pixel_limit; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_connector {TYPE_1__* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {struct udl_device* dev_private; } ;


 int VAR_0 ;

__attribute__((used)) static enum drm_mode_status FUNC_0(struct drm_connector *VAR_1,
     struct drm_display_mode *VAR_2)
{
 struct udl_device *VAR_3 = VAR_1->dev->dev_private;
 if (!VAR_3->sku_pixel_limit)
  return 0;

 if (VAR_2->vdisplay * VAR_2->hdisplay > VAR_3->sku_pixel_limit)
  return VAR_0;

 return 0;
}
