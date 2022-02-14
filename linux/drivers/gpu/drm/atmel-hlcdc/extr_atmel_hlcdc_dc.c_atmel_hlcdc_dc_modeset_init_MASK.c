
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * funcs; int max_height; int max_width; int min_height; int min_width; } ;
struct drm_device {TYPE_2__ mode_config; int dev; struct atmel_hlcdc_dc* dev_private; } ;
struct atmel_hlcdc_dc {TYPE_1__* desc; } ;
struct TYPE_3__ {int max_height; int max_width; int min_height; int min_width; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_1)
{
 struct atmel_hlcdc_dc *VAR_2 = VAR_1->dev_private;
 int VAR_3;

 FUNC_4(VAR_1);

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1->dev, "failed to create HLCDC outputs: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1->dev, "failed to create planes: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1->dev, "failed to create crtc\n");
  return VAR_3;
 }

 VAR_1->mode_config.min_width = VAR_2->desc->min_width;
 VAR_1->mode_config.min_height = VAR_2->desc->min_height;
 VAR_1->mode_config.max_width = VAR_2->desc->max_width;
 VAR_1->mode_config.max_height = VAR_2->desc->max_height;
 VAR_1->mode_config.funcs = &VAR_0;

 return 0;
}
