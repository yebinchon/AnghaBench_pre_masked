
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_gpio {int dummy; } ;
struct TYPE_5__ {int device; } ;
struct nouveau_drm {TYPE_3__* led; TYPE_1__ client; } ;
struct drm_device {int dev; } ;
struct dcb_gpio_func {int dummy; } ;
struct TYPE_6__ {char* name; int max_brightness; int brightness_set; int brightness_get; } ;
struct TYPE_7__ {TYPE_2__ led; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 struct nouveau_drm* FUNC_3 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct nvkm_gpio*,int ,int ,int,struct dcb_gpio_func*) ;
 struct nvkm_gpio* FUNC_5 (int *) ;

int
FUNC_6(struct drm_device *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_3(VAR_5);
 struct nvkm_gpio *VAR_7 = FUNC_5(&VAR_6->client.device);
 struct dcb_gpio_func VAR_8;
 int VAR_9;

 if (!VAR_7)
  return 0;


 if (FUNC_4(VAR_7, 0, VAR_0, 0xff, &VAR_8))
  return 0;

 VAR_6->led = FUNC_1(sizeof(*VAR_6->led), VAR_2);
 if (!VAR_6->led)
  return -VAR_1;
 VAR_6->led->dev = VAR_5;

 VAR_6->led->led.name = "nvidia-logo";
 VAR_6->led->led.max_brightness = 255;
 VAR_6->led->led.brightness_get = VAR_3;
 VAR_6->led->led.brightness_set = VAR_4;

 VAR_9 = FUNC_2(VAR_5->dev, &VAR_6->led->led);
 if (VAR_9) {
  FUNC_0(VAR_6->led);
  VAR_6->led = ((void*)0);
  return VAR_9;
 }

 return 0;
}
