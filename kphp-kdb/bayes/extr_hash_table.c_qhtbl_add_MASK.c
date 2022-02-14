
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; int n; TYPE_1__* e; } ;
typedef TYPE_2__ qhash_table ;
typedef int pair ;
typedef scalar_t__ ll ;
struct TYPE_5__ {scalar_t__ h; int val; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int) ;

inline pair *FUNC_2 (qhash_table *VAR_0, ll VAR_1) {
  FUNC_0 (VAR_0->size < 400000000);
  if (VAR_0->size * 5 / 4 >= VAR_0->n) {
    int VAR_2 = VAR_0->size * 3 / 2;
    if (VAR_2 < 100) {
      VAR_2 = 100;
    }
    FUNC_1 (VAR_0, VAR_2);
  }

  int VAR_3 = (unsigned int)VAR_1 % VAR_0->n;

  while (VAR_0->e[VAR_3].h != VAR_1 && VAR_0->e[VAR_3].h) {
    if (++VAR_3 == VAR_0->n) {
      VAR_3 = 0;
    }
  }

  if (VAR_0->e[VAR_3].h != VAR_1) {
    VAR_0->e[VAR_3].h = VAR_1;
    VAR_0->size++;
  }

  return &VAR_0->e[VAR_3].val;
}
