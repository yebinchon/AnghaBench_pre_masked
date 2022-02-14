
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chipset; } ;
struct nvif_device {TYPE_2__ info; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct nvif_device device; } ;
struct TYPE_6__ {TYPE_1__ client; } ;


 TYPE_3__* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;

void
FUNC_3(struct drm_device *VAR_0)
{
 struct nvif_device *VAR_1 = &FUNC_0(VAR_0)->client.device;
 if (VAR_1->info.chipset < 0x10)
  FUNC_1(VAR_0);
 else if (VAR_1->info.chipset <= 0x40)
  FUNC_2(VAR_0);
}
