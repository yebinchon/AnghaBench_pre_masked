
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ oclass; } ;
struct nvkm_oclass {TYPE_1__ base; int engine; } ;
struct nvkm_falcon {TYPE_2__* func; } ;
struct TYPE_4__ {TYPE_1__* sclass; } ;


 struct nvkm_falcon* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_oclass *VAR_0, int VAR_1)
{
 struct nvkm_falcon *VAR_2 = FUNC_0(VAR_0->engine);
 int VAR_3 = 0;

 while (VAR_2->func->sclass[VAR_3].oclass) {
  if (VAR_3++ == VAR_1) {
   VAR_0->base = VAR_2->func->sclass[VAR_1];
   return VAR_1;
  }
 }

 return VAR_3;
}
