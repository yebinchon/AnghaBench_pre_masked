
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_connE {int type; int location; int hpd; int dp; int di; int sr; int lcdid; } ;


 int FUNC_0 (struct nvbios_connE*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u8 VAR_1, u8 *VAR_2, u8 *VAR_3,
       struct nvbios_connE *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 switch (!!VAR_5 * *VAR_2) {
 case 0x30:
 case 0x40:
  VAR_4->type = FUNC_2(VAR_0, VAR_5 + 0x00);
  VAR_4->location = FUNC_2(VAR_0, VAR_5 + 0x01) & 0x0f;
  VAR_4->hpd = (FUNC_2(VAR_0, VAR_5 + 0x01) & 0x30) >> 4;
  VAR_4->dp = (FUNC_2(VAR_0, VAR_5 + 0x01) & 0xc0) >> 6;
  if (*VAR_3 < 4)
   return VAR_5;
  VAR_4->hpd |= (FUNC_2(VAR_0, VAR_5 + 0x02) & 0x03) << 2;
  VAR_4->dp |= FUNC_2(VAR_0, VAR_5 + 0x02) & 0x0c;
  VAR_4->di = (FUNC_2(VAR_0, VAR_5 + 0x02) & 0xf0) >> 4;
  VAR_4->hpd |= (FUNC_2(VAR_0, VAR_5 + 0x03) & 0x07) << 4;
  VAR_4->sr = (FUNC_2(VAR_0, VAR_5 + 0x03) & 0x08) >> 3;
  VAR_4->lcdid = (FUNC_2(VAR_0, VAR_5 + 0x03) & 0x70) >> 4;
  return VAR_5;
 default:
  break;
 }
 return 0x00000000;
}
