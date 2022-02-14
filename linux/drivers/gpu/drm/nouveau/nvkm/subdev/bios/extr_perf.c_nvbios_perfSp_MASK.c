
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct TYPE_2__ {int freq; } ;
struct nvbios_perfS {TYPE_1__ v40; } ;


 int FUNC_0 (struct nvbios_perfS*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,scalar_t__,int,int*,int*,int,int) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, u32 VAR_1, int VAR_2,
       u8 *VAR_3, u8 *VAR_4, u8 VAR_5, u8 VAR_6,
       struct nvbios_perfS *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(VAR_7, 0x00, sizeof(*VAR_7));
 switch (!!VAR_8 * *VAR_3) {
 case 0x40:
  VAR_7->v40.freq = (FUNC_2(VAR_0, VAR_8 + 0x00) & 0x3fff) * 1000;
  break;
 default:
  break;
 }
 return VAR_8;
}
