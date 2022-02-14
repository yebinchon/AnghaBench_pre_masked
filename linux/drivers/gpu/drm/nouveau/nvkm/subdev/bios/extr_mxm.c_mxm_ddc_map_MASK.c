
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_subdev {int dummy; } ;
struct nvkm_bios {struct nvkm_subdev subdev; } ;


 int FUNC_0 (struct nvkm_bios*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 int FUNC_3 (struct nvkm_subdev*,char*,int) ;

u8
FUNC_4(struct nvkm_bios *VAR_0, u8 VAR_1)
{
 struct nvkm_subdev *VAR_2 = &VAR_0->subdev;
 u8 VAR_3, VAR_4;
 u16 VAR_5 = FUNC_0(VAR_0, &VAR_3, &VAR_4);
 if (VAR_5 && VAR_4 >= 8) {
  u16 VAR_6 = FUNC_2(VAR_0, VAR_5 + 6);
  if (VAR_6) {
   VAR_3 = FUNC_1(VAR_0, VAR_6);
   if (VAR_3 == 0x10) {
    if (VAR_1 < FUNC_1(VAR_0, VAR_6 + 3)) {
     VAR_6 += FUNC_1(VAR_0, VAR_6 + 1);
     VAR_6 += VAR_1;
     return FUNC_1(VAR_0, VAR_6);
    }

    return 0x00;
   }

   FUNC_3(VAR_2, "unknown ddc map v%02x\n", VAR_3);
  }
 }


 return (VAR_1 << 4) | VAR_1;
}
