
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {TYPE_3__ base; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (struct nvkm_device*,int,int) ;

void
FUNC_2(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;

 FUNC_1(VAR_1, 0x418880, FUNC_0(VAR_1, 0x100c80) & 0xf0001fff);
 FUNC_1(VAR_1, 0x418890, 0x00000000);
 FUNC_1(VAR_1, 0x418894, 0x00000000);

 FUNC_1(VAR_1, 0x4188b4, FUNC_0(VAR_1, 0x100cc8));
 FUNC_1(VAR_1, 0x4188b8, FUNC_0(VAR_1, 0x100ccc));
 FUNC_1(VAR_1, 0x4188b0, FUNC_0(VAR_1, 0x100cc4));
}
