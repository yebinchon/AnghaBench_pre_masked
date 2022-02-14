
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_ram {int freq; int* mr; int mr1_nuts; TYPE_2__* next; } ;
struct TYPE_3__ {int ramcfg_ver; int ramcfg_11_01_80; int ramcfg_11_01_40; int ramcfg_11_02_10; int ramcfg_11_02_04; int ramcfg_11_06; int timing_ver; int* timing; int timing_20_2e_c0; int timing_20_2e_30; int timing_20_2e_03; int timing_20_2f_03; int ramcfg_11_07_02; int ramcfg_DLLoff; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int
FUNC_1(struct nvkm_ram *VAR_2, bool VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14[2], VAR_15, VAR_16;
 int VAR_17 = VAR_2->freq < 1000000;

 VAR_6 = !VAR_2->next->bios.ramcfg_DLLoff;

 switch (VAR_2->next->bios.ramcfg_ver) {
 case 0x11:
  VAR_4 = VAR_2->next->bios.ramcfg_11_01_80;
  VAR_5 = VAR_2->next->bios.ramcfg_11_01_40;
  VAR_7 = VAR_2->next->bios.ramcfg_11_02_10;
  VAR_8 = VAR_2->next->bios.ramcfg_11_02_04;
  VAR_9 = VAR_2->next->bios.ramcfg_11_06;
  VAR_10 = !VAR_2->next->bios.ramcfg_11_07_02;
  break;
 default:
  return -VAR_1;
 }

 switch (VAR_2->next->bios.timing_ver) {
 case 0x20:
  VAR_11 = (VAR_2->next->bios.timing[1] & 0x00000f80) >> 7;
  VAR_12 = (VAR_2->next->bios.timing[1] & 0x0000001f);
  VAR_13 = (VAR_2->next->bios.timing[2] & 0x007f0000) >> 16;
  VAR_14[0] = VAR_2->next->bios.timing_20_2e_c0;
  VAR_14[1] = VAR_2->next->bios.timing_20_2e_30;
  VAR_15 = VAR_2->next->bios.timing_20_2e_03;
  VAR_16 = VAR_2->next->bios.timing_20_2f_03;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_11 < 1 || VAR_11 > 7 || VAR_12 < 5 || VAR_12 > 36 || VAR_13 < 4 || VAR_13 > 35)
  return -VAR_0;
 VAR_12 -= 5;
 VAR_13 -= 4;

 VAR_2->mr[0] &= ~0xf7f;
 VAR_2->mr[0] |= (VAR_13 & 0x0f) << 8;
 VAR_2->mr[0] |= (VAR_12 & 0x0f) << 3;
 VAR_2->mr[0] |= (VAR_11 & 0x07) << 0;

 VAR_2->mr[1] &= ~0x0bf;
 VAR_2->mr[1] |= (VAR_6 & 0x01) << 7;
 VAR_2->mr[1] |= (VAR_14[0] & 0x03) << 4;
 VAR_2->mr[1] |= (VAR_15 & 0x03) << 2;
 VAR_2->mr[1] |= (VAR_16 & 0x03) << 0;




 VAR_2->mr1_nuts = VAR_2->mr[1];
 if (VAR_3) {
  VAR_2->mr[1] &= ~0x030;
  VAR_2->mr[1] |= (VAR_14[1] & 0x03) << 4;
 }

 VAR_2->mr[3] &= ~0x020;
 VAR_2->mr[3] |= (VAR_17 & 0x01) << 5;

 VAR_2->mr[5] &= ~0x004;
 VAR_2->mr[5] |= (VAR_10 << 2);

 if (!VAR_9)
  VAR_9 = (VAR_2->mr[6] & 0xff0) >> 4;
 if (VAR_2->mr[6] & 0x001)
  VAR_4 = 1;
 VAR_2->mr[6] &= ~0xff1;
 VAR_2->mr[6] |= (VAR_9 & 0xff) << 4;
 VAR_2->mr[6] |= (VAR_4 & 0x01) << 0;

 if (FUNC_0(VAR_8)) {
  VAR_2->mr[7] &= ~0x300;
  VAR_2->mr[7] |= (VAR_8 & 0x03) << 8;
 }
 VAR_2->mr[7] &= ~0x088;
 VAR_2->mr[7] |= (VAR_7 & 0x01) << 7;
 VAR_2->mr[7] |= (VAR_5 & 0x01) << 3;

 VAR_2->mr[8] &= ~0x003;
 VAR_2->mr[8] |= (VAR_13 & 0x10) >> 3;
 VAR_2->mr[8] |= (VAR_12 & 0x10) >> 4;
 return 0;
}
