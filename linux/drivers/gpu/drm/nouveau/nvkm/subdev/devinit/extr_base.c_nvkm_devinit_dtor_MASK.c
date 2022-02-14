
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int device; } ;
struct nvkm_devinit {TYPE_1__* func; } ;
struct TYPE_2__ {void* (* dtor ) (struct nvkm_devinit*) ;} ;


 struct nvkm_devinit* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (int ,int) ;
 void* FUNC_2 (struct nvkm_devinit*) ;

__attribute__((used)) static void *
FUNC_3(struct nvkm_subdev *VAR_0)
{
 struct nvkm_devinit *VAR_1 = FUNC_0(VAR_0);
 void *VAR_2 = VAR_1;

 if (VAR_1->func->dtor)
  VAR_2 = VAR_1->func->dtor(VAR_1);


 FUNC_1(VAR_0->device, 1);
 return VAR_2;
}
