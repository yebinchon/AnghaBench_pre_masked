
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct nvkm_bios {int dummy; } ;
struct nvbios_power_budget_entry {void* max_w; void* avg_w; void* min_w; } ;
struct nvbios_power_budget {int ecount; int elen; int ver; scalar_t__ hlen; scalar_t__ offset; } ;


 int VAR_0 ;
 void* FUNC_0 (struct nvkm_bios*,scalar_t__) ;

int
FUNC_1(struct nvkm_bios *VAR_1,
                          struct nvbios_power_budget *VAR_2,
                          u8 VAR_3, struct nvbios_power_budget_entry *VAR_4)
{
 u32 VAR_5;

 if (!VAR_1 || !VAR_2 || !VAR_2->offset || VAR_3 >= VAR_2->ecount
  || !VAR_4)
  return -VAR_0;

 VAR_5 = VAR_2->offset + VAR_2->hlen + VAR_3 * VAR_2->elen;

 if (VAR_2->ver >= 0x20) {
  VAR_4->min_w = FUNC_0(VAR_1, VAR_5 + 0x2);
  VAR_4->avg_w = FUNC_0(VAR_1, VAR_5 + 0x6);
  VAR_4->max_w = FUNC_0(VAR_1, VAR_5 + 0xa);
 } else {
  VAR_4->min_w = 0;
  VAR_4->max_w = FUNC_0(VAR_1, VAR_5 + 0x2);
  VAR_4->avg_w = VAR_4->max_w;
 }

 return 0;
}
