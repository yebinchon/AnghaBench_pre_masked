
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_perfmon {int dummy; } ;
struct nvkm_oclass {int parent; } ;
struct nvkm_object {int dummy; } ;


 int FUNC_0 (struct nvkm_perfmon*,struct nvkm_oclass const*,void*,int ,struct nvkm_object**) ;
 struct nvkm_perfmon* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(const struct nvkm_oclass *VAR_0, void *VAR_1, u32 VAR_2,
         struct nvkm_object **VAR_3)
{
 struct nvkm_perfmon *VAR_4 = FUNC_1(VAR_0->parent);
 return FUNC_0(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);
}
