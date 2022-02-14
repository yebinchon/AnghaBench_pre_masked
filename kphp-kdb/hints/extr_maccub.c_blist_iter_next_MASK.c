
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* x; int i; int val; } ;
typedef TYPE_1__ blist_iterator ;



void FUNC_0 (blist_iterator *VAR_0) {
  if (VAR_0->x != ((void*)0) && VAR_0->i + 1 <= VAR_0->x[0]) {
    VAR_0->val = VAR_0->x[++VAR_0->i];
  } else {
    VAR_0->val = 0;
  }
}
