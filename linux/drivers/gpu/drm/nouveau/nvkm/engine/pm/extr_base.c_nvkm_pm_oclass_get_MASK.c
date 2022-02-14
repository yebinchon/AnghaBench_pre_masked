
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_oclass {int base; } ;
struct nvkm_device_oclass {int base; } ;


 struct nvkm_device_oclass VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct nvkm_oclass *VAR_1, int VAR_2,
     const struct nvkm_device_oclass **VAR_3)
{
 if (VAR_2 == 0) {
  VAR_1->base = VAR_0.base;
  *VAR_3 = &VAR_0;
  return VAR_2;
 }
 return 1;
}
