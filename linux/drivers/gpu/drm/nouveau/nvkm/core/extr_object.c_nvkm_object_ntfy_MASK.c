
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {TYPE_1__* func; } ;
struct nvkm_event {int dummy; } ;
struct TYPE_2__ {int (* ntfy ) (struct nvkm_object*,int ,struct nvkm_event**) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (struct nvkm_object*,int ,struct nvkm_event**)) ;
 int FUNC_1 (struct nvkm_object*,int ,struct nvkm_event**) ;

int
FUNC_2(struct nvkm_object *VAR_1, u32 VAR_2,
   struct nvkm_event **VAR_3)
{
 if (FUNC_0(VAR_1->func->ntfy))
  return VAR_1->func->ntfy(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
