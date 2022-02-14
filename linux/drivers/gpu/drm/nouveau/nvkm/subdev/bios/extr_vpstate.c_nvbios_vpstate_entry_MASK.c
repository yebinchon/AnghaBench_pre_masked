
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_vpstate_header {int ecount; int elen; int slen; int scount; scalar_t__ hlen; scalar_t__ offset; } ;
struct nvbios_vpstate_entry {int clock_mhz; int pstate; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_bios*,scalar_t__) ;
 int FUNC_1 (struct nvkm_bios*,scalar_t__) ;

int
FUNC_2(struct nvkm_bios *VAR_1, struct nvbios_vpstate_header *VAR_2,
       u8 VAR_3, struct nvbios_vpstate_entry *VAR_4)
{
 u32 VAR_5;

 if (!VAR_4 || !VAR_2 || VAR_3 > VAR_2->ecount)
  return -VAR_0;

 VAR_5 = VAR_2->offset + VAR_2->hlen + VAR_3 * (VAR_2->elen + (VAR_2->slen * VAR_2->scount));
 VAR_4->pstate = FUNC_0(VAR_1, VAR_5);
 VAR_4->clock_mhz = FUNC_1(VAR_1, VAR_5 + 0x5);
 return 0;
}
