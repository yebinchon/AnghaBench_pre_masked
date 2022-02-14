
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; int reserved; int seq; } ;
union mfi_ld_ref {TYPE_1__ v; } ;
typedef int uint8_t ;



void
FUNC_0(uint8_t *VAR_0, union mfi_ld_ref *VAR_1)
{

 VAR_0[0] = VAR_1->v.target_id;
 VAR_0[1] = VAR_1->v.reserved;
 VAR_0[2] = VAR_1->v.seq & 0xff;
 VAR_0[3] = VAR_1->v.seq >> 8;
}
