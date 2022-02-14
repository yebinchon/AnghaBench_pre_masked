
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prev_bucket; int next_bucket; } ;
typedef TYPE_1__ q_info ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (int VAR_1, int VAR_2) {
  q_info *VAR_3 = &VAR_0[VAR_1];
  int VAR_4 = VAR_2,
      VAR_5 = VAR_0[VAR_2].prev_bucket;

  VAR_3->next_bucket = VAR_4;
  VAR_0[VAR_4].prev_bucket = VAR_1;

  VAR_3->prev_bucket = VAR_5;
  VAR_0[VAR_5].next_bucket = VAR_1;
}
