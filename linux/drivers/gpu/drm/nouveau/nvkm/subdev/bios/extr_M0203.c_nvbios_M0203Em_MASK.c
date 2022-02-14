
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;
struct nvbios_M0203T {int type; } ;
struct nvbios_M0203E {int strap; } ;



 int FUNC_0 (struct nvkm_bios*,int,int*,int*,struct nvbios_M0203E*) ;
 int FUNC_1 (struct nvkm_bios*,int*,int*,int*,int*,struct nvbios_M0203T*) ;
 int FUNC_2 (struct nvkm_subdev*,char*,...) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u8 VAR_1, u8 *VAR_2, u8 *VAR_3,
        struct nvbios_M0203E *VAR_4)
{
 struct nvkm_subdev *VAR_5 = &VAR_0->subdev;
 struct nvbios_M0203T VAR_6;
 u8 VAR_7, VAR_8, VAR_9 = 0xff;
 u32 VAR_10;

 if (!FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_7, &VAR_8, &VAR_6)) {
  FUNC_2(VAR_5, "M0203T not found\n");
  return 0x00000000;
 }

 while ((VAR_10 = FUNC_0(VAR_0, ++VAR_9, VAR_2, VAR_3, VAR_4))) {
  switch (VAR_6.type) {
  case 128:
   if (VAR_4->strap != VAR_1)
    continue;
   return VAR_10;
  default:
   FUNC_2(VAR_5, "M0203T type %02x\n", VAR_6.type);
   return 0x00000000;
  }
 }

 return VAR_10;
}
