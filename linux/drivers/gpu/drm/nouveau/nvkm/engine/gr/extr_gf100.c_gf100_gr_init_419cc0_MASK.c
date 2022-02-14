
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
struct gf100_gr {int gpc_nr; int* tpc_nr; TYPE_3__ base; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int ,int) ;

void
FUNC_3(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 int VAR_2, VAR_3;

 FUNC_1(VAR_1, 0x419cc0, 0x00000008, 0x00000008);

 for (VAR_2 = 0; VAR_2 < VAR_0->gpc_nr; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->tpc_nr[VAR_2]; VAR_3++)
   FUNC_2(VAR_1, FUNC_0(VAR_2, VAR_3, 0x48c), 0xc0000000);
 }
}
