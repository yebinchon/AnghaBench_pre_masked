
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmcmsptwi_cfg {int arbf; int nak; int add10; int mst_code; int arb; int highspeed; } ;



__attribute__((used)) static inline void FUNC_0(u32 VAR_0, struct pmcmsptwi_cfg *VAR_1)
{
 VAR_1->arbf = (VAR_0 >> 12) & 0xf;
 VAR_1->nak = (VAR_0 >> 8) & 0xf;
 VAR_1->add10 = (VAR_0 >> 7) & 0x1;
 VAR_1->mst_code = (VAR_0 >> 4) & 0x7;
 VAR_1->arb = (VAR_0 >> 1) & 0x1;
 VAR_1->highspeed = VAR_0 & 0x1;
}
