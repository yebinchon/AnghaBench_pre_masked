
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
struct backlight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_encoder* FUNC_0 (struct backlight_device*) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (struct nvif_object*,int ) ;

__attribute__((used)) static int
FUNC_3(struct backlight_device *VAR_2)
{
 struct nouveau_encoder *VAR_3 = FUNC_0(VAR_2);
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_3->base.base.dev);
 struct nvif_object *VAR_5 = &VAR_4->client.device.object;
 int VAR_6 = (FUNC_2(VAR_5, VAR_0) &
     VAR_1) >> 16;

 return VAR_6;
}
