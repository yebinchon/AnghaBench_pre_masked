
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_cstepE {int pstate; int index; } ;


 int FUNC_0 (struct nvbios_cstepE*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,int *,int *) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_3 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_4(struct nvkm_bios *VAR_0, int VAR_1, u8 *VAR_2, u8 *VAR_3,
        struct nvbios_cstepE *VAR_4)
{
 u32 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_0(VAR_4, 0x00, sizeof(*VAR_4));
 if (VAR_5) {
  VAR_4->pstate = (FUNC_3(VAR_0, VAR_5 + 0x00) & 0x01e0) >> 5;
  VAR_4->index = FUNC_2(VAR_0, VAR_5 + 0x03);
 }
 return VAR_5;
}
