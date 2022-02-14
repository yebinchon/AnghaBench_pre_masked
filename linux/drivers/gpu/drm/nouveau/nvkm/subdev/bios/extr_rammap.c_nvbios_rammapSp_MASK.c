
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {int ramcfg_ver; int ramcfg_hdr; int ramcfg_timing; int ramcfg_10_02_01; int ramcfg_10_02_02; int ramcfg_10_02_04; int ramcfg_10_02_08; int ramcfg_10_02_10; int ramcfg_10_02_20; int ramcfg_DLLoff; int ramcfg_10_03_0f; int ramcfg_10_04_01; int ramcfg_FBVDDQ; int ramcfg_10_05; int ramcfg_10_06; int ramcfg_10_07; int ramcfg_10_08; int ramcfg_10_09_0f; int ramcfg_10_09_f0; int ramcfg_11_01_01; int ramcfg_11_01_02; int ramcfg_11_01_04; int ramcfg_11_01_08; int ramcfg_11_01_10; int ramcfg_11_01_40; int ramcfg_11_01_80; int ramcfg_11_02_03; int ramcfg_11_02_04; int ramcfg_11_02_08; int ramcfg_11_02_10; int ramcfg_11_02_40; int ramcfg_11_02_80; int ramcfg_11_03_0f; int ramcfg_11_03_30; int ramcfg_11_03_c0; int ramcfg_11_03_f0; int ramcfg_11_04; int ramcfg_11_06; int ramcfg_11_07_02; int ramcfg_11_07_04; int ramcfg_11_07_08; int ramcfg_11_07_10; int ramcfg_11_07_40; int ramcfg_11_07_80; int ramcfg_11_08_01; int ramcfg_11_08_02; int ramcfg_11_08_04; int ramcfg_11_08_08; int ramcfg_11_08_10; int ramcfg_11_08_20; int ramcfg_11_09; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,scalar_t__,int,int,int,int,int,int*,int*) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_2(struct nvkm_bios *VAR_0, u32 VAR_1,
  u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5, int VAR_6,
  u8 *VAR_7, u8 *VAR_8, struct nvbios_ramcfg *VAR_9)
{
 VAR_1 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_9->ramcfg_ver = *VAR_7;
 VAR_9->ramcfg_hdr = *VAR_8;
 switch (!!VAR_1 * *VAR_7) {
 case 0x10:
  VAR_9->ramcfg_timing = FUNC_1(VAR_0, VAR_1 + 0x01);
  VAR_9->ramcfg_10_02_01 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x01) >> 0;
  VAR_9->ramcfg_10_02_02 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x02) >> 1;
  VAR_9->ramcfg_10_02_04 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x04) >> 2;
  VAR_9->ramcfg_10_02_08 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x08) >> 3;
  VAR_9->ramcfg_10_02_10 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x10) >> 4;
  VAR_9->ramcfg_10_02_20 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x20) >> 5;
  VAR_9->ramcfg_DLLoff = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x40) >> 6;
  VAR_9->ramcfg_10_03_0f = (FUNC_1(VAR_0, VAR_1 + 0x03) & 0x0f) >> 0;
  VAR_9->ramcfg_10_04_01 = (FUNC_1(VAR_0, VAR_1 + 0x04) & 0x01) >> 0;
  VAR_9->ramcfg_FBVDDQ = (FUNC_1(VAR_0, VAR_1 + 0x04) & 0x08) >> 3;
  VAR_9->ramcfg_10_05 = (FUNC_1(VAR_0, VAR_1 + 0x05) & 0xff) >> 0;
  VAR_9->ramcfg_10_06 = (FUNC_1(VAR_0, VAR_1 + 0x06) & 0xff) >> 0;
  VAR_9->ramcfg_10_07 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0xff) >> 0;
  VAR_9->ramcfg_10_08 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0xff) >> 0;
  VAR_9->ramcfg_10_09_0f = (FUNC_1(VAR_0, VAR_1 + 0x09) & 0x0f) >> 0;
  VAR_9->ramcfg_10_09_f0 = (FUNC_1(VAR_0, VAR_1 + 0x09) & 0xf0) >> 4;
  break;
 case 0x11:
  VAR_9->ramcfg_timing = FUNC_1(VAR_0, VAR_1 + 0x00);
  VAR_9->ramcfg_11_01_01 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x01) >> 0;
  VAR_9->ramcfg_11_01_02 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x02) >> 1;
  VAR_9->ramcfg_11_01_04 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x04) >> 2;
  VAR_9->ramcfg_11_01_08 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x08) >> 3;
  VAR_9->ramcfg_11_01_10 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x10) >> 4;
  VAR_9->ramcfg_DLLoff = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x20) >> 5;
  VAR_9->ramcfg_11_01_40 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x40) >> 6;
  VAR_9->ramcfg_11_01_80 = (FUNC_1(VAR_0, VAR_1 + 0x01) & 0x80) >> 7;
  VAR_9->ramcfg_11_02_03 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x03) >> 0;
  VAR_9->ramcfg_11_02_04 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x04) >> 2;
  VAR_9->ramcfg_11_02_08 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x08) >> 3;
  VAR_9->ramcfg_11_02_10 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x10) >> 4;
  VAR_9->ramcfg_11_02_40 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x40) >> 6;
  VAR_9->ramcfg_11_02_80 = (FUNC_1(VAR_0, VAR_1 + 0x02) & 0x80) >> 7;
  VAR_9->ramcfg_11_03_0f = (FUNC_1(VAR_0, VAR_1 + 0x03) & 0x0f) >> 0;
  VAR_9->ramcfg_11_03_30 = (FUNC_1(VAR_0, VAR_1 + 0x03) & 0x30) >> 4;
  VAR_9->ramcfg_11_03_c0 = (FUNC_1(VAR_0, VAR_1 + 0x03) & 0xc0) >> 6;
  VAR_9->ramcfg_11_03_f0 = (FUNC_1(VAR_0, VAR_1 + 0x03) & 0xf0) >> 4;
  VAR_9->ramcfg_11_04 = (FUNC_1(VAR_0, VAR_1 + 0x04) & 0xff) >> 0;
  VAR_9->ramcfg_11_06 = (FUNC_1(VAR_0, VAR_1 + 0x06) & 0xff) >> 0;
  VAR_9->ramcfg_11_07_02 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x02) >> 1;
  VAR_9->ramcfg_11_07_04 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x04) >> 2;
  VAR_9->ramcfg_11_07_08 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x08) >> 3;
  VAR_9->ramcfg_11_07_10 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x10) >> 4;
  VAR_9->ramcfg_11_07_40 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x40) >> 6;
  VAR_9->ramcfg_11_07_80 = (FUNC_1(VAR_0, VAR_1 + 0x07) & 0x80) >> 7;
  VAR_9->ramcfg_11_08_01 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x01) >> 0;
  VAR_9->ramcfg_11_08_02 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x02) >> 1;
  VAR_9->ramcfg_11_08_04 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x04) >> 2;
  VAR_9->ramcfg_11_08_08 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x08) >> 3;
  VAR_9->ramcfg_11_08_10 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x10) >> 4;
  VAR_9->ramcfg_11_08_20 = (FUNC_1(VAR_0, VAR_1 + 0x08) & 0x20) >> 5;
  VAR_9->ramcfg_11_09 = (FUNC_1(VAR_0, VAR_1 + 0x09) & 0xff) >> 0;
  break;
 default:
  VAR_1 = 0;
  break;
 }
 return VAR_1;
}
