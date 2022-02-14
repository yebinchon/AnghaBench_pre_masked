
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {int rammap_00_16_20; int rammap_00_16_40; int rammap_00_17_02; } ;


 int FUNC_0 (struct nvbios_ramcfg*,int,int) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_2(struct nvkm_bios *VAR_0, u32 VAR_1, u8 VAR_2,
  struct nvbios_ramcfg *VAR_3)
{
 FUNC_0(VAR_3, 0x00, sizeof(*VAR_3));

 VAR_3->rammap_00_16_20 = (FUNC_1(VAR_0, VAR_1 + 0x16) & 0x20) >> 5;
 VAR_3->rammap_00_16_40 = (FUNC_1(VAR_0, VAR_1 + 0x16) & 0x40) >> 6;
 VAR_3->rammap_00_17_02 = (FUNC_1(VAR_0, VAR_1 + 0x17) & 0x02) >> 1;

 return VAR_1;
}
