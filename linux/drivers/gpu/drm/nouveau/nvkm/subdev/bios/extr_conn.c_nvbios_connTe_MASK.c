
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 && *VAR_1 >= 0x30 && *VAR_2 >= 0x16) {
  u32 VAR_6 = FUNC_2(VAR_0, VAR_5 + 0x14);
  if (VAR_6) {
   *VAR_1 = FUNC_1(VAR_0, VAR_6 + 0);
   *VAR_2 = FUNC_1(VAR_0, VAR_6 + 1);
   *VAR_3 = FUNC_1(VAR_0, VAR_6 + 2);
   *VAR_4 = FUNC_1(VAR_0, VAR_6 + 3);
   return VAR_6;
  }
 }
 return 0x00000000;
}
