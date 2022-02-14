
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_pm {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_perfmon {struct nvkm_pm* pm; struct nvkm_object object; } ;
struct nvkm_perfdom {int name; } ;
struct nvif_perfmon_query_domain_v0 {int iter; int id; int counter_nr; int name; int signal_nr; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_object*,char*,int ,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_perfmon_query_domain_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_perfdom*) ;
 struct nvkm_perfdom* FUNC_3 (struct nvkm_pm*,int) ;
 int FUNC_4 (struct nvkm_pm*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct nvkm_perfmon *VAR_2,
          void *VAR_3, u32 VAR_4)
{
 union {
  struct nvif_perfmon_query_domain_v0 v0;
 } *VAR_5 = VAR_3;
 struct nvkm_object *VAR_6 = &VAR_2->object;
 struct nvkm_pm *VAR_7 = VAR_2->pm;
 struct nvkm_perfdom *VAR_8;
 u8 VAR_9;
 int VAR_10, VAR_11 = -VAR_1;

 FUNC_0(VAR_6, "perfmon query domain size %d\n", VAR_4);
 if (!(VAR_11 = FUNC_1(VAR_11, &VAR_3, &VAR_4, VAR_5->v0, 0, 0, 0))) {
  FUNC_0(VAR_6, "perfmon domain vers %d iter %02x\n",
      VAR_5->v0.version, VAR_5->v0.iter);
  VAR_10 = (VAR_5->v0.iter & 0xff) - 1;
 } else
  return VAR_11;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_10 >= (int)VAR_9)
  return -VAR_0;

 if (VAR_10 >= 0) {
  VAR_8 = FUNC_3(VAR_7, VAR_10);
  if (VAR_8 == ((void*)0))
   return -VAR_0;

  VAR_5->v0.id = VAR_10;
  VAR_5->v0.signal_nr = FUNC_2(VAR_8);
  FUNC_5(VAR_5->v0.name, VAR_8->name, sizeof(VAR_5->v0.name) - 1);



  VAR_5->v0.counter_nr = 4;
 }

 if (++VAR_10 < VAR_9) {
  VAR_5->v0.iter = ++VAR_10;
  return 0;
 }

 VAR_5->v0.iter = 0xff;
 return 0;
}
