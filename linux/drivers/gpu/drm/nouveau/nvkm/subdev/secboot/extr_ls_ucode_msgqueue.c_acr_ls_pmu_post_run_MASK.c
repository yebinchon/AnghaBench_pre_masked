
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {struct nvkm_device* device; } ;
struct nvkm_secboot {TYPE_2__ subdev; } ;
struct nvkm_pmu {TYPE_3__* falcon; int queue; } ;
struct nvkm_device {struct nvkm_pmu* pmu; } ;
struct nvkm_acr {size_t boot_falcon; } ;
struct TYPE_4__ {scalar_t__ limit; } ;
struct TYPE_6__ {TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int * VAR_1 ;

int
FUNC_2(const struct nvkm_acr *VAR_2, const struct nvkm_secboot *VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_3->subdev.device;
 struct nvkm_pmu *VAR_5 = VAR_4->pmu;
 u32 VAR_6 = VAR_5->falcon->data.limit - VAR_0;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5->queue, VAR_5->falcon, VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_3->subdev, "%s started\n",
     VAR_1[VAR_2->boot_falcon]);

 return 0;
}
