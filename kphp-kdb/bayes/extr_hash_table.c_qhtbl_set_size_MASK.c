
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int size; int n; TYPE_2__* e; } ;
typedef TYPE_1__ qhash_table ;
typedef scalar_t__ ll ;
struct TYPE_7__ {scalar_t__ h; int val; } ;
typedef TYPE_2__ entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_2 (int) ;

void FUNC_3 (qhash_table *VAR_0, int VAR_1) {
  FUNC_0 (VAR_1 > VAR_0->size);
  if (VAR_1 == VAR_0->n) {
    return;
  }

  entry_t *VAR_2 = FUNC_2 (VAR_1 * sizeof (entry_t));
  FUNC_0 (VAR_2 != ((void*)0));

  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0->n; VAR_3++) {
    if (VAR_0->e[VAR_3].h) {
      ll VAR_4 = VAR_0->e[VAR_3].h;
      int VAR_5 = (unsigned int)VAR_4 % VAR_1;

      while (VAR_2[VAR_5].h != VAR_4 && VAR_2[VAR_5].h) {
        if (++VAR_5 == VAR_1) {
          VAR_5 = 0;
        }
      }

      VAR_2[VAR_5].h = VAR_4;
      VAR_2[VAR_5].val = VAR_0->e[VAR_3].val;
    }
  }

  FUNC_1 (VAR_0->e, VAR_0->n * sizeof (entry_t));
  VAR_0->n = VAR_1;
  VAR_0->e = VAR_2;
}
