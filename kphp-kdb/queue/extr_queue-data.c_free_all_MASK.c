
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ ev_first; } ;
typedef TYPE_1__ queue ;
struct TYPE_8__ {struct TYPE_8__* next_time; scalar_t__ lock; int timeout; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int) ;
 long long FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,long long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 int VAR_10 ;
 TYPE_2__** VAR_11 ;
 long long FUNC_14 () ;
 scalar_t__ VAR_12 ;

void FUNC_15 (void) {
  if (VAR_12) {

    if (VAR_6 != -1) {
      FUNC_7 (VAR_6);
      FUNC_0 (FUNC_1 (VAR_6) >= 0);
    }

    VAR_7 += VAR_0;
    int VAR_13;
    for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
      while (VAR_11[VAR_13]->next_time != VAR_11[VAR_13]) {
        if (VAR_11[VAR_13]->next_time->lock) {
          FUNC_2 ("Problem with key[%s] timeout = %d\n", VAR_11[VAR_13]->next_time->name,
               VAR_11[VAR_13]->next_time->timeout);
        }
        FUNC_0 (!VAR_11[VAR_13]->next_time->lock);

        FUNC_3 (VAR_11[VAR_13]->next_time);
      }
      FUNC_12 (VAR_11[VAR_13]);
    }
    FUNC_0 (VAR_7 == 0);


    while (VAR_8 != ((void*)0)) {
      queue *VAR_14 = VAR_8;
      VAR_8 = (queue *)VAR_8->ev_first;
      FUNC_5 (VAR_14, sizeof (queue));
    }

    FUNC_13 (&VAR_4);
    FUNC_13 (&VAR_3);
    FUNC_10 (&VAR_9);
    FUNC_11 (&VAR_1);

    FUNC_9 (&VAR_5);

    FUNC_4 (&VAR_2);

    long long VAR_15 = FUNC_6() - FUNC_14();

    FUNC_8 (VAR_10, "Memory left: %lld\n", VAR_15);
    FUNC_0 (VAR_15 == 0);
  }
}
