
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_ramcfg {scalar_t__ rammap_min; scalar_t__ rammap_max; } ;


 int FUNC_0 (struct nvkm_bios*,int ,int *,int *,int *,int *,struct nvbios_ramcfg*) ;

u32
FUNC_1(struct nvkm_bios *VAR_0, u16 VAR_1,
  u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, struct nvbios_ramcfg *VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;
 while ((VAR_8 = FUNC_0(VAR_0, VAR_7++, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))) {
  if (VAR_1 >= VAR_6->rammap_min && VAR_1 <= VAR_6->rammap_max)
   break;
 }
 return VAR_8;
}
