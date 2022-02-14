
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
struct gf100_gr {int gpc_nr; int* ppc_nr; int* ppc_mask; TYPE_3__ base; } ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int ,int) ;

void
FUNC_2(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->gpc_nr; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < VAR_0->ppc_nr[VAR_2]; VAR_3++) {
   if (!(VAR_0->ppc_mask[VAR_2] & (1 << VAR_3)))
    continue;
   FUNC_1(VAR_1, FUNC_0(VAR_2, VAR_3, 0x038), 0xc0000000);
  }
 }
}
