
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_sclass {int dummy; } ;
struct nvkm_oclass {struct nvkm_sclass const* engn; struct nvkm_sclass base; } ;
struct nvkm_device_oclass {int dummy; } ;


 int FUNC_0 (struct nvkm_sclass*) ;
 struct nvkm_device_oclass VAR_0 ;
 struct nvkm_sclass* VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct nvkm_oclass *VAR_2, int VAR_3,
    const struct nvkm_device_oclass **VAR_4)
{
 const int VAR_5 = FUNC_0(VAR_1);
 if (VAR_3 < VAR_5) {
  const struct nvkm_sclass *VAR_6 = &VAR_1[VAR_3];
  VAR_2->base = VAR_6[0];
  VAR_2->engn = VAR_6;
  *VAR_4 = &VAR_0;
  return VAR_3;
 }
 return VAR_5;
}
