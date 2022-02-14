
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pmu {int queue; int subdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_pmu *VAR_0)
{
 if (!VAR_0->queue) {
  FUNC_1(&VAR_0->subdev,
     "recv function called while no firmware set!\n");
  return;
 }

 FUNC_0(VAR_0->queue);
}
