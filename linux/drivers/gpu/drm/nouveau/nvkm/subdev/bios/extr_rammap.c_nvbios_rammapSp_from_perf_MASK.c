
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {int ramcfg_timing; int ramcfg_00_03_01; int ramcfg_00_03_02; int ramcfg_DLLoff; int ramcfg_00_03_08; int ramcfg_RON; int ramcfg_FBVDDQ; int ramcfg_00_04_02; int ramcfg_00_04_04; int ramcfg_00_04_20; int ramcfg_00_05; int ramcfg_00_06; int ramcfg_00_07; int ramcfg_00_08; int ramcfg_00_09; int ramcfg_00_0a_0f; int ramcfg_00_0a_f0; scalar_t__ ramcfg_ver; } ;


 int FUNC_0 (struct nvkm_bios*,int) ;

u32
FUNC_1(struct nvkm_bios *VAR_0, u32 VAR_1, u8 VAR_2, int VAR_3,
  struct nvbios_ramcfg *VAR_4)
{
 VAR_1 += (VAR_3 * VAR_2);

 if (VAR_2 < 11)
  return 0x00000000;

 VAR_4->ramcfg_ver = 0;
 VAR_4->ramcfg_timing = FUNC_0(VAR_0, VAR_1 + 0x01);
 VAR_4->ramcfg_00_03_01 = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x01) >> 0;
 VAR_4->ramcfg_00_03_02 = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x02) >> 1;
 VAR_4->ramcfg_DLLoff = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x04) >> 2;
 VAR_4->ramcfg_00_03_08 = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x08) >> 3;
 VAR_4->ramcfg_RON = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x10) >> 3;
 VAR_4->ramcfg_FBVDDQ = (FUNC_0(VAR_0, VAR_1 + 0x03) & 0x80) >> 7;
 VAR_4->ramcfg_00_04_02 = (FUNC_0(VAR_0, VAR_1 + 0x04) & 0x02) >> 1;
 VAR_4->ramcfg_00_04_04 = (FUNC_0(VAR_0, VAR_1 + 0x04) & 0x04) >> 2;
 VAR_4->ramcfg_00_04_20 = (FUNC_0(VAR_0, VAR_1 + 0x04) & 0x20) >> 5;
 VAR_4->ramcfg_00_05 = (FUNC_0(VAR_0, VAR_1 + 0x05) & 0xff) >> 0;
 VAR_4->ramcfg_00_06 = (FUNC_0(VAR_0, VAR_1 + 0x06) & 0xff) >> 0;
 VAR_4->ramcfg_00_07 = (FUNC_0(VAR_0, VAR_1 + 0x07) & 0xff) >> 0;
 VAR_4->ramcfg_00_08 = (FUNC_0(VAR_0, VAR_1 + 0x08) & 0xff) >> 0;
 VAR_4->ramcfg_00_09 = (FUNC_0(VAR_0, VAR_1 + 0x09) & 0xff) >> 0;
 VAR_4->ramcfg_00_0a_0f = (FUNC_0(VAR_0, VAR_1 + 0x0a) & 0x0f) >> 0;
 VAR_4->ramcfg_00_0a_f0 = (FUNC_0(VAR_0, VAR_1 + 0x0a) & 0xf0) >> 4;

 return VAR_1;
}
