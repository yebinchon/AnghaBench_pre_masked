
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_cstepE {scalar_t__ pstate; } ;


 scalar_t__ FUNC_0 (struct nvkm_bios*,int ,scalar_t__*,scalar_t__*,struct nvbios_cstepE*) ;

u32
FUNC_1(struct nvkm_bios *VAR_0, u8 VAR_1, u8 *VAR_2, u8 *VAR_3,
        struct nvbios_cstepE *VAR_4)
{
 u32 VAR_5, VAR_6 = 0;
 while ((VAR_5 = FUNC_0(VAR_0, VAR_6++, VAR_2, VAR_3, VAR_4))) {
  if (VAR_4->pstate == VAR_1)
   break;
 }
 return VAR_5;
}
