
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {struct nvkm_device* device; } ;
struct nvkm_device {scalar_t__ card_type; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int,char*,int) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_subdev*,char*) ;
 int FUNC_5 (struct nvkm_subdev*,char*,...) ;

u16
FUNC_6(struct nvkm_bios *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_1->subdev;
 struct nvkm_device *VAR_7 = VAR_6->device;
 u16 VAR_8 = 0x0000;

 if (VAR_7->card_type > VAR_0)
  VAR_8 = FUNC_2(VAR_1, 0x36);
 if (!VAR_8) {
  FUNC_5(VAR_6, "DCB table not found\n");
  return VAR_8;
 }

 *VAR_2 = FUNC_1(VAR_1, VAR_8);

 if (*VAR_2 >= 0x42) {
  FUNC_5(VAR_6, "DCB version 0x%02x unknown\n", *VAR_2);
  return 0x0000;
 } else
 if (*VAR_2 >= 0x30) {
  if (FUNC_3(VAR_1, VAR_8 + 6) == 0x4edcbdcb) {
   *VAR_3 = FUNC_1(VAR_1, VAR_8 + 1);
   *VAR_4 = FUNC_1(VAR_1, VAR_8 + 2);
   *VAR_5 = FUNC_1(VAR_1, VAR_8 + 3);
   return VAR_8;
  }
 } else
 if (*VAR_2 >= 0x20) {
  if (FUNC_3(VAR_1, VAR_8 + 4) == 0x4edcbdcb) {
   u16 VAR_9 = FUNC_2(VAR_1, VAR_8 + 2);
   *VAR_3 = 8;
   *VAR_4 = (VAR_9 - VAR_8) / 8;
   *VAR_5 = 8;
   return VAR_8;
  }
 } else
 if (*VAR_2 >= 0x15) {
  if (!FUNC_0(VAR_1, VAR_8 - 7, "DEV_REC", 7)) {
   u16 VAR_10 = FUNC_2(VAR_1, VAR_8 + 2);
   *VAR_3 = 4;
   *VAR_4 = (VAR_10 - VAR_8) / 10;
   *VAR_5 = 10;
   return VAR_8;
  }
 } else {
  FUNC_4(VAR_6, "DCB contains no useful data\n");
  return 0x0000;
 }

 FUNC_5(VAR_6, "DCB header validation failed\n");
 return 0x0000;
}
