
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_timer {TYPE_1__* func; } ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_timer*) ;} ;


 struct nvkm_timer* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_timer*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_timer *VAR_1 = FUNC_0(VAR_0);
 VAR_1->func->intr(VAR_1);
}
