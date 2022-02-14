
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_ram {int* mr; TYPE_2__* next; } ;
struct TYPE_3__ {int timing_ver; int timing_hdr; int timing_10_CWL; int timing_10_CL; int timing_10_WR; int timing_10_ODT; int* timing; int ramcfg_DLLoff; } ;
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
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0, VAR_10 = 0;

 VAR_9 = !VAR_5->next->bios.ramcfg_DLLoff;

 switch (VAR_5->next->bios.timing_ver) {
 case 0x10:
  if (VAR_5->next->bios.timing_hdr < 0x17) {

   return -VAR_1;
  }
  VAR_6 = VAR_5->next->bios.timing_10_CWL;
  VAR_7 = VAR_5->next->bios.timing_10_CL;
  VAR_8 = VAR_5->next->bios.timing_10_WR;
  VAR_10 = VAR_5->next->bios.timing_10_ODT;
  break;
 case 0x20:
  VAR_6 = (VAR_5->next->bios.timing[1] & 0x00000f80) >> 7;
  VAR_7 = (VAR_5->next->bios.timing[1] & 0x0000001f) >> 0;
  VAR_8 = (VAR_5->next->bios.timing[2] & 0x007f0000) >> 16;

  VAR_10 = (VAR_5->mr[1] & 0x004) >> 2 |
   (VAR_5->mr[1] & 0x040) >> 5 |
          (VAR_5->mr[1] & 0x200) >> 7;
  break;
 default:
  return -VAR_1;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_6);
 VAR_7 = FUNC_0(VAR_2, VAR_7);
 VAR_8 = FUNC_0(VAR_4, VAR_8);
 if (VAR_7 < 0 || VAR_6 < 0 || VAR_8 < 0)
  return -VAR_0;

 VAR_5->mr[0] &= ~0xf74;
 VAR_5->mr[0] |= (VAR_8 & 0x07) << 9;
 VAR_5->mr[0] |= (VAR_7 & 0x0e) << 3;
 VAR_5->mr[0] |= (VAR_7 & 0x01) << 2;

 VAR_5->mr[1] &= ~0x245;
 VAR_5->mr[1] |= (VAR_10 & 0x1) << 2;
 VAR_5->mr[1] |= (VAR_10 & 0x2) << 5;
 VAR_5->mr[1] |= (VAR_10 & 0x4) << 7;
 VAR_5->mr[1] |= !VAR_9;

 VAR_5->mr[2] &= ~0x038;
 VAR_5->mr[2] |= (VAR_6 & 0x07) << 3;
 return 0;
}
