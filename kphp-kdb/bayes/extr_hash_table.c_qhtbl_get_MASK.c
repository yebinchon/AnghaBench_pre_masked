
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; unsigned int n; TYPE_1__* e; } ;
typedef TYPE_2__ qhash_table ;
typedef int pair ;
typedef scalar_t__ ll ;
struct TYPE_4__ {scalar_t__ h; int val; } ;



inline pair *FUNC_0 (qhash_table *VAR_0, ll VAR_1) {
  if (VAR_0->size == 0) {
    return ((void*)0);
  }
  int VAR_2 = (unsigned int)VAR_1 % VAR_0->n;

  while (VAR_0->e[VAR_2].h != VAR_1 && VAR_0->e[VAR_2].h) {
    if (++VAR_2 == VAR_0->n) {
      VAR_2 = 0;
    }
  }

  return VAR_0->e[VAR_2].h ? &VAR_0->e[VAR_2].val : ((void*)0);
}
