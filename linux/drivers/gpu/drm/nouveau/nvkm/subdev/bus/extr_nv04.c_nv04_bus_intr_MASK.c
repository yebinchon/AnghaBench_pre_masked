
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_gpio {int subdev; } ;
struct nvkm_device {struct nvkm_gpio* gpio; } ;
struct nvkm_bus {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,...) ;
 int FUNC_1 (struct nvkm_device*,int,int,int) ;
 int FUNC_2 (struct nvkm_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nvkm_device*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct nvkm_bus *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_2(VAR_2, 0x001100) & FUNC_2(VAR_2, 0x001140);

 if (VAR_3 & 0x00000001) {
  FUNC_0(VAR_1, "BUS ERROR\n");
  VAR_3 &= ~0x00000001;
  FUNC_4(VAR_2, 0x001100, 0x00000001);
 }

 if (VAR_3 & 0x00000110) {
  struct nvkm_gpio *VAR_4 = VAR_2->gpio;
  if (VAR_4)
   FUNC_3(&VAR_4->subdev);
  VAR_3 &= ~0x00000110;
  FUNC_4(VAR_2, 0x001100, 0x00000110);
 }

 if (VAR_3) {
  FUNC_0(VAR_1, "intr %08x\n", VAR_3);
  FUNC_1(VAR_2, 0x001140, VAR_3, 0x00000000);
 }
}
