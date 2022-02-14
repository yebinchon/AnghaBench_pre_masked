
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_secboot {TYPE_1__* func; } ;
struct TYPE_2__ {void* (* dtor ) (struct nvkm_secboot*) ;} ;


 struct nvkm_secboot* FUNC_0 (struct nvkm_subdev*) ;
 void* FUNC_1 (struct nvkm_secboot*) ;

__attribute__((used)) static void *
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_secboot *VAR_1 = FUNC_0(VAR_0);
 void *VAR_2 = ((void*)0);

 if (VAR_1->func->dtor)
  VAR_2 = VAR_1->func->dtor(VAR_1);

 return VAR_2;
}
