
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_dpcfg {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,scalar_t__,int,int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__,int,int*,int*,int*,int*,struct nvbios_dpcfg*) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u16 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
     u8 *VAR_5, u8 *VAR_6, u8 *VAR_7, u8 *VAR_8,
     struct nvbios_dpcfg *VAR_9)
{
 u8 VAR_10 = 0xff;
 u16 VAR_11;

 if (*VAR_5 >= 0x30) {
  static const u8 VAR_12[] = { 0, 4, 7, 9 };
  VAR_10 = (VAR_2 * 10) + VAR_12[VAR_3] + VAR_4;
  if (*VAR_5 >= 0x40 && *VAR_5 <= 0x41 && *VAR_6 >= 0x12)
   VAR_10 += FUNC_2(VAR_0, VAR_1 + 0x11) * 40;
  else
  if (*VAR_5 >= 0x42)
   VAR_10 += FUNC_2(VAR_0, VAR_1 + 0x11) * 10;
 } else {
  while ((VAR_11 = FUNC_0(VAR_0, VAR_1, ++VAR_10,
        VAR_5, VAR_6, VAR_7, VAR_8))) {
   if (FUNC_2(VAR_0, VAR_11 + 0x00) == VAR_3 &&
       FUNC_2(VAR_0, VAR_11 + 0x01) == VAR_4)
    break;
  }
 }

 return FUNC_1(VAR_0, VAR_1, VAR_10, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
