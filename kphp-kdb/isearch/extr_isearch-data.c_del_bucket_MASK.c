
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t prev_bucket; size_t next_bucket; } ;
typedef TYPE_1__ q_info ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (int VAR_1) {
  q_info *VAR_2 = &VAR_0[VAR_1];
  VAR_0[VAR_2->prev_bucket].next_bucket = VAR_2->next_bucket;
  VAR_0[VAR_2->next_bucket].prev_bucket = VAR_2->prev_bucket;
}
