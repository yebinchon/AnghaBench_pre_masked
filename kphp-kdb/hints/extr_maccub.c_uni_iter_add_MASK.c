
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n; int * it; int r; int l; } ;
typedef TYPE_1__ uni_iterator ;
typedef int * changes ;
typedef int * LIST ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int *,int,int,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2 (uni_iterator *VAR_1, LIST VAR_2, changes VAR_3, int VAR_4, int VAR_5) {
  if ((VAR_2 != ((void*)0) || VAR_3 != ((void*)0)) && VAR_1->n < VAR_0) {
    FUNC_0 (&VAR_1->it[VAR_1->n], VAR_2, VAR_3, VAR_4, VAR_5, VAR_1->l, VAR_1->r);
    FUNC_1 (&VAR_1->it[VAR_1->n++]);
  }
}
