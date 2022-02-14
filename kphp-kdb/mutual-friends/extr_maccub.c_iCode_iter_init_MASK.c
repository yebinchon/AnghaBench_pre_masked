
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; int* l; scalar_t__* n; int top; scalar_t__* st; scalar_t__* r; scalar_t__ pred; int * ptr; } ;
typedef TYPE_1__ iCode_iterator ;
typedef int * iCode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (iCode_iterator *VAR_1, iCode VAR_2, int VAR_3, int VAR_4, int VAR_5) {
  VAR_1->ptr = VAR_2;

  if (VAR_2 == ((void*)0)) {
    VAR_1->val = 0;
    return;
  }

  VAR_1->pred = 0;
  VAR_1->l[0] = VAR_3;
  VAR_1->r[0] = 0;
  VAR_1->n[0] = FUNC_0 (VAR_1, 1 << VAR_0);
  VAR_1->st[0] = 0;
  VAR_1->top = 0;

  if (VAR_1->n[0] == 0) {
    VAR_1->top = -1;
  }

  FUNC_1 (VAR_1);

  while (VAR_1->val > VAR_5) {
    FUNC_1 (VAR_1);
  }
}
