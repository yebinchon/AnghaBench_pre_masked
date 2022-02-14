
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct nvkm_bios {TYPE_1__ version; struct nvkm_subdev subdev; } ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_0 (struct nvkm_bios*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,...) ;

u8
FUNC_4(struct nvkm_bios *VAR_4, u8 VAR_5)
{
 struct nvkm_subdev *VAR_6 = &VAR_4->subdev;
 u8 VAR_7, VAR_8;
 u16 VAR_9 = FUNC_0(VAR_4, &VAR_7, &VAR_8);
 if (VAR_9 && VAR_8 >= 6) {
  u16 VAR_10 = FUNC_2(VAR_4, VAR_9 + 4);
  if (VAR_10) {
   VAR_7 = FUNC_1(VAR_4, VAR_10);
   if (VAR_7 == 0x10 || VAR_7 == 0x11) {
    if (VAR_5 < FUNC_1(VAR_4, VAR_10 + 3)) {
     VAR_10 += FUNC_1(VAR_4, VAR_10 + 1);
     VAR_10 += VAR_5;
     return FUNC_1(VAR_4, VAR_10);
    }

    return 0x00;
   }

   FUNC_3(VAR_6, "unknown sor map v%02x\n", VAR_7);
  }
 }

 if (VAR_4->version.chip == 0x84 || VAR_4->version.chip == 0x86)
  return VAR_0[VAR_5];
 if (VAR_4->version.chip == 0x92)
  return VAR_1[VAR_5];
 if (VAR_4->version.chip == 0x94 || VAR_4->version.chip == 0x96)
  return VAR_2[VAR_5];
 if (VAR_4->version.chip == 0x98)
  return VAR_3[VAR_5];

 FUNC_3(VAR_6, "missing sor map\n");
 return 0x00;
}
