
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct nvkm_device {TYPE_2__* quirk; } ;
struct TYPE_3__ {int device; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ tv_pin_mask; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 struct nvkm_device* FUNC_1 (int *) ;

__attribute__((used)) static bool
FUNC_2(struct drm_device *VAR_0, uint32_t *VAR_1)
{
 struct nouveau_drm *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_3 = FUNC_1(&VAR_2->client.device);

 if (VAR_3->quirk && VAR_3->quirk->tv_pin_mask) {
  *VAR_1 = VAR_3->quirk->tv_pin_mask;
  return 0;
 }

 return 1;
}
