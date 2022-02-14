
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int n; TYPE_1__* by_hash; } ;
typedef TYPE_2__ watchcat_entry_t ;
struct TYPE_10__ {int query; struct TYPE_10__* next; } ;
typedef TYPE_3__ watchcat ;
struct TYPE_8__ {scalar_t__ word; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_3 (scalar_t__,int ) ;

void FUNC_4 (watchcat_entry_t *VAR_0) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->n; VAR_1++) {
    if (VAR_1 == 0 || VAR_0->by_hash[VAR_1].word != VAR_0->by_hash[VAR_1 - 1].word) {
      watchcat *VAR_2 = FUNC_3 (VAR_0->by_hash[VAR_1].word, 0), *VAR_3;
      if (VAR_2 != ((void*)0)) {
        VAR_3 = VAR_2;
        FUNC_1 (VAR_3->next != VAR_2);
        while (VAR_3->next != VAR_2) {
          VAR_3 = VAR_3->next;

          if (FUNC_2 (VAR_0, VAR_3->query)) {
            FUNC_0 (VAR_3);
          }
        }
      }
    }
  }
}
