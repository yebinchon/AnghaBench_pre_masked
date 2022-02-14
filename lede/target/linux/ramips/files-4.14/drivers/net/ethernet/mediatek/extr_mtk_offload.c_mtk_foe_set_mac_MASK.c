
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {void* smac_lo; void* smac_hi; void* dmac_lo; void* dmac_hi; } ;
struct mtk_foe_entry {TYPE_1__ ipv4_hnapt; } ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct mtk_foe_entry *VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 VAR_0->ipv4_hnapt.dmac_hi = FUNC_1(*((u32*) VAR_2));
 VAR_0->ipv4_hnapt.dmac_lo = FUNC_0(*((u16*) &VAR_2[4]));
 VAR_0->ipv4_hnapt.smac_hi = FUNC_1(*((u32*) VAR_1));
 VAR_0->ipv4_hnapt.smac_lo = FUNC_0(*((u16*) &VAR_1[4]));
}
