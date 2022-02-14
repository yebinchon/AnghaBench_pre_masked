
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_M0203E {int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct nvkm_bios*,int const,int*,int*,struct nvbios_M0203E*) ;
 int FUNC_1 (struct nvkm_device*,int) ;
 int FUNC_2 (struct nvkm_subdev*,char*,...) ;

int
FUNC_3(struct nvkm_bios *VAR_8)
{
 struct nvkm_subdev *VAR_9 = &VAR_8->subdev;
 struct nvkm_device *VAR_10 = VAR_9->device;
 const u8 VAR_11 = (FUNC_1(VAR_10, 0x101000) & 0x0000003c) >> 2;
 struct nvbios_M0203E VAR_12;
 u8 VAR_13, VAR_14;

 if (FUNC_0(VAR_8, VAR_11, &VAR_13, &VAR_14, &VAR_12)) {
  switch (VAR_12.type) {
  case 134 : return VAR_0;
  case 133 : return VAR_1;
  case 132 : return VAR_2;
  case 131 : return VAR_3;
  case 130: return VAR_4;
  case 129 : return VAR_5;
  case 128 : return VAR_6;
  default:
   FUNC_2(VAR_9, "M0203E type %02x\n", VAR_12.type);
   return VAR_7;
  }
 }

 FUNC_2(VAR_9, "M0203E not matched!\n");
 return VAR_7;
}
