
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_P0260E {int data; } ;


 int FUNC_0 (struct nvbios_P0260E*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3,
        struct nvbios_P0260E *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 switch (!!VAR_5 * *VAR_2) {
 case 0x10:
  VAR_4->data = FUNC_2(VAR_0, VAR_5);
  return VAR_5;
 default:
  break;
 }
 return 0x00000000;
}
