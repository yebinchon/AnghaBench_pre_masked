
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_volt {int vid_nr; TYPE_5__* vid; } ;
struct nvkm_subdev {TYPE_1__* device; } ;
struct TYPE_12__ {int voltage; int * domain; } ;
struct nvkm_pstate {TYPE_6__ base; } ;
struct TYPE_9__ {TYPE_2__* func; struct nvkm_subdev subdev; } ;
struct TYPE_10__ {TYPE_3__ base; } ;
struct gm20b_clk {int safe_fmax_vmin; TYPE_4__ base; } ;
struct TYPE_11__ {int uv; int vid; } ;
struct TYPE_8__ {int nr_pstates; struct nvkm_pstate* pstates; } ;
struct TYPE_7__ {struct nvkm_volt* volt; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 size_t VAR_1 ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*) ;

__attribute__((used)) static int
FUNC_3(struct gm20b_clk *VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_2->base.base.subdev;
 struct nvkm_volt *VAR_4 = VAR_3->device->volt;
 struct nvkm_pstate *VAR_5 = VAR_2->base.base.func->pstates;
 int VAR_6 = VAR_2->base.base.func->nr_pstates;
 int VAR_7, VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;


 VAR_7 = VAR_4->vid[0].uv;
 for (VAR_10 = 1; VAR_10 < VAR_4->vid_nr; VAR_10++) {
  if (VAR_4->vid[VAR_10].uv <= VAR_7) {
   VAR_7 = VAR_4->vid[VAR_10].uv;
   VAR_8 = VAR_4->vid[VAR_10].vid;
  }
 }


 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  if (VAR_5[VAR_10].base.voltage == VAR_8)
   VAR_9 = FUNC_0(VAR_9,
       VAR_5[VAR_10].base.domain[VAR_1]);

 if (!VAR_9) {
  FUNC_2(VAR_3, "failed to evaluate safe fmax\n");
  return -VAR_0;
 }


 VAR_2->safe_fmax_vmin = VAR_9 * (100 - 10) / 100;
 FUNC_1(VAR_3, "safe fmax @ vmin = %u Khz\n", VAR_2->safe_fmax_vmin);

 return 0;
}
