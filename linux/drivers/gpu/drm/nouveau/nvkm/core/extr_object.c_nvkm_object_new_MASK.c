
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_object_func* func; } ;
struct nvkm_oclass {TYPE_1__ base; } ;
struct nvkm_object_func {int dummy; } ;
struct nvkm_object {int dummy; } ;


 struct nvkm_object_func VAR_0 ;
 int FUNC_0 (struct nvkm_object_func const*,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;

int
FUNC_1(const struct nvkm_oclass *VAR_1, void *VAR_2, u32 VAR_3,
  struct nvkm_object **VAR_4)
{
 const struct nvkm_object_func *VAR_5 =
  VAR_1->base.func ? VAR_1->base.func : &VAR_0;
 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
