
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0203T {int pointer; int type; } ;


 int FUNC_0 (struct nvbios_M0203T*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4,
        struct nvbios_M0203T *VAR_5)
{
 u32 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5, 0x00, sizeof(*VAR_5));
 switch (!!VAR_6 * *VAR_1) {
 case 0x10:
  VAR_5->type = FUNC_2(VAR_0, VAR_6 + 0x04);
  VAR_5->pointer = FUNC_3(VAR_0, VAR_6 + 0x05);
  break;
 default:
  break;
 }
 return VAR_6;
}
