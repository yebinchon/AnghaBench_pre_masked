
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct TYPE_2__ {struct nvkm_subdev subdev; } ;
struct nvkm_disp {TYPE_1__ engine; } ;
struct nvkm_device {int chipset; } ;


 int FUNC_0 (struct nvkm_disp*,int) ;
 int FUNC_1 (struct nvkm_subdev*,char*,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_disp *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->engine.subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x600100);
 u32 VAR_4 = FUNC_2(VAR_2, 0x602100);
 u32 VAR_5;

 if (VAR_3 & 0x00000001) {
  FUNC_0(VAR_0, 0);
  FUNC_3(VAR_2, 0x600100, 0x00000001);
 }

 if (VAR_4 & 0x00000001) {
  FUNC_0(VAR_0, 1);
  FUNC_3(VAR_2, 0x602100, 0x00000001);
 }

 if (VAR_2->chipset >= 0x10 && VAR_2->chipset <= 0x40) {
  VAR_5 = FUNC_2(VAR_2, 0x8100);
  if (VAR_5 & ~0x11)
   FUNC_1(VAR_1, "PVIDEO intr: %08x\n", VAR_5);
  FUNC_3(VAR_2, 0x8100, VAR_5);
 }
}
