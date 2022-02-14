
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_disp {TYPE_2__ engine; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_disp *VAR_0, unsigned long *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->engine.subdev.device;
 *VAR_1 = (FUNC_0(VAR_2, 0x612004) & 0x0000ff00) >> 8;
 return 8;
}
