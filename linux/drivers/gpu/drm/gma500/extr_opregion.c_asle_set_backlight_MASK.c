
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct opregion_asle {int cblv; } ;
struct TYPE_4__ {struct opregion_asle* asle; } ;
struct drm_psb_private {struct backlight_device* backlight_device; TYPE_2__ opregion; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_3__ {int max_brightness; } ;
struct backlight_device {TYPE_1__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct drm_device*,int) ;

__attribute__((used)) static u32 FUNC_2(struct drm_device *VAR_4, u32 VAR_5)
{
 struct drm_psb_private *VAR_6 = VAR_4->dev_private;
 struct opregion_asle *VAR_7 = VAR_6->opregion.asle;
 struct backlight_device *VAR_8 = VAR_6->backlight_device;

 FUNC_0("asle set backlight %x\n", VAR_5);

 if (!(VAR_5 & VAR_2))
  return VAR_0;

 if (VAR_8 == ((void*)0))
  return VAR_0;

 VAR_5 &= VAR_1;
 if (VAR_5 > 255)
  return VAR_0;

 FUNC_1(VAR_4, VAR_5 * VAR_8->props.max_brightness / 255);

 VAR_7->cblv = (VAR_5 * 0x64) / 0xff | VAR_3;

 return 0;
}
