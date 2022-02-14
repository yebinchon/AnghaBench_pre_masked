
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {int rammap_ver; int rammap_hdr; int rammap_10_04_02; int rammap_10_04_08; int rammap_11_08_01; int rammap_11_08_0c; int rammap_11_08_10; int rammap_11_09_01ff; int rammap_11_0a_03fe; int rammap_11_0a_0400; int rammap_11_0a_0800; int rammap_11_0b_01f0; int rammap_11_0b_0200; int rammap_11_0b_0400; int rammap_11_0b_0800; int rammap_11_0d; int rammap_11_0e; int rammap_11_0f; int rammap_11_11_0c; void* rammap_max; void* rammap_min; } ;


 int FUNC_0 (struct nvbios_ramcfg*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;
 void* FUNC_3 (struct nvkm_bios*,int) ;
 int FUNC_4 (struct nvkm_bios*,int) ;

u32
FUNC_5(struct nvkm_bios *VAR_0, int VAR_1,
  u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, struct nvbios_ramcfg *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5), VAR_8;
 FUNC_0(VAR_6, 0x00, sizeof(*VAR_6));
 VAR_6->rammap_ver = *VAR_2;
 VAR_6->rammap_hdr = *VAR_3;
 switch (!!VAR_7 * *VAR_2) {
 case 0x10:
  VAR_6->rammap_min = FUNC_3(VAR_0, VAR_7 + 0x00);
  VAR_6->rammap_max = FUNC_3(VAR_0, VAR_7 + 0x02);
  VAR_6->rammap_10_04_02 = (FUNC_2(VAR_0, VAR_7 + 0x04) & 0x02) >> 1;
  VAR_6->rammap_10_04_08 = (FUNC_2(VAR_0, VAR_7 + 0x04) & 0x08) >> 3;
  break;
 case 0x11:
  VAR_6->rammap_min = FUNC_3(VAR_0, VAR_7 + 0x00);
  VAR_6->rammap_max = FUNC_3(VAR_0, VAR_7 + 0x02);
  VAR_6->rammap_11_08_01 = (FUNC_2(VAR_0, VAR_7 + 0x08) & 0x01) >> 0;
  VAR_6->rammap_11_08_0c = (FUNC_2(VAR_0, VAR_7 + 0x08) & 0x0c) >> 2;
  VAR_6->rammap_11_08_10 = (FUNC_2(VAR_0, VAR_7 + 0x08) & 0x10) >> 4;
  VAR_8 = FUNC_4(VAR_0, VAR_7 + 0x09);
  VAR_6->rammap_11_09_01ff = (VAR_8 & 0x000001ff) >> 0;
  VAR_6->rammap_11_0a_03fe = (VAR_8 & 0x0003fe00) >> 9;
  VAR_6->rammap_11_0a_0400 = (VAR_8 & 0x00040000) >> 18;
  VAR_6->rammap_11_0a_0800 = (VAR_8 & 0x00080000) >> 19;
  VAR_6->rammap_11_0b_01f0 = (VAR_8 & 0x01f00000) >> 20;
  VAR_6->rammap_11_0b_0200 = (VAR_8 & 0x02000000) >> 25;
  VAR_6->rammap_11_0b_0400 = (VAR_8 & 0x04000000) >> 26;
  VAR_6->rammap_11_0b_0800 = (VAR_8 & 0x08000000) >> 27;
  VAR_6->rammap_11_0d = FUNC_2(VAR_0, VAR_7 + 0x0d);
  VAR_6->rammap_11_0e = FUNC_2(VAR_0, VAR_7 + 0x0e);
  VAR_6->rammap_11_0f = FUNC_2(VAR_0, VAR_7 + 0x0f);
  VAR_6->rammap_11_11_0c = (FUNC_2(VAR_0, VAR_7 + 0x11) & 0x0c) >> 2;
  break;
 default:
  VAR_7 = 0;
  break;
 }
 return VAR_7;
}
