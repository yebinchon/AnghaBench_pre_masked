
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n; int * e; scalar_t__ size; } ;
typedef TYPE_1__ qhash_table ;
typedef int entry_t ;


 int FUNC_0 (int *,int) ;

void FUNC_1 (qhash_table *VAR_0) {
  if (VAR_0->e != ((void*)0)) {
    FUNC_0 (VAR_0->e, VAR_0->n * sizeof (entry_t));
    VAR_0->n = 0;
    VAR_0->size = 0;
    VAR_0->e = ((void*)0);
  }
}
