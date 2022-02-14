
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct nvbios_init {TYPE_1__* subdev; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;


 scalar_t__ FUNC_0 (struct nvbios_init*) ;
 int FUNC_1 (struct nvbios_init*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nvbios_init *VAR_0, u32 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev->device;
 VAR_1 = FUNC_1(VAR_0, VAR_1);
 if (VAR_1 != ~0 && FUNC_0(VAR_0))
  return FUNC_2(VAR_2, VAR_1);
 return 0x00000000;
}
