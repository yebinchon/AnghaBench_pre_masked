
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int key_len; scalar_t__ key; } ;
struct TYPE_5__ {struct TYPE_5__* prev_time; struct TYPE_5__* next_time; } ;
struct TYPE_4__ {struct TYPE_4__* prev_use; struct TYPE_4__* next_use; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t* VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 TYPE_1__ VAR_17 ;

void FUNC_3 (void) {
  int VAR_18;

  VAR_15 = 0;
  VAR_16 = 0;
  VAR_17.next_use = &VAR_17;
  VAR_17.prev_use = &VAR_17;

  for (VAR_18 = 0; VAR_18 < VAR_1; VAR_18++) {
    VAR_14[VAR_18] = VAR_18;

    VAR_11[VAR_14[VAR_18]].next_time = &VAR_11[VAR_14[VAR_18]];
    VAR_11[VAR_14[VAR_18]].prev_time = &VAR_11[VAR_14[VAR_18]];
  }


  VAR_12 = FUNC_0 (FUNC_1());
  VAR_13 = 0;
  VAR_9 = 0;

  if (!VAR_10) {
    for (VAR_18=0; VAR_18 < VAR_0; VAR_18++) {
      VAR_2[VAR_18].key_len = -1;
      VAR_2[VAR_18].key = 0;
      VAR_4 [VAR_0 + VAR_18] = VAR_0 + VAR_18;
      VAR_6 [VAR_0 + VAR_18] = VAR_0 + VAR_18;
      VAR_8[VAR_18] = VAR_18;
    }

    VAR_7 [VAR_0] = VAR_0;
    VAR_5 [VAR_0] = VAR_0;
    VAR_3 = VAR_0;
  }
  FUNC_2 ();
}
