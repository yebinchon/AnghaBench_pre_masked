
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_boostE {int pstate; int min; int max; } ;


 int FUNC_0 (struct nvbios_boostE*,int,int) ;
 scalar_t__ FUNC_1 (struct nvkm_bios*,int,int *,int *,int *,int *) ;
 int FUNC_2 (struct nvkm_bios*,scalar_t__) ;

u32
FUNC_3(struct nvkm_bios *VAR_0, int VAR_1,
        u8 *VAR_2, u8 *VAR_3, u8 *VAR_4, u8 *VAR_5, struct nvbios_boostE *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_6, 0x00, sizeof(*VAR_6));
 if (VAR_7) {
  VAR_6->pstate = (FUNC_2(VAR_0, VAR_7 + 0x00) & 0x01e0) >> 5;
  VAR_6->min = FUNC_2(VAR_0, VAR_7 + 0x02) * 1000;
  VAR_6->max = FUNC_2(VAR_0, VAR_7 + 0x04) * 1000;
 }
 return VAR_7;
}
