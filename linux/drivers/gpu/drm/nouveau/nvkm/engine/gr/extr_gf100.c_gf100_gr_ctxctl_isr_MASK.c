
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_subdev subdev; } ;
struct TYPE_4__ {TYPE_1__ engine; } ;
struct gf100_gr {int firmware; TYPE_2__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct gf100_gr*) ;
 int FUNC_1 (struct nvkm_subdev*,char*,...) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct gf100_gr *VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_1->base.engine.subdev;
 struct nvkm_device *VAR_3 = VAR_2->device;
 u32 VAR_4 = FUNC_2(VAR_3, 0x409c18);

 if (!VAR_1->firmware && (VAR_4 & 0x00000001)) {
  u32 VAR_5 = FUNC_2(VAR_3, 0x409814);
  if (VAR_5 == VAR_0) {
   u32 VAR_6 = FUNC_2(VAR_3, 0x409808);
   u32 VAR_7 = FUNC_2(VAR_3, 0x40980c);
   u32 VAR_8 = (VAR_7 & 0x00070000) >> 16;
   u32 VAR_9 = (VAR_7 & 0x00003ffc);
   u32 VAR_10 = FUNC_2(VAR_3, 0x409810);

   FUNC_1(VAR_2, "FECS MTHD subc %d class %04x "
        "mthd %04x data %08x\n",
       VAR_8, VAR_6, VAR_9, VAR_10);
  } else {
   FUNC_1(VAR_2, "FECS ucode error %d\n", VAR_5);
  }
  FUNC_3(VAR_3, 0x409c20, 0x00000001);
  VAR_4 &= ~0x00000001;
 }

 if (!VAR_1->firmware && (VAR_4 & 0x00080000)) {
  FUNC_1(VAR_2, "FECS watchdog timeout\n");
  FUNC_0(VAR_1);
  FUNC_3(VAR_3, 0x409c20, 0x00080000);
  VAR_4 &= ~0x00080000;
 }

 if (VAR_4) {
  FUNC_1(VAR_2, "FECS %08x\n", VAR_4);
  FUNC_0(VAR_1);
  FUNC_3(VAR_3, 0x409c20, VAR_4);
 }
}
