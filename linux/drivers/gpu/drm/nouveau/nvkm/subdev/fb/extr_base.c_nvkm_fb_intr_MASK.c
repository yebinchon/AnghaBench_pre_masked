
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_fb {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_fb*) ;} ;


 struct nvkm_fb* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_fb*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_fb *VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->func->intr)
  VAR_1->func->intr(VAR_1);
}
