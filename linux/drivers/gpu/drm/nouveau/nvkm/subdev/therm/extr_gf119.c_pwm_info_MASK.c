
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_therm {struct nvkm_subdev subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_subdev*,char*,int,int) ;
 int FUNC_1 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_therm *VAR_1, int VAR_2)
{
 struct nvkm_subdev *VAR_3 = &VAR_1->subdev;
 struct nvkm_device *VAR_4 = VAR_3->device;
 u32 VAR_5 = FUNC_1(VAR_4, 0x00d610 + (VAR_2 * 0x04));

 switch (VAR_5 & 0x000000c0) {
 case 0x00000000:
 case 0x00000040:
  switch (VAR_5 & 0x0000001f) {
  case 0x00: return 2;
  case 0x19: return 1;
  case 0x1c: return 0;
  case 0x1e: return 2;
  default:
   break;
  }
 default:
  break;
 }

 FUNC_0(VAR_3, "GPIO %d unknown PWM: %08x\n", VAR_2, VAR_5);
 return -VAR_0;
}
