
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_ram {int* mr; TYPE_2__* next; } ;
struct TYPE_3__ {int timing_ver; int timing_10_CL; int timing_10_WR; int timing_10_ODT; int* timing; int ramcfg_timing; int ramcfg_DLLoff; } ;
struct TYPE_4__ {TYPE_1__ bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

int
FUNC_1(struct nvkm_ram *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8 = 0;

 switch (VAR_4->next->bios.timing_ver) {
 case 0x10:
  VAR_5 = VAR_4->next->bios.timing_10_CL;
  VAR_6 = VAR_4->next->bios.timing_10_WR;
  VAR_7 = !VAR_4->next->bios.ramcfg_DLLoff;
  VAR_8 = VAR_4->next->bios.timing_10_ODT & 3;
  break;
 case 0x20:
  VAR_5 = (VAR_4->next->bios.timing[1] & 0x0000001f);
  VAR_6 = (VAR_4->next->bios.timing[2] & 0x007f0000) >> 16;
  break;
 default:
  return -VAR_1;
 }

 if (VAR_4->next->bios.timing_ver == 0x20 ||
     VAR_4->next->bios.ramcfg_timing == 0xff) {
  VAR_8 = (VAR_4->mr[1] & 0x004) >> 2 |
         (VAR_4->mr[1] & 0x040) >> 5;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_5);
 VAR_6 = FUNC_0(VAR_3, VAR_6);
 if (VAR_5 < 0 || VAR_6 < 0)
  return -VAR_0;

 VAR_4->mr[0] &= ~0xf70;
 VAR_4->mr[0] |= (VAR_6 & 0x07) << 9;
 VAR_4->mr[0] |= (VAR_5 & 0x07) << 4;

 VAR_4->mr[1] &= ~0x045;
 VAR_4->mr[1] |= (VAR_8 & 0x1) << 2;
 VAR_4->mr[1] |= (VAR_8 & 0x2) << 5;
 VAR_4->mr[1] |= !VAR_7;
 return 0;
}
