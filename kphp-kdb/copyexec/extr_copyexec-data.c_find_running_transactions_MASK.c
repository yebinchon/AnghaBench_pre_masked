
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ status; struct TYPE_13__* next; struct TYPE_13__* hnext; } ;
typedef TYPE_1__ transaction_t ;
typedef TYPE_1__ tlist_t ;
typedef int A ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 TYPE_1__** FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__**) ;
 int FUNC_4 (TYPE_1__**,int,int,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int,char*,...) ;

int FUNC_9 (void) {
  int VAR_5, VAR_6 = 0, VAR_7 = 0;
  tlist_t VAR_8;
  FUNC_5 (&VAR_8);
  transaction_t *VAR_9;
  for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++) {
    for (VAR_9 = VAR_0[VAR_5]; VAR_9 != ((void*)0); VAR_9 = VAR_9->hnext) {
      if (VAR_9->status == VAR_4) {
        if (FUNC_2 (VAR_9)) {
          FUNC_8 (4, "tlist_insert (&auto_running_list, %p)\n", VAR_9);
          FUNC_6 (&VAR_2, VAR_9);
          VAR_6++;
        } else {
          FUNC_8 (4, "tlist_insert (&auto_terminated_list, %p)\n", VAR_9);
          FUNC_6 (&VAR_8, VAR_9);
          VAR_7++;
        }
      }
    }
  }

  if (VAR_7 > 0) {
    transaction_t **VAR_10 = FUNC_1 (VAR_7, sizeof (VAR_10[0]));
    FUNC_0 (VAR_10 != ((void*)0));
    for (VAR_9 = VAR_8.next, VAR_5 = 0; VAR_9 != &VAR_8; VAR_9 = VAR_9->next) {
      VAR_10[VAR_5++] = VAR_9;
    }
    FUNC_4 (VAR_10, VAR_7, sizeof (VAR_10[0]), VAR_3);
    for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
      FUNC_8 (4, "find_running_transactions: call transaction_finish_execution\n");
      FUNC_7 (VAR_10[VAR_5], 0);
    }
    FUNC_3 (VAR_10);
    FUNC_8 (3, "found %d terminated transaction(s)\n", VAR_7);
  }

  return VAR_6;
}
