
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


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nvif_object*,scalar_t__,int ) ;

__attribute__((used)) static inline void FUNC_2(struct drm_device *VAR_3,
     int VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 struct nvif_object *VAR_7 = &FUNC_0(VAR_3)->client.device.object;
 FUNC_1(VAR_7, VAR_0 + VAR_4 * VAR_2, VAR_5);
 FUNC_1(VAR_7, VAR_1 + VAR_4 * VAR_2, VAR_6);
}
