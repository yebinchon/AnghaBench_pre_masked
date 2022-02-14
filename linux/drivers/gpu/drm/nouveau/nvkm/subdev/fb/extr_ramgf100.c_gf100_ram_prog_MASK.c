
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_ram {int dummy; } ;
struct nvkm_device {int cfgopt; } ;
struct TYPE_6__ {TYPE_2__* fb; } ;
struct gf100_ram {int fuc; TYPE_3__ base; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 struct gf100_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(struct nvkm_ram *VAR_0)
{
 struct gf100_ram *VAR_1 = FUNC_0(VAR_0);
 struct nvkm_device *VAR_2 = VAR_1->base.fb->subdev.device;
 FUNC_2(&VAR_1->fuc, FUNC_1(VAR_2->cfgopt, "NvMemExec", 1));
 return 0;
}
