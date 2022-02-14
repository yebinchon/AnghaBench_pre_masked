
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct nouveau_encoder {TYPE_2__ base; } ;
struct TYPE_8__ {struct nvif_object object; } ;
struct TYPE_9__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ client; } ;
struct TYPE_10__ {int brightness; } ;
struct backlight_device {TYPE_5__ props; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_encoder* FUNC_0 (struct backlight_device*) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nvif_object*,int ) ;
 int FUNC_3 (struct nvif_object*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct backlight_device *VAR_2)
{
 struct nouveau_encoder *VAR_3 = FUNC_0(VAR_2);
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_3->base.base.dev);
 struct nvif_object *VAR_5 = &VAR_4->client.device.object;
 int VAR_6 = VAR_2->props.brightness;
 int VAR_7 = FUNC_2(VAR_5, VAR_0);

 FUNC_3(VAR_5, VAR_0,
    (VAR_6 << 16) | (VAR_7 & ~VAR_1));

 return 0;
}
