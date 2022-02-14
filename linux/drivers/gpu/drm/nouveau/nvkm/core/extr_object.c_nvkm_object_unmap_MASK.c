
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {TYPE_1__* func; } ;
struct TYPE_2__ {int (* unmap ) (struct nvkm_object*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int (*) (struct nvkm_object*)) ;
 int FUNC_1 (struct nvkm_object*) ;

int
FUNC_2(struct nvkm_object *VAR_1)
{
 if (FUNC_0(VAR_1->func->unmap))
  return VAR_1->func->unmap(VAR_1);
 return -VAR_0;
}
