
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_gr {int dummy; } ;
struct TYPE_8__ {int falcon; } ;
struct TYPE_7__ {int falcon; } ;
struct TYPE_5__ {struct nvkm_subdev subdev; } ;
struct TYPE_6__ {TYPE_1__ engine; } ;
struct gf100_gr {TYPE_4__ fecs; TYPE_3__ gpccs; TYPE_2__ base; } ;


 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (int ,struct nvkm_subdev*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_gr *VAR_0, bool VAR_1)
{
 struct gf100_gr *VAR_2 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_3 = &VAR_2->base.engine.subdev;
 FUNC_1(VAR_2->gpccs.falcon, VAR_3);
 FUNC_1(VAR_2->fecs.falcon, VAR_3);
 return 0;
}
