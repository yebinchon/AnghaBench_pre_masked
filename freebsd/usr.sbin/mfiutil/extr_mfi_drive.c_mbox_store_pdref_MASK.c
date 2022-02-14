
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device_id; int seq_num; } ;
union mfi_pd_ref {TYPE_1__ v; } ;
typedef int uint8_t ;



void
FUNC_0(uint8_t *VAR_0, union mfi_pd_ref *VAR_1)
{

 VAR_0[0] = VAR_1->v.device_id & 0xff;
 VAR_0[1] = VAR_1->v.device_id >> 8;
 VAR_0[2] = VAR_1->v.seq_num & 0xff;
 VAR_0[3] = VAR_1->v.seq_num >> 8;
}
