
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


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

void
FUNC_1(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 FUNC_0(VAR_1, 0x418c6c, 0x00000001, 0x00000001);
 FUNC_0(VAR_1, 0x41980c, 0x00000010, 0x00000010);
 FUNC_0(VAR_1, 0x419814, 0x00000004, 0x00000004);
 FUNC_0(VAR_1, 0x4064c0, 0x80000000, 0x80000000);
 FUNC_0(VAR_1, 0x405800, 0x08000000, 0x08000000);
 FUNC_0(VAR_1, 0x419c00, 0x00000008, 0x00000008);
}
