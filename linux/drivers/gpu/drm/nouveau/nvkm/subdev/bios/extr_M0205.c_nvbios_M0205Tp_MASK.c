
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_M0205T {int freq; } ;


 int FUNC_0 (struct nvbios_M0205T*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_0,
        u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, u8 *VAR_6,
        struct nvbios_M0205T *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7, 0x00, sizeof(*VAR_7));
 switch (!!VAR_8 * *VAR_1) {
 case 0x10:
  VAR_7->freq = FUNC_2(VAR_0, VAR_8 + 0x06);
  break;
 default:
  break;
 }
 return VAR_8;
}
