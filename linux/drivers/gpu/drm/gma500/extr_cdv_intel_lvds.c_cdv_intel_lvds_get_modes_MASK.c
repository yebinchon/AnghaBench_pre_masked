
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_intel_mode_device {int * panel_fixed_mode; } ;
struct gma_encoder {TYPE_1__* i2c_bus; } ;
struct drm_psb_private {struct psb_intel_mode_device mode_dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_2__ {int adapter; } ;


 struct drm_display_mode* FUNC_0 (struct drm_device*,int *) ;
 int FUNC_1 (struct drm_connector*,struct drm_display_mode*) ;
 struct gma_encoder* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*,int *) ;

__attribute__((used)) static int FUNC_4(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_psb_private *VAR_2 = VAR_1->dev_private;
 struct gma_encoder *VAR_3 = FUNC_2(VAR_0);
 struct psb_intel_mode_device *VAR_4 = &VAR_2->mode_dev;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, &VAR_3->i2c_bus->adapter);

 if (VAR_5)
  return VAR_5;

 if (VAR_4->panel_fixed_mode != ((void*)0)) {
  struct drm_display_mode *VAR_6 =
      FUNC_0(VAR_1, VAR_4->panel_fixed_mode);
  FUNC_1(VAR_0, VAR_6);
  return 1;
 }

 return 0;
}
