
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int maxver; int minver; int oclass; } ;
struct nvkm_oclass {TYPE_3__ base; struct nvkm_client* client; } ;
struct nvkm_object {TYPE_1__* func; } ;
struct nvkm_client {int dummy; } ;
struct nvif_ioctl_sclass_v0 {int count; TYPE_2__* oclass; int version; } ;
struct TYPE_5__ {int maxver; int minver; int oclass; } ;
struct TYPE_4__ {scalar_t__ (* sclass ) (struct nvkm_object*,int,struct nvkm_oclass*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_object*,char*,int,...) ;
 int FUNC_1 (int,void**,int*,struct nvif_ioctl_sclass_v0,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct nvkm_object*,int,struct nvkm_oclass*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_client *VAR_2,
    struct nvkm_object *VAR_3, void *VAR_4, u32 VAR_5)
{
 union {
  struct nvif_ioctl_sclass_v0 v0;
 } *VAR_6 = VAR_4;
 struct nvkm_oclass VAR_7 = { .client = VAR_2 };
 int VAR_8 = -VAR_1, VAR_9 = 0;

 FUNC_0(VAR_3, "sclass size %d\n", VAR_5);
 if (!(VAR_8 = FUNC_1(VAR_8, &VAR_4, &VAR_5, VAR_6->v0, 0, 0, 1))) {
  FUNC_0(VAR_3, "sclass vers %d count %d\n",
      VAR_6->v0.version, VAR_6->v0.count);
  if (VAR_5 != VAR_6->v0.count * sizeof(VAR_6->v0.oclass[0]))
   return -VAR_0;

  while (VAR_3->func->sclass &&
         VAR_3->func->sclass(VAR_3, VAR_9, &VAR_7) >= 0) {
   if (VAR_9 < VAR_6->v0.count) {
    VAR_6->v0.oclass[VAR_9].oclass = VAR_7.base.oclass;
    VAR_6->v0.oclass[VAR_9].minver = VAR_7.base.minver;
    VAR_6->v0.oclass[VAR_9].maxver = VAR_7.base.maxver;
   }
   VAR_9++;
  }

  VAR_6->v0.count = VAR_9;
 }

 return VAR_8;
}
