
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_gpio {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_gpio *VAR_0, int VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 return !!(FUNC_0(VAR_2, 0x00d610 + (VAR_1 * 4)) & 0x00004000);
}
