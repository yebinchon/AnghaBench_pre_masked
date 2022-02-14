
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_pm {int dummy; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_perfdom {scalar_t__ clk; TYPE_3__** ctr; TYPE_2__* func; TYPE_1__* perfmon; struct nvkm_object object; } ;
struct nvif_perfdom_read_v0 {scalar_t__ clk; int * ctr; int version; } ;
struct TYPE_6__ {int ctr; } ;
struct TYPE_5__ {int (* read ) (struct nvkm_pm*,struct nvkm_perfdom*,TYPE_3__*) ;} ;
struct TYPE_4__ {struct nvkm_pm* pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_object*,char*,int ) ;
 int FUNC_1 (int,void**,int *,struct nvif_perfdom_read_v0,int ,int ,int) ;
 int FUNC_2 (struct nvkm_pm*,struct nvkm_perfdom*,TYPE_3__*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_perfdom *VAR_2, void *VAR_3, u32 VAR_4)
{
 union {
  struct nvif_perfdom_read_v0 v0;
 } *VAR_5 = VAR_3;
 struct nvkm_object *VAR_6 = &VAR_2->object;
 struct nvkm_pm *VAR_7 = VAR_2->perfmon->pm;
 int VAR_8 = -VAR_1, VAR_9;

 FUNC_0(VAR_6, "perfdom read size %d\n", VAR_4);
 if (!(VAR_8 = FUNC_1(VAR_8, &VAR_3, &VAR_4, VAR_5->v0, 0, 0, 0))) {
  FUNC_0(VAR_6, "perfdom read vers %d\n", VAR_5->v0.version);
 } else
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++) {
  if (VAR_2->ctr[VAR_9])
   VAR_2->func->read(VAR_7, VAR_2, VAR_2->ctr[VAR_9]);
 }

 if (!VAR_2->clk)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < 4; VAR_9++)
  if (VAR_2->ctr[VAR_9])
   VAR_5->v0.ctr[VAR_9] = VAR_2->ctr[VAR_9]->ctr;
 VAR_5->v0.clk = VAR_2->clk;
 return 0;
}
