
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nvkm_mc_map {int unit; scalar_t__ stat; } ;
struct nvkm_mc {TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_mc* mc; } ;
typedef enum nvkm_devidx { ____Placeholder_nvkm_devidx } nvkm_devidx ;
struct TYPE_2__ {int (* intr_mask ) (struct nvkm_mc*,scalar_t__,scalar_t__) ;struct nvkm_mc_map* intr; } ;


 scalar_t__ FUNC_0 (struct nvkm_mc*) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_mc*,scalar_t__,scalar_t__) ;

void
FUNC_3(struct nvkm_device *VAR_0, enum nvkm_devidx VAR_1, bool VAR_2)
{
 struct nvkm_mc *VAR_3 = VAR_0->mc;
 const struct nvkm_mc_map *VAR_4;
 if (FUNC_0(VAR_3) && VAR_3->func->intr_mask) {
  u32 VAR_5 = FUNC_1(VAR_0, VAR_1);
  for (VAR_4 = VAR_3->func->intr; !VAR_5 && VAR_4->stat; VAR_4++) {
   if (VAR_4->unit == VAR_1)
    VAR_5 = VAR_4->stat;
  }
  VAR_3->func->intr_mask(VAR_3, VAR_5, VAR_2 ? VAR_5 : 0);
 }
}
