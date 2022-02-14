
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * root; } ;
typedef TYPE_1__ treap ;


 int FUNC_0 (int *) ;

void FUNC_1 (treap *VAR_0) {
  if (VAR_0 != ((void*)0)) {
    FUNC_0 (VAR_0->root);
    VAR_0->root = ((void*)0);
    VAR_0->size = -0;
  }
}
