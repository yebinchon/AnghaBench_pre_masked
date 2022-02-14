
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_ram {int* mr; TYPE_2__* next; } ;
struct TYPE_3__ {int timing_ver; int timing_10_CWL; int timing_10_CL; int timing_10_WR; int timing_10_ODT; int ramcfg_RON; int* timing; int ramcfg_timing; int ramcfg_DLLoff; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;

int
FUNC_1(struct nvkm_ram *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12;

 switch (VAR_5->next->bios.timing_ver) {
 case 0x10:
  VAR_8 = VAR_5->next->bios.timing_10_CWL;
  VAR_6 = VAR_5->next->bios.timing_10_CL;
  VAR_7 = VAR_5->next->bios.timing_10_WR;
  VAR_9 = !VAR_5->next->bios.ramcfg_DLLoff;
  VAR_10 = VAR_5->next->bios.timing_10_ODT;
  VAR_11 = VAR_5->next->bios.ramcfg_RON;
  break;
 case 0x20:
  VAR_8 = (VAR_5->next->bios.timing[1] & 0x00000f80) >> 7;
  VAR_6 = (VAR_5->next->bios.timing[1] & 0x0000001f) >> 0;
  VAR_7 = (VAR_5->next->bios.timing[2] & 0x007f0000) >> 16;

  VAR_9 = !(VAR_5->mr[1] & 0x1);
  VAR_11 = !((VAR_5->mr[1] & 0x300) >> 8);
  break;
 default:
  return -VAR_1;
 }

 if (VAR_5->next->bios.timing_ver == 0x20 ||
     VAR_5->next->bios.ramcfg_timing == 0xff) {
  VAR_10 = (VAR_5->mr[1] & 0xc) >> 2;
 }

 VAR_12 = VAR_5->mr[2] & 0x1;
 VAR_6 = FUNC_0(VAR_12 ? VAR_2 : VAR_3, VAR_6);
 VAR_7 = FUNC_0(VAR_4, VAR_7);
 if (VAR_6 < 0 || VAR_8 < 1 || VAR_8 > 7 || VAR_7 < 0)
  return -VAR_0;

 VAR_5->mr[0] &= ~0xf74;
 VAR_5->mr[0] |= (VAR_8 & 0x07) << 9;
 VAR_5->mr[0] |= (VAR_6 & 0x07) << 4;
 VAR_5->mr[0] |= (VAR_6 & 0x08) >> 1;

 VAR_5->mr[1] &= ~0x3fc;
 VAR_5->mr[1] |= (VAR_10 & 0x03) << 2;
 VAR_5->mr[1] |= (VAR_11 & 0x03) << 8;
 VAR_5->mr[1] |= (VAR_7 & 0x03) << 4;
 VAR_5->mr[1] |= (VAR_7 & 0x04) << 5;
 VAR_5->mr[1] |= !VAR_9 << 6;
 return 0;
}
