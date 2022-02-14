
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_object {int dummy; } ;
struct nvbios {int major_version; int* data; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_6__ {TYPE_1__ info; struct nvif_object object; } ;
struct TYPE_5__ {TYPE_3__ device; } ;
struct nouveau_drm {TYPE_2__ client; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nvif_object*,int) ;

__attribute__((used)) static int
FUNC_3(struct drm_device *VAR_3, struct nvbios *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_1(VAR_3);
 struct nvif_object *VAR_6 = &VAR_5->client.device.object;
 if (VAR_4->major_version < 5 && VAR_4->data[0x48] & 0x4)
  return FUNC_0(VAR_3, 0, 0xf) & 0xf;

 if (VAR_5->client.device.info.family >= VAR_0)
  return FUNC_2(VAR_6, 0x001800) & 0x0000000f;
 else
 if (VAR_5->client.device.info.family >= VAR_1)
  return (FUNC_2(VAR_6, VAR_2) >> 24) & 0xf;
 else
  return (FUNC_2(VAR_6, VAR_2) >> 16) & 0xf;
}
