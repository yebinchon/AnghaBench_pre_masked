
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct TYPE_4__ {int chipset; } ;
struct TYPE_5__ {TYPE_1__ info; struct nvif_object object; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nvif_object*,int ) ;

__attribute__((used)) static inline bool
FUNC_3(struct drm_device *VAR_2)
{
 struct nvif_object *VAR_3 = &FUNC_1(VAR_2)->client.device.object;
 struct nouveau_drm *VAR_4 = FUNC_1(VAR_2);

 if (VAR_4->client.device.info.chipset == 0x11)
  return !!(FUNC_2(VAR_3, VAR_1) & (1 << 28));

 return FUNC_0(VAR_2, 0, VAR_0) & 0x4;
}
