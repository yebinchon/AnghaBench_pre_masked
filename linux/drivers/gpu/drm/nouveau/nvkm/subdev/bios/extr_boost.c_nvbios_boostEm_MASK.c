
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_boostE {scalar_t__ pstate; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,int ,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,struct nvbios_boostE*) ;

u32
FUNC_1(struct nvkm_bios *VAR_0, u8 VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, struct nvbios_boostE *VAR_6)
{
 u32 VAR_7, VAR_8 = 0;
 while ((VAR_7 = FUNC_0(VAR_0, VAR_8++, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6))) {
  if (VAR_6->pstate == VAR_1)
   break;
 }
 return VAR_7;
}
