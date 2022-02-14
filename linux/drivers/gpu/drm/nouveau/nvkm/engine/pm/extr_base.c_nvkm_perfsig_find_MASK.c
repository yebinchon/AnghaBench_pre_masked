
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nvkm_pm {int dummy; } ;
struct nvkm_perfsig {int name; } ;
struct nvkm_perfdom {struct nvkm_perfsig* signal; } ;


 struct nvkm_perfdom* FUNC_0 (struct nvkm_pm*,size_t) ;

__attribute__((used)) static struct nvkm_perfsig *
FUNC_1(struct nvkm_pm *VAR_0, u8 VAR_1, u8 VAR_2, struct nvkm_perfdom **VAR_3)
{
 struct nvkm_perfdom *VAR_4 = *VAR_3;

 if (VAR_4 == ((void*)0)) {
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  if (VAR_4 == ((void*)0))
   return ((void*)0);
  *VAR_3 = VAR_4;
 }

 if (!VAR_4->signal[VAR_2].name)
  return ((void*)0);
 return &VAR_4->signal[VAR_2];
}
