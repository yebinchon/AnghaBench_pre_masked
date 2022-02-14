
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0205S {int data; } ;


 int FUNC_0 (struct nvbios_M0205S*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,int,int,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,int) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1, int VAR_2, u8 *VAR_3, u8 *VAR_4,
        struct nvbios_M0205S *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5, 0x00, sizeof(*VAR_5));
 switch (!!VAR_6 * *VAR_3) {
 case 0x10:
  VAR_5->data = FUNC_2(VAR_0, VAR_6 + 0x00);
  return VAR_6;
 default:
  break;
 }
 return 0x00000000;
}
