
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_engine {int dummy; } ;
struct nvkm_disp {TYPE_1__* func; } ;
struct TYPE_2__ {int (* intr ) (struct nvkm_disp*) ;} ;


 struct nvkm_disp* FUNC_0 (struct nvkm_engine*) ;
 int FUNC_1 (struct nvkm_disp*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_engine *VAR_0)
{
 struct nvkm_disp *VAR_1 = FUNC_0(VAR_0);
 VAR_1->func->intr(VAR_1);
}
