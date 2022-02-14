
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_sclass {int ctor; scalar_t__ oclass; } ;
struct nvkm_gr {int dummy; } ;
struct gf100_gr {TYPE_1__* func; } ;
struct TYPE_2__ {struct nvkm_sclass* sclass; } ;


 struct gf100_gr* FUNC_0 (struct nvkm_gr*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_gr *VAR_1, int VAR_2, struct nvkm_sclass *VAR_3)
{
 struct gf100_gr *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 while (VAR_4->func->sclass[VAR_5].oclass) {
  if (VAR_5++ == VAR_2) {
   *VAR_3 = VAR_4->func->sclass[VAR_2];
   VAR_3->ctor = VAR_0;
   return VAR_2;
  }
 }

 return VAR_5;
}
