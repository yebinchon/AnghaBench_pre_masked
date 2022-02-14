
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_therm {int subdev; } ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {struct nvkm_therm* therm; } ;
struct nvkm_bus {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,...) ;
 int FUNC_1 (struct nvkm_device*,int,int,int ) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

void
FUNC_5(struct nvkm_bus *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x001100) & FUNC_2(VAR_2, 0x001140);

 if (VAR_3 & 0x00000008) {
  u32 VAR_4 = FUNC_2(VAR_2, 0x009084);
  u32 VAR_5 = FUNC_2(VAR_2, 0x009088);

  FUNC_0(VAR_1, "MMIO %s of %08x FAULT at %06x\n",
      (VAR_4 & 0x00000002) ? "write" : "read", VAR_5,
      (VAR_4 & 0x00fffffc));

  VAR_3 &= ~0x00000008;
  FUNC_4(VAR_2, 0x001100, 0x00000008);
 }

 if (VAR_3 & 0x00010000) {
  struct nvkm_therm *VAR_6 = VAR_2->therm;
  if (VAR_6)
   FUNC_3(&VAR_6->subdev);
  VAR_3 &= ~0x00010000;
  FUNC_4(VAR_2, 0x001100, 0x00010000);
 }

 if (VAR_3) {
  FUNC_0(VAR_1, "intr %08x\n", VAR_3);
  FUNC_1(VAR_2, 0x001140, VAR_3, 0);
 }
}
