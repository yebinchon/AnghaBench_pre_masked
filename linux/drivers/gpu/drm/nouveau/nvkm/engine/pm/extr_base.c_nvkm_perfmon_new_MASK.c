
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_pm {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_perfmon {struct nvkm_object object; struct nvkm_pm* pm; } ;
struct nvkm_oclass {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_perfmon* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct nvkm_oclass const*,struct nvkm_object*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct nvkm_pm *VAR_3, const struct nvkm_oclass *VAR_4,
   void *VAR_5, u32 VAR_6, struct nvkm_object **VAR_7)
{
 struct nvkm_perfmon *VAR_8;

 if (!(VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_1)))
  return -VAR_0;
 FUNC_1(&VAR_2, VAR_4, &VAR_8->object);
 VAR_8->pm = VAR_3;
 *VAR_7 = &VAR_8->object;
 return 0;
}
