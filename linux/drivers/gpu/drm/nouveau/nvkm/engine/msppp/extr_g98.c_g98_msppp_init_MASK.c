
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;
struct nvkm_falcon {TYPE_2__ engine; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int) ;

void
FUNC_1(struct nvkm_falcon *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->engine.subdev.device;
 FUNC_0(VAR_1, 0x086010, 0x0000ffd2);
 FUNC_0(VAR_1, 0x08601c, 0x0000fff2);
}
