
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; int* l; scalar_t__ top; scalar_t__* st; scalar_t__* n; scalar_t__* r; scalar_t__ pred; int * ptr; } ;
typedef TYPE_1__ iCode_iterator ;
typedef int * iCode ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (iCode_iterator *VAR_0, iCode VAR_1, int VAR_2, int VAR_3, int VAR_4) {
  VAR_0->ptr = VAR_1;

  if (VAR_1 == ((void*)0)) {
    VAR_0->val = 0;
    return;
  }

  VAR_0->pred = 0;
  VAR_0->l[0] = VAR_2;
  VAR_0->r[0] = 0;
  VAR_0->n[0] = FUNC_0 (VAR_0, VAR_2) + 1;
  VAR_0->st[0] = 0;
  VAR_0->top = 0;

  FUNC_1 (VAR_0);

  while (VAR_0->val > VAR_4) {
    FUNC_1 (VAR_0);
  }
}
