
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_sclass {int dummy; } ;
struct nvkm_oclass {struct nvkm_sclass base; int ctor; } ;
struct nvkm_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_sclass VAR_2 ;
 struct nvkm_sclass VAR_3 ;

__attribute__((used)) static int
FUNC_0(struct nvkm_object *VAR_4, int VAR_5,
        struct nvkm_oclass *VAR_6)
{
 const struct nvkm_sclass *VAR_7;

 switch (VAR_5) {
 case 0: VAR_7 = &VAR_2; break;
 case 1: VAR_7 = &VAR_3; break;
 default:
  return -VAR_0;
 }

 VAR_6->ctor = VAR_1;
 VAR_6->base = *VAR_7;
 return 0;
}
