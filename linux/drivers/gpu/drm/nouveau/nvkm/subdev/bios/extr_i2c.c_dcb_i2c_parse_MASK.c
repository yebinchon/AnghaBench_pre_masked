
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {int bmp_offset; struct nvkm_subdev subdev; } ;
struct dcb_i2c_entry {int type; int drive; int sense; int share; int auxch; } ;
 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,int,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_subdev*,char*,int) ;

int
FUNC_5(struct nvkm_bios *VAR_1, u8 VAR_2, struct dcb_i2c_entry *VAR_3)
{
 struct nvkm_subdev *VAR_4 = &VAR_1->subdev;
 u8 VAR_5, VAR_6;
 u16 VAR_7 = FUNC_0(VAR_1, VAR_2, &VAR_5, &VAR_6);
 if (VAR_7) {
  if (VAR_5 >= 0x41) {
   u32 VAR_8 = FUNC_3(VAR_1, VAR_7);
   u8 VAR_9 = (VAR_8 >> 0) & 0x1f;
   u8 VAR_10 = (VAR_8 >> 5) & 0x1f;

   if (VAR_9 == 0x1f && VAR_10 == 0x1f)
    VAR_3->type = 128;
   else
    VAR_3->type = 129;
  } else
  if (VAR_5 >= 0x30) {
   VAR_3->type = FUNC_1(VAR_1, VAR_7 + 0x03);
  } else {
   VAR_3->type = FUNC_1(VAR_1, VAR_7 + 0x03) & 0x07;
   if (VAR_3->type == 0x07)
    VAR_3->type = 128;
  }

  VAR_3->drive = 128;
  VAR_3->sense = 128;
  VAR_3->share = 128;
  VAR_3->auxch = 128;

  switch (VAR_3->type) {
  case 133:
   VAR_3->drive = FUNC_1(VAR_1, VAR_7 + 0);
   VAR_3->sense = FUNC_1(VAR_1, VAR_7 + 1);
   return 0;
  case 132:
   VAR_3->drive = FUNC_1(VAR_1, VAR_7 + 1);
   return 0;
  case 130:
   VAR_3->drive = FUNC_1(VAR_1, VAR_7 + 0) & 0x0f;
   if (FUNC_1(VAR_1, VAR_7 + 1) & 0x01)
    VAR_3->share = FUNC_1(VAR_1, VAR_7 + 1) >> 1;
   return 0;
  case 131:
   VAR_3->auxch = FUNC_1(VAR_1, VAR_7 + 0) & 0x0f;
   if (FUNC_1(VAR_1, VAR_7 + 1) & 0x01)
     VAR_3->share = VAR_3->auxch;
   return 0;
  case 129:
   VAR_3->drive = (FUNC_2(VAR_1, VAR_7 + 0) & 0x01f) >> 0;
   if (VAR_3->drive == 0x1f)
    VAR_3->drive = 128;
   VAR_3->auxch = (FUNC_2(VAR_1, VAR_7 + 0) & 0x3e0) >> 5;
   if (VAR_3->auxch == 0x1f)
    VAR_3->auxch = 128;
   VAR_3->share = VAR_3->auxch;
   return 0;
  case 128:
   return 0;
  default:
   FUNC_4(VAR_4, "unknown i2c type %d\n", VAR_3->type);
   VAR_3->type = 128;
   return 0;
  }
 }

 if (VAR_1->bmp_offset && VAR_2 < 2) {



  if (FUNC_1(VAR_1, VAR_1->bmp_offset + 5) < 4)
   VAR_7 = 0x0048;
  else
   VAR_7 = 0x0036 + VAR_1->bmp_offset;

  if (VAR_2 == 0) {
   VAR_3->drive = FUNC_1(VAR_1, VAR_7 + 4);
   if (!VAR_3->drive) VAR_3->drive = 0x3f;
   VAR_3->sense = FUNC_1(VAR_1, VAR_7 + 5);
   if (!VAR_3->sense) VAR_3->sense = 0x3e;
  } else
  if (VAR_2 == 1) {
   VAR_3->drive = FUNC_1(VAR_1, VAR_7 + 6);
   if (!VAR_3->drive) VAR_3->drive = 0x37;
   VAR_3->sense = FUNC_1(VAR_1, VAR_7 + 7);
   if (!VAR_3->sense) VAR_3->sense = 0x36;
  }

  VAR_3->type = 133;
  VAR_3->share = 128;
  return 0;
 }

 return -VAR_0;
}
