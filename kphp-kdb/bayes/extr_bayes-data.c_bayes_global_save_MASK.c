
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int size; int n; TYPE_2__* e; } ;
typedef TYPE_1__ qhash_table ;
typedef int entry_t ;
struct TYPE_14__ {int spam; int ham; } ;
struct TYPE_13__ {scalar_t__ h; TYPE_1__ cnt; TYPE_8__ val; } ;
typedef TYPE_2__ bayes ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_8__* FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_6 (int) ;
 long long FUNC_7 (int ,TYPE_2__*,long long) ;

long long FUNC_8 (bayes VAR_2) {
  qhash_table *VAR_3 = &VAR_2.cnt;
  int VAR_4 = VAR_2.cnt.size, VAR_5 = VAR_2.cnt.n, VAR_6;

  VAR_6 = 3 * VAR_4 / 2;
  if (VAR_6 < VAR_1) {
    VAR_6 = VAR_1;
  }

  FUNC_0 (VAR_6 >= VAR_3->n);
  int VAR_7 = (VAR_6 > VAR_3->n);

  qhash_table *VAR_8;
  if (!VAR_7) {
    VAR_8 = VAR_3;
  } else {
    int VAR_9, VAR_10 = VAR_6 / 40000000;



    if (VAR_10 >= 1) {
      int VAR_11 = 0;

      for (VAR_9 = 0; VAR_9 < VAR_3->n; VAR_9++) {
        if (VAR_3->e[VAR_9].h != 0 && VAR_3->e[VAR_9].val.spam + VAR_3->e[VAR_9].val.ham > VAR_10) {
     VAR_11++;
        }
      }
      VAR_6 = 3 * VAR_11 / 2;
      if (VAR_6 < VAR_1) {
        VAR_6 = VAR_1;
      }
      VAR_2.cnt.size = VAR_11;


    }

    VAR_8 = FUNC_6 (sizeof (qhash_table));
    FUNC_4 (VAR_8);
    FUNC_5 (VAR_8, VAR_6);

    for (VAR_9 = 0; VAR_9 < VAR_3->n; VAR_9++) {
      if (VAR_3->e[VAR_9].h != 0 && VAR_3->e[VAR_9].val.spam + VAR_3->e[VAR_9].val.ham > VAR_10) {
        *FUNC_2 (VAR_8, VAR_3->e[VAR_9].h) = VAR_3->e[VAR_9].val;
      }
    }
    VAR_2.cnt.n = VAR_6;
  }

  long long VAR_12 = 3 * sizeof (int) + 2 * sizeof (long long);
  FUNC_0 (FUNC_7 (VAR_0[1], &VAR_2, VAR_12) == VAR_12);

  long long VAR_13 = sizeof (entry_t) * VAR_8->n;
  FUNC_0 (FUNC_7 (VAR_0[1], VAR_8->e, VAR_13) == VAR_13);

  if (VAR_7) {
    FUNC_3 (VAR_8);
    FUNC_1 (VAR_8, sizeof (qhash_table));
    VAR_2.cnt.n = VAR_5;
    VAR_2.cnt.size = VAR_4;
  }
  return VAR_12 + VAR_13;
}
