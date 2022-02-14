
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;
struct TYPE_6__ {TYPE_2__ engine; } ;
struct gf100_gr {int gpc_nr; int* ppc_nr; int** ppc_tpc_nr; int** ppc_tpc_mask; scalar_t__ ppc_tpc_min; TYPE_3__ base; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_device*,int,int ) ;

void
FUNC_2(struct gf100_gr *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->base.engine.subdev.device;
 u32 VAR_2[8] = {};
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_0->gpc_nr; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < VAR_0->ppc_nr[VAR_3]; VAR_4++) {
   u8 VAR_6 = VAR_0->ppc_tpc_nr[VAR_3][VAR_4];
   u8 VAR_7 = VAR_0->ppc_tpc_mask[VAR_3][VAR_4];
   while (VAR_6-- > VAR_0->ppc_tpc_min)
    VAR_7 &= VAR_7 - 1;
   VAR_7 ^= VAR_0->ppc_tpc_mask[VAR_3][VAR_4];
   ((u8 *)VAR_2)[VAR_3] |= VAR_7;
  }
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  FUNC_1(VAR_1, 0x4064d0 + (VAR_5 * 0x04), VAR_2[VAR_5]);
}
