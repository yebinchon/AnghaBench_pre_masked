
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ramfuc {struct nvkm_fb* fb; int sequence; int memx; } ;
struct TYPE_4__ {TYPE_1__* device; } ;
struct nvkm_fb {TYPE_2__ subdev; } ;
struct TYPE_3__ {int pmu; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int
FUNC_1(struct ramfuc *VAR_0, struct nvkm_fb *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->subdev.device->pmu, &VAR_0->memx);
 if (VAR_2)
  return VAR_2;

 VAR_0->sequence++;
 VAR_0->fb = VAR_1;
 return 0;
}
