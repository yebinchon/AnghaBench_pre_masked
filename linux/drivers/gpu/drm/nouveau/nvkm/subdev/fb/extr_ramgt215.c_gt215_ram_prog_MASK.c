
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_ram {int dummy; } ;
struct nvkm_device {int cfgopt; } ;
struct gt215_ramfuc {int dummy; } ;
struct TYPE_6__ {TYPE_2__* fb; } ;
struct gt215_ram {TYPE_3__ base; struct gt215_ramfuc fuc; } ;
struct TYPE_4__ {struct nvkm_device* device; } ;
struct TYPE_5__ {TYPE_1__ subdev; } ;


 struct gt215_ram* FUNC_0 (struct nvkm_ram*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int,int) ;
 int FUNC_3 (struct gt215_ramfuc*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_ram *VAR_0)
{
 struct gt215_ram *VAR_1 = FUNC_0(VAR_0);
 struct gt215_ramfuc *VAR_2 = &VAR_1->fuc;
 struct nvkm_device *VAR_3 = VAR_1->base.fb->subdev.device;
 bool VAR_4 = FUNC_1(VAR_3->cfgopt, "NvMemExec", 1);

 if (VAR_4) {
  FUNC_2(VAR_3, 0x001534, 0x2, 0x2);

  FUNC_3(VAR_2, 1);


  FUNC_2(VAR_3, 0x002504, 0x1, 0x0);
  FUNC_2(VAR_3, 0x001534, 0x2, 0x0);

  FUNC_2(VAR_3, 0x616308, 0x10, 0x10);
  FUNC_2(VAR_3, 0x616b08, 0x10, 0x10);
 } else {
  FUNC_3(VAR_2, 0);
 }
 return 0;
}
