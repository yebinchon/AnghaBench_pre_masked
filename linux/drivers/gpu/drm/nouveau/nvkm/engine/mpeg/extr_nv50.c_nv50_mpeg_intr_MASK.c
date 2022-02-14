
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_engine {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,char*,int,int,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_device*,int,int) ;

void
FUNC_3(struct nvkm_engine *VAR_0)
{
 struct nvkm_subdev *VAR_1 = &VAR_0->subdev;
 struct nvkm_device *VAR_2 = VAR_1->device;
 u32 VAR_3 = FUNC_1(VAR_2, 0x00b100);
 u32 VAR_4 = FUNC_1(VAR_2, 0x00b230);
 u32 VAR_5 = FUNC_1(VAR_2, 0x00b234);
 u32 VAR_6 = FUNC_1(VAR_2, 0x00b238);
 u32 VAR_7 = VAR_3;

 if (VAR_3 & 0x01000000) {

  if (VAR_4 == 0x00000020 && VAR_5 == 0x0000) {
   FUNC_2(VAR_2, 0x00b308, 0x00000100);
   VAR_7 &= ~0x01000000;
  }
 }

 if (VAR_7) {
  FUNC_0(VAR_1, "%08x %08x %08x %08x\n",
     VAR_3, VAR_4, VAR_5, VAR_6);
 }

 FUNC_2(VAR_2, 0x00b100, VAR_3);
 FUNC_2(VAR_2, 0x00b230, 0x00000001);
}
