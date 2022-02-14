
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_oclass {int ctor; TYPE_2__* priv; int base; } ;
struct nvkm_object {int dummy; } ;
struct nv50_disp_root {TYPE_1__* func; } ;
struct TYPE_4__ {int base; scalar_t__ ctor; } ;
struct TYPE_3__ {TYPE_2__* user; } ;


 int VAR_0 ;
 struct nv50_disp_root* FUNC_0 (struct nvkm_object*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_object *VAR_2, int VAR_3,
     struct nvkm_oclass *VAR_4)
{
 struct nv50_disp_root *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->func->user[VAR_3].ctor) {
  VAR_4->base = VAR_5->func->user[VAR_3].base;
  VAR_4->priv = VAR_5->func->user + VAR_3;
  VAR_4->ctor = VAR_1;
  return 0;
 }

 return -VAR_0;
}
