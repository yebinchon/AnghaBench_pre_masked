
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int treap ;
struct TYPE_4__ {int * subs; int * name; } ;
typedef TYPE_1__ queue ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;

void FUNC_3 (queue *VAR_1) {
  if (VAR_1 != ((void*)0) && VAR_1->name != ((void*)0) && VAR_1->subs != ((void*)0)) {
    FUNC_0 (VAR_1);

    VAR_0 -= FUNC_2();
    FUNC_1 (VAR_1->subs, sizeof (treap));
    VAR_0 += FUNC_2();
    VAR_1->subs = ((void*)0);
  }
}
