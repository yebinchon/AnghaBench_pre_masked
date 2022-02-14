
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct nvif_object {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {struct nvif_object object; } ;
struct TYPE_5__ {TYPE_1__ device; } ;
struct TYPE_6__ {TYPE_2__ client; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct nvif_object*,int ) ;

__attribute__((used)) static inline uint32_t FUNC_2(struct drm_device *VAR_1,
     int VAR_2, uint32_t VAR_3)
{
 struct nvif_object *VAR_4 = &FUNC_0(VAR_1)->client.device.object;
 uint32_t VAR_5;
 if (VAR_2)
  VAR_3 += VAR_0;
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 return VAR_5;
}
