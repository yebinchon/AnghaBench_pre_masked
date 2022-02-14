
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_ram_data {int freq; } ;
struct nvkm_ram {int dummy; } ;
struct nvkm_device {int cfgopt; } ;
struct gk104_ramfuc {int dummy; } ;
struct TYPE_6__ {struct nvkm_ram_data xition; struct nvkm_ram_data* next; TYPE_2__* fb; } ;
struct gk104_ram {TYPE_3__ base; struct gk104_ramfuc fuc; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 struct gk104_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (struct gk104_ram*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct gk104_ramfuc*,int) ;

int
FUNC_4(struct nvkm_ram *VAR_0)
{
 struct gk104_ram *VAR_1 = FUNC_0(VAR_0);
 struct gk104_ramfuc *VAR_2 = &VAR_1->fuc;
 struct nvkm_device *VAR_3 = VAR_1->base.fb->subdev.device;
 struct nvkm_ram_data *VAR_4 = VAR_1->base.next;

 if (!FUNC_2(VAR_3->cfgopt, "NvMemExec", 1)) {
  FUNC_3(VAR_2, 0);
  return (VAR_1->base.next == &VAR_1->base.xition);
 }

 FUNC_1(VAR_1, 1000);
 FUNC_3(VAR_2, 1);
 FUNC_1(VAR_1, VAR_4->freq);

 return (VAR_1->base.next == &VAR_1->base.xition);
}
