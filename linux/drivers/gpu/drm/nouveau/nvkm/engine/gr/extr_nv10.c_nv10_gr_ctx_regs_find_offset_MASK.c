
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct nv10_gr {TYPE_2__ base; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct nv10_gr *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->base.engine.subdev;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  if (VAR_0[VAR_4] == VAR_2)
   return VAR_4;
 }
 FUNC_1(VAR_3, "unknown offset nv10_ctx_regs %d\n", VAR_2);
 return -1;
}
