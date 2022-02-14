
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_subdev {int dummy; } ;
struct nvkm_pmu {int falcon; int subdev; } ;


 int FUNC_0 (int *,char*,int,int *) ;
 struct nvkm_pmu* FUNC_1 (struct nvkm_subdev*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_pmu *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->subdev, "PMU", 0x10a000, &VAR_1->falcon);
}
