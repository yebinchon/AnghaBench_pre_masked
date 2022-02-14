
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_oclass {struct nvkm_disp_oclass const* engn; int base; int engine; } ;
struct nvkm_disp_oclass {int base; } ;
struct nvkm_disp {TYPE_1__* func; } ;
struct nvkm_device_oclass {int dummy; } ;
struct TYPE_2__ {struct nvkm_disp_oclass* (* root ) (struct nvkm_disp*) ;} ;


 struct nvkm_disp* FUNC_0 (int ) ;
 struct nvkm_device_oclass VAR_0 ;
 struct nvkm_disp_oclass* FUNC_1 (struct nvkm_disp*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_oclass *VAR_1, int VAR_2,
      const struct nvkm_device_oclass **VAR_3)
{
 struct nvkm_disp *VAR_4 = FUNC_0(VAR_1->engine);
 if (VAR_2 == 0) {
  const struct nvkm_disp_oclass *VAR_5 = VAR_4->func->root(VAR_4);
  VAR_1->base = VAR_5->base;
  VAR_1->engn = VAR_5;
  *VAR_3 = &VAR_0;
  return 0;
 }
 return 1;
}
