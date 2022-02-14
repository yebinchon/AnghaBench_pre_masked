
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type_id; int size; scalar_t__ tn; } ;
typedef TYPE_1__ event_dump ;
struct TYPE_5__ {int shifts_len; } ;


 TYPE_2__* VAR_0 ;

void FUNC_0 (event_dump *VAR_1, int VAR_2) {
  VAR_1->tn = 0;
  VAR_1->type_id = VAR_2;
  VAR_1->size = VAR_0[VAR_2].shifts_len;
}
