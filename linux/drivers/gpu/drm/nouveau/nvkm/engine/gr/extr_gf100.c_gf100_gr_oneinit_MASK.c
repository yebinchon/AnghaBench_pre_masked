
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_gr {int dummy; } ;
struct nvkm_device {int pmu; } ;
struct TYPE_9__ {int falcon; } ;
struct TYPE_8__ {int mutex; int falcon; } ;
struct TYPE_6__ {struct nvkm_subdev subdev; } ;
struct TYPE_7__ {TYPE_1__ engine; } ;
struct gf100_gr {int gpc_nr; int* tpc_nr; int tpc_total; int* ppc_nr; int** ppc_tpc_mask; int* ppc_mask; scalar_t__** ppc_tpc_nr; scalar_t__ ppc_tpc_min; scalar_t__ ppc_tpc_max; TYPE_5__* func; int tile; int tpc_max; int rop_nr; TYPE_4__ gpccs; TYPE_3__ fecs; TYPE_2__ base; } ;
struct TYPE_10__ {int ppc_nr; int (* oneinit_sm_id ) (struct gf100_gr*) ;int (* oneinit_tiles ) (struct gf100_gr*) ;int (* rops ) (struct gf100_gr*) ;} ;


 int FUNC_0 (int,int) ;
 struct gf100_gr* FUNC_1 (struct nvkm_gr*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nvkm_subdev*,char*,int,int *) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct nvkm_device*,int) ;
 int FUNC_9 (struct gf100_gr*) ;
 int FUNC_10 (struct gf100_gr*) ;
 int FUNC_11 (struct gf100_gr*) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_gr *VAR_0)
{
 struct gf100_gr *VAR_1 = FUNC_1(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = FUNC_6(VAR_2, "FECS", 0x409000, &VAR_1->fecs.falcon);
 if (VAR_6)
  return VAR_6;

 FUNC_5(&VAR_1->fecs.mutex);

 VAR_6 = FUNC_6(VAR_2, "GPCCS", 0x41a000, &VAR_1->gpccs.falcon);
 if (VAR_6)
  return VAR_6;

 FUNC_7(VAR_3->pmu, 0);

 VAR_1->rop_nr = VAR_1->func->rops(VAR_1);
 VAR_1->gpc_nr = FUNC_8(VAR_3, 0x409604) & 0x0000001f;
 for (VAR_4 = 0; VAR_4 < VAR_1->gpc_nr; VAR_4++) {
  VAR_1->tpc_nr[VAR_4] = FUNC_8(VAR_3, FUNC_0(VAR_4, 0x2608));
  VAR_1->tpc_max = FUNC_3(VAR_1->tpc_max, VAR_1->tpc_nr[VAR_4]);
  VAR_1->tpc_total += VAR_1->tpc_nr[VAR_4];
  VAR_1->ppc_nr[VAR_4] = VAR_1->func->ppc_nr;
  for (VAR_5 = 0; VAR_5 < VAR_1->ppc_nr[VAR_4]; VAR_5++) {
   VAR_1->ppc_tpc_mask[VAR_4][VAR_5] =
    FUNC_8(VAR_3, FUNC_0(VAR_4, 0x0c30 + (VAR_5 * 4)));
   if (VAR_1->ppc_tpc_mask[VAR_4][VAR_5] == 0)
    continue;
   VAR_1->ppc_mask[VAR_4] |= (1 << VAR_5);
   VAR_1->ppc_tpc_nr[VAR_4][VAR_5] = FUNC_2(VAR_1->ppc_tpc_mask[VAR_4][VAR_5]);
   if (VAR_1->ppc_tpc_min == 0 ||
       VAR_1->ppc_tpc_min > VAR_1->ppc_tpc_nr[VAR_4][VAR_5])
    VAR_1->ppc_tpc_min = VAR_1->ppc_tpc_nr[VAR_4][VAR_5];
   if (VAR_1->ppc_tpc_max < VAR_1->ppc_tpc_nr[VAR_4][VAR_5])
    VAR_1->ppc_tpc_max = VAR_1->ppc_tpc_nr[VAR_4][VAR_5];
  }
 }

 FUNC_4(VAR_1->tile, 0xff, sizeof(VAR_1->tile));
 VAR_1->func->oneinit_tiles(VAR_1);
 VAR_1->func->oneinit_sm_id(VAR_1);
 return 0;
}
