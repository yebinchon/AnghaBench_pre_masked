
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_sw {TYPE_3__* func; } ;
struct TYPE_4__ {int ctor; } ;
struct nvkm_oclass {TYPE_1__ base; TYPE_2__* engn; int engine; } ;
struct TYPE_6__ {TYPE_2__* sclass; } ;
struct TYPE_5__ {TYPE_1__ base; scalar_t__ ctor; } ;


 struct nvkm_sw* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_oclass *VAR_1, int VAR_2)
{
 struct nvkm_sw *VAR_3 = FUNC_0(VAR_1->engine);
 int VAR_4 = 0;

 while (VAR_3->func->sclass[VAR_4].ctor) {
  if (VAR_4++ == VAR_2) {
   VAR_1->engn = &VAR_3->func->sclass[VAR_2];
   VAR_1->base = VAR_3->func->sclass[VAR_2].base;
   VAR_1->base.ctor = VAR_0;
   return VAR_2;
  }
 }

 return VAR_4;
}
