
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_pmu_func {int dummy; } ;
struct TYPE_2__ {int wait; int work; } ;
struct nvkm_pmu {TYPE_1__ recv; struct nvkm_pmu_func const* func; int subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct nvkm_device*,int,int *) ;

int
FUNC_3(const struct nvkm_pmu_func *VAR_2, struct nvkm_device *VAR_3,
       int VAR_4, struct nvkm_pmu *VAR_5)
{
 FUNC_2(&VAR_0, VAR_3, VAR_4, &VAR_5->subdev);
 VAR_5->func = VAR_2;
 FUNC_0(&VAR_5->recv.work, VAR_1);
 FUNC_1(&VAR_5->recv.wait);
 return 0;
}
