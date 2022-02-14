
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct nvif_device {int object; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {struct nvif_device device; } ;
struct TYPE_4__ {TYPE_1__ client; } ;


 TYPE_2__* FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct drm_device *VAR_0, uint32_t VAR_1,
    uint32_t VAR_2)
{
 struct nvif_device *VAR_3 = &FUNC_0(VAR_0)->client.device;
 FUNC_1(&VAR_3->object, VAR_1, VAR_2);
}
