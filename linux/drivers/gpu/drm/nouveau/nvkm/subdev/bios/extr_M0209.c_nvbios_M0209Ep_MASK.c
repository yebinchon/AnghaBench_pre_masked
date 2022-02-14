
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0209E {int v00_40; int bits; int modulo; int v02_40; int v02_07; int v03; } ;


 int FUNC_0 (struct nvbios_M0209E*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, struct nvbios_M0209E *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_6, 0x00, sizeof(*VAR_6));
 switch (!!VAR_7 * *VAR_2) {
 case 0x10:
  VAR_6->v00_40 = (FUNC_2(VAR_0, VAR_7 + 0x00) & 0x40) >> 6;
  VAR_6->bits = FUNC_2(VAR_0, VAR_7 + 0x00) & 0x3f;
  VAR_6->modulo = FUNC_2(VAR_0, VAR_7 + 0x01);
  VAR_6->v02_40 = (FUNC_2(VAR_0, VAR_7 + 0x02) & 0x40) >> 6;
  VAR_6->v02_07 = FUNC_2(VAR_0, VAR_7 + 0x02) & 0x07;
  VAR_6->v03 = FUNC_2(VAR_0, VAR_7 + 0x03);
  return VAR_7;
 default:
  break;
 }
 return 0x00000000;
}
