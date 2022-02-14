
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct nouveau_encoder {TYPE_2__ base; } ;
struct TYPE_7__ {struct nvif_object object; } ;
struct TYPE_8__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_4__ client; } ;
struct backlight_properties {int max_brightness; int type; } ;
struct backlight_ops {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct backlight_ops VAR_4 ;
 int FUNC_1 (struct nvif_object*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_encoder *VAR_5,
      struct backlight_properties *VAR_6,
      const struct backlight_ops **VAR_7)
{
 struct nouveau_drm *VAR_8 = FUNC_0(VAR_5->base.base.dev);
 struct nvif_object *VAR_9 = &VAR_8->client.device.object;

 if (!(FUNC_1(VAR_9, VAR_2) & VAR_3))
  return -VAR_1;

 VAR_6->type = VAR_0;
 VAR_6->max_brightness = 31;
 *VAR_7 = &VAR_4;
 return 0;
}
