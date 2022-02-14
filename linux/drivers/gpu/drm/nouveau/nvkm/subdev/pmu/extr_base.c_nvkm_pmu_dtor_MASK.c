
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_pmu {int falcon; int queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (struct nvkm_subdev*) ;

__attribute__((used)) static void *
FUNC_3(struct nvkm_subdev *VAR_0)
{
 struct nvkm_pmu *VAR_1 = FUNC_2(VAR_0);
 FUNC_1(&VAR_1->queue);
 FUNC_0(&VAR_1->falcon);
 return FUNC_2(VAR_0);
}
