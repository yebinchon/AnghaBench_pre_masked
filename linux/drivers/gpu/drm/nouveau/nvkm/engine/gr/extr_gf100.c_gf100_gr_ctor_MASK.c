
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_device {int cfgopt; } ;
struct TYPE_2__ {int * ucode; } ;
struct gf100_gr_func {TYPE_1__ fecs; } ;
struct gf100_gr {int base; scalar_t__ firmware; struct gf100_gr_func const* func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,struct nvkm_device*,int,int,int *) ;

int
FUNC_2(const struct gf100_gr_func *VAR_1, struct nvkm_device *VAR_2,
       int VAR_3, struct gf100_gr *VAR_4)
{
 VAR_4->func = VAR_1;
 VAR_4->firmware = FUNC_0(VAR_2->cfgopt, "NvGrUseFW",
        VAR_1->fecs.ucode == ((void*)0));

 return FUNC_1(&VAR_0, VAR_2, VAR_3,
       VAR_4->firmware || VAR_1->fecs.ucode != ((void*)0),
       &VAR_4->base);
}
