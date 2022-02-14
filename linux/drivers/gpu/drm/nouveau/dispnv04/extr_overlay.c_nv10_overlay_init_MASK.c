
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int base; } ;
struct TYPE_12__ {void* saturation; void* hue; void* brightness; void* contrast; void* colorkey; } ;
struct nouveau_plane {int colorkey; int contrast; int brightness; int hue; int saturation; TYPE_5__ base; int (* set_params ) (struct nouveau_plane*) ;int color_encoding; TYPE_4__ props; } ;
struct TYPE_9__ {int chipset; } ;
struct TYPE_10__ {TYPE_1__ info; } ;
struct TYPE_11__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nouveau_drm*,char*) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int,int,int ,int ) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (struct drm_device*,TYPE_5__*,int,int *,int ,unsigned int,int) ;
 void* FUNC_8 (struct drm_device*,int ,char*,int ,int) ;
 int VAR_4 ;
 int FUNC_9 (struct nouveau_plane*) ;
 struct nouveau_plane* FUNC_10 (int,int ) ;
 struct nouveau_drm* FUNC_11 (struct drm_device*) ;
 int VAR_5 ;
 int FUNC_12 (struct nouveau_plane*) ;

__attribute__((used)) static void
FUNC_13(struct drm_device *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_11(VAR_6);
 struct nouveau_plane *VAR_8 = FUNC_10(sizeof(struct nouveau_plane), VAR_3);
 unsigned int VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 if (!VAR_8)
  return;

 switch (VAR_7->client.device.info.chipset) {
 case 0x10:
 case 0x11:
 case 0x15:
 case 0x1a:
 case 0x20:
  VAR_9 = 2;
  break;
 }

 VAR_10 = FUNC_7(VAR_6, &VAR_8->base, 3 ,
        &VAR_5,
        VAR_4, VAR_9, 0);
 if (VAR_10)
  goto err;


 VAR_8->props.colorkey = FUNC_8(
   VAR_6, 0, "colorkey", 0, 0x01ffffff);
 VAR_8->props.contrast = FUNC_8(
   VAR_6, 0, "contrast", 0, 8192 - 1);
 VAR_8->props.brightness = FUNC_8(
   VAR_6, 0, "brightness", 0, 1024);
 VAR_8->props.hue = FUNC_8(
   VAR_6, 0, "hue", 0, 359);
 VAR_8->props.saturation = FUNC_8(
   VAR_6, 0, "saturation", 0, 8192 - 1);
 if (!VAR_8->props.colorkey ||
     !VAR_8->props.contrast ||
     !VAR_8->props.brightness ||
     !VAR_8->props.hue ||
     !VAR_8->props.saturation)
  goto cleanup;

 VAR_8->colorkey = 0;
 FUNC_3(&VAR_8->base.base,
       VAR_8->props.colorkey, VAR_8->colorkey);

 VAR_8->contrast = 0x1000;
 FUNC_3(&VAR_8->base.base,
       VAR_8->props.contrast, VAR_8->contrast);

 VAR_8->brightness = 512;
 FUNC_3(&VAR_8->base.base,
       VAR_8->props.brightness, VAR_8->brightness);

 VAR_8->hue = 0;
 FUNC_3(&VAR_8->base.base,
       VAR_8->props.hue, VAR_8->hue);

 VAR_8->saturation = 0x1000;
 FUNC_3(&VAR_8->base.base,
       VAR_8->props.saturation, VAR_8->saturation);

 VAR_8->color_encoding = VAR_0;
 FUNC_5(&VAR_8->base,
       FUNC_1(VAR_0) |
       FUNC_1(VAR_1),
       FUNC_1(VAR_2),
       VAR_0,
       VAR_2);

 VAR_8->set_params = FUNC_12;
 FUNC_12(VAR_8);
 FUNC_6(&VAR_8->base);
 return;
cleanup:
 FUNC_4(&VAR_8->base);
err:
 FUNC_9(VAR_8);
 FUNC_2(VAR_7, "Failed to create plane\n");
}
