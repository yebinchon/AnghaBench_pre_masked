
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {int index; struct nvkm_device* device; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_engine*,int const) ;
 int FUNC_1 (struct nvkm_device*,int const) ;
 int FUNC_2 (struct nvkm_subdev*,char*,...) ;
 int FUNC_3 (struct nvkm_device*,int const,int) ;

void
FUNC_4(struct nvkm_engine *VAR_1)
{
 const u32 VAR_2 = (VAR_1->subdev.index - VAR_0) * 0x1000;
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_1(VAR_4, 0x104904 + VAR_2);
 u32 VAR_6 = FUNC_1(VAR_4, 0x104908 + VAR_2) & VAR_5;
 if (VAR_6 & 0x00000001) {
  FUNC_2(VAR_3, "BLOCKPIPE\n");
  FUNC_3(VAR_4, 0x104908 + VAR_2, 0x00000001);
  VAR_6 &= ~0x00000001;
 }
 if (VAR_6 & 0x00000002) {
  FUNC_2(VAR_3, "NONBLOCKPIPE\n");
  FUNC_3(VAR_4, 0x104908 + VAR_2, 0x00000002);
  VAR_6 &= ~0x00000002;
 }
 if (VAR_6 & 0x00000004) {
  FUNC_0(VAR_1, VAR_2);
  FUNC_3(VAR_4, 0x104908 + VAR_2, 0x00000004);
  VAR_6 &= ~0x00000004;
 }
 if (VAR_6) {
  FUNC_2(VAR_3, "intr %08x\n", VAR_6);
  FUNC_3(VAR_4, 0x104908 + VAR_2, VAR_6);
 }
}
