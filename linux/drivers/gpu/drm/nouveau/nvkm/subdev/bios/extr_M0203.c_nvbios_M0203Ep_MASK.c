
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0203E {int type; int strap; int group; } ;


 int FUNC_0 (struct nvbios_M0203E*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3,
        struct nvbios_M0203E *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 switch (!!VAR_5 * *VAR_2) {
 case 0x10:
  VAR_4->type = (FUNC_2(VAR_0, VAR_5 + 0x00) & 0x0f) >> 0;
  VAR_4->strap = (FUNC_2(VAR_0, VAR_5 + 0x00) & 0xf0) >> 4;
  VAR_4->group = (FUNC_2(VAR_0, VAR_5 + 0x01) & 0x0f) >> 0;
  return VAR_5;
 default:
  break;
 }
 return 0x00000000;
}
