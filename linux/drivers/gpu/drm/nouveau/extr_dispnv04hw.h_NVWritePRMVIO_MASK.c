
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct nvif_object {int dummy; } ;
struct TYPE_4__ {scalar_t__ family; } ;
struct TYPE_5__ {TYPE_1__ info; struct nvif_object object; } ;
struct TYPE_6__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nvif_object*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct drm_device *VAR_2,
     int VAR_3, uint32_t VAR_4, uint8_t VAR_5)
{
 struct nvif_object *VAR_6 = &FUNC_0(VAR_2)->client.device.object;
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_2);



 if (VAR_3 && VAR_7->client.device.info.family == VAR_0)
  VAR_4 += VAR_1;

 FUNC_1(VAR_6, VAR_4, VAR_5);
}
