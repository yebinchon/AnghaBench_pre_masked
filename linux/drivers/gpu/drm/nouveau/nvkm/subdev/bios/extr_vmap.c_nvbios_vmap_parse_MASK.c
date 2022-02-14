
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vmap {int max0; int max1; int max2; } ;


 int FUNC_0 (struct nvbios_vmap*,int,int) ;
 void* FUNC_1 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,int*,int*,int*,int*) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u8 *VAR_1, u8 *VAR_2, u8 *VAR_3, u8 *VAR_4,
    struct nvbios_vmap *VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_5, 0x00, sizeof(*VAR_5));
 switch (!!VAR_6 * *VAR_1) {
 case 0x10:
  VAR_5->max0 = 0xff;
  VAR_5->max1 = 0xff;
  VAR_5->max2 = 0xff;
  break;
 case 0x20:
  VAR_5->max0 = FUNC_1(VAR_0, VAR_6 + 0x7);
  VAR_5->max1 = FUNC_1(VAR_0, VAR_6 + 0x8);
  if (*VAR_4 >= 0xc)
   VAR_5->max2 = FUNC_1(VAR_0, VAR_6 + 0xc);
  else
   VAR_5->max2 = 0xff;
  break;
 }
 return VAR_6;
}
