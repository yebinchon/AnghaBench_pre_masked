
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* answers_list_ptr ;
typedef int answers_list ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; struct TYPE_6__* E; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,long) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_3 ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void FUNC_13 (void) {
  if (VAR_6) {
    while (VAR_1 > 0) {
      FUNC_0 (VAR_0->next != VAR_0);
      FUNC_11 (VAR_0->next, -1);

      answers_list_ptr VAR_8 = VAR_0->next;
      FUNC_1 (VAR_8->E, FUNC_4 (VAR_8->E));
      VAR_0->next = VAR_8->next;
      VAR_0->next->prev = VAR_0;

      FUNC_1 (VAR_8, sizeof (answers_list));
    }
    FUNC_0 (VAR_0->next == VAR_0);

    FUNC_0 (FUNC_6 (&VAR_3) == 0);
    FUNC_0 (FUNC_10 (&VAR_5) == 0);
    FUNC_0 (FUNC_8 (&VAR_7) == 0);

    FUNC_12 (&VAR_2);
    FUNC_5 (&VAR_3);
    FUNC_9 (&VAR_5);
    FUNC_7 (&VAR_7);

    FUNC_1 (VAR_0, sizeof (answers_list));

    FUNC_3 (VAR_4, "Memory left: %ld\n", (long)FUNC_2());
    FUNC_0 (FUNC_2() == 0);
  }
}
