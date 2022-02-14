
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_object {TYPE_1__* func; } ;
struct TYPE_2__ {int (* mthd ) (struct nvkm_object*,int ,void*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (struct nvkm_object*,int ,void*,int )) ;
 int FUNC_1 (struct nvkm_object*,int ,void*,int ) ;

int
FUNC_2(struct nvkm_object *VAR_1, u32 VAR_2, void *VAR_3, u32 VAR_4)
{
 if (FUNC_0(VAR_1->func->mthd))
  return VAR_1->func->mthd(VAR_1, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}
