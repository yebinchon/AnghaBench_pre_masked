
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_12__ {struct nvkm_subdev subdev; } ;
struct nvkm_gr {TYPE_4__ engine; } ;
struct TYPE_10__ {int falcon; } ;
struct TYPE_9__ {int falcon; } ;
struct TYPE_14__ {TYPE_5__* device; } ;
struct TYPE_15__ {TYPE_6__ subdev; } ;
struct TYPE_16__ {TYPE_7__ engine; } ;
struct gf100_gr {TYPE_3__* func; TYPE_2__ gpccs; TYPE_1__ fecs; TYPE_8__ base; } ;
struct TYPE_13__ {int pmu; } ;
struct TYPE_11__ {int (* init ) (struct gf100_gr*) ;} ;


 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;
 int FUNC_1 (int ,struct nvkm_subdev*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct gf100_gr*) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_gr *VAR_0)
{
 struct gf100_gr *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_subdev *VAR_2 = &VAR_0->engine.subdev;
 u32 VAR_3;

 FUNC_2(VAR_1->base.engine.subdev.device->pmu, 0);

 VAR_3 = FUNC_1(VAR_1->fecs.falcon, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1->gpccs.falcon, VAR_2);
 if (VAR_3)
  return VAR_3;

 return VAR_1->func->init(VAR_1);
}
