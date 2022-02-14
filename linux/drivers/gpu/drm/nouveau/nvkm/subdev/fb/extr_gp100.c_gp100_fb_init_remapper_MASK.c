
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

void
FUNC_1(struct nvkm_fb *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;

 FUNC_0(VAR_1, 0x100c14, 0x00040000, 0x00000000);
}
