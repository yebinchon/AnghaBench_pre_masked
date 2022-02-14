
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nvkm_bios {int dummy; } ;


 int FUNC_0 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,int) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u16
FUNC_3(struct nvkm_bios *VAR_0, u8 VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5)
{
 u16 VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 && VAR_1 < *VAR_4) {
  u16 VAR_7 = FUNC_2(VAR_0, VAR_6 + *VAR_3 + (VAR_1 * *VAR_5));
  if (VAR_7) {
   *VAR_2 = FUNC_1(VAR_0, VAR_6 + 0x00);
   *VAR_3 = FUNC_1(VAR_0, VAR_6 + 0x01);
   *VAR_4 = FUNC_1(VAR_0, VAR_6 + 0x02);
   *VAR_5 = FUNC_1(VAR_0, VAR_6 + 0x03);
   return VAR_7;
  }
 }
 return 0x0000;
}
