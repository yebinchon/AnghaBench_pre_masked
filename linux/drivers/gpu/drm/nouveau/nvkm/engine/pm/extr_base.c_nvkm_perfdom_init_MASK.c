
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_pm {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_perfdom {TYPE_2__* func; scalar_t__* ctr; TYPE_1__* perfmon; struct nvkm_object object; } ;
struct nvif_perfdom_init {int dummy; } ;
struct TYPE_4__ {int (* next ) (struct nvkm_pm*,struct nvkm_perfdom*) ;int (* init ) (struct nvkm_pm*,struct nvkm_perfdom*,scalar_t__) ;} ;
struct TYPE_3__ {struct nvkm_pm* pm; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,char*,...) ;
 int FUNC_1 (int,void**,int *,struct nvif_perfdom_init) ;
 int FUNC_2 (struct nvkm_pm*,scalar_t__) ;
 int FUNC_3 (struct nvkm_pm*,struct nvkm_perfdom*,scalar_t__) ;
 int FUNC_4 (struct nvkm_pm*,struct nvkm_perfdom*) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_perfdom *VAR_1, void *VAR_2, u32 VAR_3)
{
 union {
  struct nvif_perfdom_init none;
 } *VAR_4 = VAR_2;
 struct nvkm_object *VAR_5 = &VAR_1->object;
 struct nvkm_pm *VAR_6 = VAR_1->perfmon->pm;
 int VAR_7 = -VAR_0, VAR_8;

 FUNC_0(VAR_5, "perfdom init size %d\n", VAR_3);
 if (!(VAR_7 = FUNC_1(VAR_7, &VAR_2, &VAR_3, VAR_4->none))) {
  FUNC_0(VAR_5, "perfdom init\n");
 } else
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  if (VAR_1->ctr[VAR_8]) {
   VAR_1->func->init(VAR_6, VAR_1, VAR_1->ctr[VAR_8]);


   FUNC_2(VAR_6, VAR_1->ctr[VAR_8]);
  }
 }


 VAR_1->func->next(VAR_6, VAR_1);
 return 0;
}
