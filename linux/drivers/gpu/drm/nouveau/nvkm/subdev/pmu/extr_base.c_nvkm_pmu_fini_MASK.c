
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_4__ {int work; } ;
struct nvkm_pmu {TYPE_2__ recv; TYPE_1__* func; } ;
struct TYPE_3__ {int (* fini ) (struct nvkm_pmu*) ;} ;


 int FUNC_0 (int *) ;
 struct nvkm_pmu* FUNC_1 (struct nvkm_subdev*) ;
 int FUNC_2 (struct nvkm_pmu*) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_subdev *VAR_0, bool VAR_1)
{
 struct nvkm_pmu *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->func->fini)
  VAR_2->func->fini(VAR_2);

 FUNC_0(&VAR_2->recv.work);
 return 0;
}
