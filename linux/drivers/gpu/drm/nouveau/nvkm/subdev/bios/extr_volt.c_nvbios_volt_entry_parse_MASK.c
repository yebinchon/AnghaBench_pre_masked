
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_volt_entry {int voltage; int vid; } ;


 int FUNC_0 (struct nvbios_volt_entry*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct nvkm_bios*,int,int*,int*) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3,
   struct nvbios_volt_entry *VAR_4)
{
 u32 VAR_5 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 switch (!!VAR_5 * *VAR_2) {
 case 0x12:
 case 0x20:
  VAR_4->voltage = FUNC_1(VAR_0, VAR_5 + 0x00) * 10000;
  VAR_4->vid = FUNC_1(VAR_0, VAR_5 + 0x01);
  break;
 case 0x30:
  VAR_4->voltage = FUNC_1(VAR_0, VAR_5 + 0x00) * 10000;
  VAR_4->vid = FUNC_1(VAR_0, VAR_5 + 0x01) >> 2;
  break;
 case 0x40:
  break;
 case 0x50:
  VAR_4->voltage = FUNC_2(VAR_0, VAR_5) & 0x001fffff;
  VAR_4->vid = (FUNC_2(VAR_0, VAR_5) >> 23) & 0xff;
  break;
 }
 return VAR_5;
}
