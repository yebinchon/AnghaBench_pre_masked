
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_bus {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,...) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct nvkm_bus *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x001100) & FUNC_2(VAR_2, 0x001140);

 if (VAR_3 & 0x0000000e) {
  u32 VAR_4 = FUNC_2(VAR_2, 0x009084);
  u32 VAR_5 = FUNC_2(VAR_2, 0x009088);

  FUNC_0(VAR_1,
      "MMIO %s of %08x FAULT at %06x [ %s%s%s]\n",
      (VAR_4 & 0x00000002) ? "write" : "read", VAR_5,
      (VAR_4 & 0x00fffffc),
      (VAR_3 & 0x00000002) ? "!ENGINE " : "",
      (VAR_3 & 0x00000004) ? "IBUS " : "",
      (VAR_3 & 0x00000008) ? "TIMEOUT " : "");

  FUNC_3(VAR_2, 0x009084, 0x00000000);
  FUNC_3(VAR_2, 0x001100, (VAR_3 & 0x0000000e));
  VAR_3 &= ~0x0000000e;
 }

 if (VAR_3) {
  FUNC_0(VAR_1, "intr %08x\n", VAR_3);
  FUNC_1(VAR_2, 0x001140, VAR_3, 0x00000000);
 }
}
