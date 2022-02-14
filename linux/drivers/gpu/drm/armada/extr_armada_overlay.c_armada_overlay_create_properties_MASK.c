
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct armada_private* dev_private; } ;
struct armada_private {void* colorkey_prop; void* saturation_prop; void* contrast_prop; void* brightness_prop; int colorkey_mode_prop; void* colorkey_alpha_prop; void* colorkey_val_prop; void* colorkey_max_prop; void* colorkey_min_prop; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int ,char*,int ,int ) ;
 void* FUNC_2 (struct drm_device*,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_2)
{
 struct armada_private *VAR_3 = VAR_2->dev_private;

 if (VAR_3->colorkey_prop)
  return 0;

 VAR_3->colorkey_prop = FUNC_2(VAR_2, 0,
    "colorkey", 0, 0xffffff);
 VAR_3->colorkey_min_prop = FUNC_2(VAR_2, 0,
    "colorkey_min", 0, 0xffffff);
 VAR_3->colorkey_max_prop = FUNC_2(VAR_2, 0,
    "colorkey_max", 0, 0xffffff);
 VAR_3->colorkey_val_prop = FUNC_2(VAR_2, 0,
    "colorkey_val", 0, 0xffffff);
 VAR_3->colorkey_alpha_prop = FUNC_2(VAR_2, 0,
    "colorkey_alpha", 0, 0xffffff);
 VAR_3->colorkey_mode_prop = FUNC_1(VAR_2, 0,
    "colorkey_mode",
    VAR_1,
    FUNC_0(VAR_1));
 VAR_3->brightness_prop = FUNC_2(VAR_2, 0,
    "brightness", 0, 256 + 255);
 VAR_3->contrast_prop = FUNC_2(VAR_2, 0,
    "contrast", 0, 0x7fff);
 VAR_3->saturation_prop = FUNC_2(VAR_2, 0,
    "saturation", 0, 0x7fff);

 if (!VAR_3->colorkey_prop)
  return -VAR_0;

 return 0;
}
