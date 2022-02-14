
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct nvif_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct nvif_object object; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__ client; } ;


 scalar_t__ FUNC_0 (struct drm_device*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct nvif_object*,scalar_t__) ;
 int FUNC_3 (struct nvif_object*,scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_4(struct drm_device *VAR_4,
     int VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct nvif_object *VAR_8 = &FUNC_1(VAR_4)->client.device.object;
 if (FUNC_0(VAR_4, VAR_5))
  VAR_6 &= ~0x20;
 else
  VAR_6 |= 0x20;

 FUNC_2(VAR_8, VAR_2 + VAR_5 * VAR_3);
 FUNC_3(VAR_8, VAR_0 + VAR_5 * VAR_3, VAR_6);
 FUNC_3(VAR_8, VAR_1 + VAR_5 * VAR_3, VAR_7);
}
