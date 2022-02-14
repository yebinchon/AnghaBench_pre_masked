
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pmu {TYPE_1__ subdev; } ;
struct nvkm_device {int chipset; int cfgopt; int fuse; } ;


 int FUNC_0 (struct nvkm_device*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct nvkm_device*,int,int,int) ;
 int FUNC_5 (struct nvkm_device*,int) ;

__attribute__((used)) static void
FUNC_6(struct nvkm_pmu *VAR_0, bool VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;

 if (!(FUNC_3(VAR_2->fuse, 0x31c) & 0x00000001))
  return;

 FUNC_4(VAR_2, 0x000200, 0x00001000, 0x00000000);
 FUNC_5(VAR_2, 0x000200);
 FUNC_4(VAR_2, 0x000200, 0x08000000, 0x08000000);
 FUNC_1(50);

 FUNC_4(VAR_2, 0x10a78c, 0x00000002, 0x00000002);
 FUNC_4(VAR_2, 0x10a78c, 0x00000001, 0x00000001);
 FUNC_4(VAR_2, 0x10a78c, 0x00000001, 0x00000000);

 FUNC_4(VAR_2, 0x020004, 0xc0000000, VAR_1 ? 0xc0000000 : 0x40000000);
 FUNC_1(50);

 FUNC_4(VAR_2, 0x10a78c, 0x00000002, 0x00000000);
 FUNC_4(VAR_2, 0x10a78c, 0x00000001, 0x00000001);
 FUNC_4(VAR_2, 0x10a78c, 0x00000001, 0x00000000);

 FUNC_4(VAR_2, 0x000200, 0x08000000, 0x00000000);
 FUNC_4(VAR_2, 0x000200, 0x00001000, 0x00001000);
 FUNC_5(VAR_2, 0x000200);

 if (FUNC_2(VAR_2->cfgopt, "War00C800_0", 1)) {
  switch (VAR_2->chipset) {
  case 0xe4:
   FUNC_0(VAR_2, 0x04000000);
   FUNC_0(VAR_2, 0x06000000);
   FUNC_0(VAR_2, 0x0c000000);
   FUNC_0(VAR_2, 0x0e000000);
   break;
  case 0xe6:
   FUNC_0(VAR_2, 0x02000000);
   FUNC_0(VAR_2, 0x04000000);
   FUNC_0(VAR_2, 0x0a000000);
   break;
  case 0xe7:
   FUNC_0(VAR_2, 0x02000000);
   break;
  default:
   break;
  }
 }
}
