
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int user ;
typedef int entry_t ;
typedef int black_list ;
struct TYPE_14__ {int cnt; } ;
struct TYPE_13__ {int size; } ;
struct TYPE_11__ {int cnt; } ;
struct TYPE_12__ {int * next; TYPE_1__ b; } ;


 int FUNC_0 (int) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_7__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (int *) ;
 int VAR_7 ;
 int FUNC_9 () ;
 TYPE_3__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;

void FUNC_10 (void) {
  if (VAR_10) {
    while (FUNC_9() != -1) {
    }

    FUNC_8 (&VAR_2.cnt);
    int VAR_11;
    for (VAR_11 = 0; VAR_11 < VAR_8.size; VAR_11++) {
      FUNC_8 (&VAR_9[VAR_11].b.cnt);
    }

    if (VAR_4) {
      FUNC_7 (VAR_1, VAR_5 * sizeof (entry_t));
      FUNC_7 (VAR_6, 4000000 * sizeof (entry_t));
    }

    while (VAR_0->next != ((void*)0)) {
      FUNC_1 (VAR_0);
    }
    FUNC_7 (VAR_0, sizeof (black_list));

    FUNC_7 (VAR_9, sizeof (user) * VAR_8.size);

    FUNC_6 (&VAR_8);
    FUNC_3 (&VAR_3);

    FUNC_2 (VAR_7, "Memory left: %ld\n", FUNC_4() - FUNC_5());
    FUNC_0 (FUNC_4() - FUNC_5() == 0);
  }
}
