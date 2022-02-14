
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_pmu {TYPE_2__ subdev; int falcon; } ;
struct gk20a_pmu {int alarm; } ;
struct TYPE_3__ {int timer; } ;


 struct gk20a_pmu* FUNC_0 (struct nvkm_pmu*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct nvkm_pmu *VAR_0)
{
 struct gk20a_pmu *VAR_1 = FUNC_0(VAR_0);
 FUNC_2(VAR_0->subdev.device->timer, 0, &VAR_1->alarm);

 FUNC_1(VAR_0->falcon, &VAR_0->subdev);
}
