
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nvkm_mc_map {int unit; scalar_t__ stat; int noauto; } ;
struct nvkm_mc {TYPE_1__* func; } ;
struct nvkm_device {struct nvkm_mc* mc; } ;
typedef enum nvkm_devidx { ____Placeholder_nvkm_devidx } nvkm_devidx ;
struct TYPE_2__ {struct nvkm_mc_map* reset; } ;


 scalar_t__ FUNC_0 (struct nvkm_mc*) ;
 scalar_t__ FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct nvkm_device *VAR_0, bool VAR_1,
     enum nvkm_devidx VAR_2)
{
 struct nvkm_mc *VAR_3 = VAR_0->mc;
 const struct nvkm_mc_map *VAR_4;
 u64 VAR_5 = 0;
 if (FUNC_0(VAR_3)) {
  if (!(VAR_5 = FUNC_1(VAR_0, VAR_2))) {
   for (VAR_4 = VAR_3->func->reset; VAR_4 && VAR_4->stat; VAR_4++) {
    if (!VAR_1 || !VAR_4->noauto) {
     if (VAR_4->unit == VAR_2) {
      VAR_5 = VAR_4->stat;
      break;
     }
    }
   }
  }
 }
 return VAR_5;
}
