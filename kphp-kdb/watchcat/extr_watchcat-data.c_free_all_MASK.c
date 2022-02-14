
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* l; } ;
typedef TYPE_1__ wkey ;
struct TYPE_8__ {struct TYPE_8__* next_time; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_3 ;
 TYPE_3__** VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_5 (void) {
  if (VAR_5) {
    VAR_3 += VAR_0;
    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
      while (VAR_4[VAR_7]->next_time != VAR_4[VAR_7]) {
        FUNC_1 (VAR_4[VAR_7]->next_time);
      }
      FUNC_3 (VAR_4[VAR_7]);
    }
    FUNC_0 (VAR_3 == 0);

    while (VAR_6 != ((void*)0)) {
      wkey *VAR_8 = VAR_6;
      VAR_6 = VAR_6->l;
      FUNC_2 (VAR_8, sizeof (wkey));
    }

    FUNC_4 (&VAR_1);
    FUNC_4 (&VAR_2);
  }
}
