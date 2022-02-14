
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ state; } ;
struct mtk_foe_entry {TYPE_1__ bfib1; } ;
struct mtk_eth {scalar_t__ foe_table; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mtk_eth *VAR_1, u32 VAR_2)
{
 struct mtk_foe_entry VAR_3 = ((struct mtk_foe_entry *)VAR_1->foe_table)[VAR_2];

 return (VAR_3.bfib1.state == VAR_0)? 0:1;
}
