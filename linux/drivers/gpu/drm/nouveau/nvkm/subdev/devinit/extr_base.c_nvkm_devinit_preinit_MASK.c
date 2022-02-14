
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int device; } ;
struct nvkm_devinit {int force_post; int post; TYPE_1__* func; } ;
struct TYPE_2__ {int (* preinit ) (struct nvkm_devinit*) ;} ;


 struct nvkm_devinit* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct nvkm_devinit*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_subdev *VAR_0)
{
 struct nvkm_devinit *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->func->preinit)
  VAR_1->func->preinit(VAR_1);


 if (VAR_1->force_post) {
  VAR_1->post = VAR_1->force_post;
  VAR_1->force_post = 0;
 }


 FUNC_1(VAR_0->device, 0);
 return 0;
}
