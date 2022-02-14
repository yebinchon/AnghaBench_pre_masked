
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* device; } ;
struct nvkm_secboot {TYPE_3__ subdev; } ;
struct nvkm_pmu {int queue; int falcon; } ;
struct TYPE_5__ {int app_version; } ;
struct ls_ucode_img {TYPE_2__ ucode_desc; } ;
struct TYPE_4__ {struct nvkm_pmu* pmu; } ;


 int FUNC_0 (TYPE_3__*,char*,int,struct ls_ucode_img*) ;
 int FUNC_1 (int ,int ,struct nvkm_secboot const*,int *) ;

int
FUNC_2(const struct nvkm_secboot *VAR_0, int VAR_1,
        struct ls_ucode_img *VAR_2)
{
 struct nvkm_pmu *VAR_3 = VAR_0->subdev.device->pmu;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_0->subdev, "pmu", VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_1(VAR_2->ucode_desc.app_version, VAR_3->falcon,
    VAR_0, &VAR_3->queue);
 if (VAR_4)
  return VAR_4;

 return 0;
}
