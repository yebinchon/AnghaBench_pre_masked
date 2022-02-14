
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {int gpc_nr; TYPE_3__ base; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct nvkm_device*,int ) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2 = 0, VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->gpc_nr; VAR_4++) {
  VAR_3 = FUNC_1(VAR_1, FUNC_0(VAR_4, 0x0c50)) & 0x0000000f;
  VAR_2 |= VAR_3 << (VAR_4 * 4);
 }

 FUNC_2(VAR_1, 0x4181d0, VAR_2);
}
