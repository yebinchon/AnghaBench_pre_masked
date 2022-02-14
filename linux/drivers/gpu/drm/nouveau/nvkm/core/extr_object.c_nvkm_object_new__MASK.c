
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvkm_oclass {int dummy; } ;
struct nvkm_object_func {int dummy; } ;
struct nvkm_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvkm_object* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_object_func const*,struct nvkm_oclass const*,struct nvkm_object*) ;

int
FUNC_2(const struct nvkm_object_func *VAR_3,
   const struct nvkm_oclass *VAR_4, void *VAR_5, u32 VAR_6,
   struct nvkm_object **VAR_7)
{
 if (VAR_6 == 0) {
  if (!(*VAR_7 = FUNC_0(sizeof(**VAR_7), VAR_2)))
   return -VAR_0;
  FUNC_1(VAR_3, VAR_4, *VAR_7);
  return 0;
 }
 return -VAR_1;
}
