
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_ram {int dummy; } ;
struct nvkm_fb {int dummy; } ;
struct nv50_fb {int base; TYPE_1__* func; } ;
struct TYPE_2__ {int (* ram_new ) (int *,struct nvkm_ram**) ;} ;


 struct nv50_fb* FUNC_0 (struct nvkm_fb*) ;
 int FUNC_1 (int *,struct nvkm_ram**) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_fb *VAR_0, struct nvkm_ram **VAR_1)
{
 struct nv50_fb *VAR_2 = FUNC_0(VAR_0);
 return VAR_2->func->ram_new(&VAR_2->base, VAR_1);
}
