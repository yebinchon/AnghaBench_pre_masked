
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_subdev*,int) ;
 int FUNC_1 (struct nvkm_subdev*,int) ;
 int FUNC_2 (struct nvkm_subdev*,int) ;
 int FUNC_3 (struct nvkm_device*,int) ;

void
FUNC_4(struct nvkm_subdev *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->device;
 u32 VAR_2 = FUNC_3(VAR_1, 0x120058);
 u32 VAR_3 = FUNC_3(VAR_1, 0x12005c);
 u32 VAR_4 = FUNC_3(VAR_1, 0x120070);
 u32 VAR_5 = FUNC_3(VAR_1, 0x120074);
 u32 VAR_6 = FUNC_3(VAR_1, 0x120078);
 u32 VAR_7;

 for (VAR_7 = 0; (VAR_2 & 0x0000ff00) && VAR_7 < VAR_4; VAR_7++) {
  u32 VAR_8 = 0x00000100 << VAR_7;
  if (VAR_2 & VAR_8) {
   FUNC_1(VAR_0, VAR_7);
   VAR_2 &= ~VAR_8;
  }
 }

 for (VAR_7 = 0; (VAR_2 & 0xffff0000) && VAR_7 < VAR_5; VAR_7++) {
  u32 VAR_9 = 0x00010000 << VAR_7;
  if (VAR_2 & VAR_9) {
   FUNC_2(VAR_0, VAR_7);
   VAR_2 &= ~VAR_9;
  }
 }

 for (VAR_7 = 0; VAR_3 && VAR_7 < VAR_6; VAR_7++) {
  u32 VAR_10 = 0x00000001 << VAR_7;
  if (VAR_3 & VAR_10) {
   FUNC_0(VAR_0, VAR_7);
   VAR_3 &= ~VAR_10;
  }
 }
}
