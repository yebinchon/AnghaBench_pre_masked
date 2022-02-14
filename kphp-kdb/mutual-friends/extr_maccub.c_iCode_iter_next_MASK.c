
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int top; int val; int* l; int* r; int* n; int* st; int* s_val; } ;
typedef TYPE_1__ iCode_iterator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2 (iCode_iterator *VAR_0) {
  if (VAR_0->top == -1) {
    VAR_0->val = 0;
    return;
  }

  int *VAR_1 = VAR_0->l, *VAR_2 = VAR_0->r, *VAR_3 = VAR_0->n, VAR_4 = VAR_0->top, *VAR_5 = VAR_0->st, *VAR_6 = VAR_0->s_val;

  int VAR_7 = 1, VAR_8, VAR_9;
  while (VAR_7) {
    switch (VAR_5[VAR_4]) {
    case 0:
      VAR_8 = FUNC_1 (VAR_0, VAR_1[VAR_4] - VAR_2[VAR_4]), VAR_9 = VAR_3[VAR_4] / 2;
      VAR_6[VAR_4] = VAR_1[VAR_4] - VAR_8;
      VAR_5[VAR_4] = 1;
      if (VAR_9) {
        VAR_1[VAR_4 + 1] = VAR_1[VAR_4];
        VAR_2[VAR_4 + 1] = VAR_6[VAR_4] - 1;
        VAR_3[VAR_4 + 1] = VAR_9;
        VAR_5[++VAR_4] = 0;
      }
      break;

    case 1:
      VAR_0->val = VAR_6[VAR_4];
      VAR_5[VAR_4] = 2;
      VAR_7 = 0;
      break;

    case 2:
      VAR_5[VAR_4] = 3;
      if (VAR_3[VAR_4] > 2) {
        VAR_1[VAR_4 + 1] = VAR_6[VAR_4];
        VAR_2[VAR_4 + 1] = VAR_2[VAR_4];
        VAR_3[VAR_4 + 1] = VAR_3[VAR_4] - VAR_3[VAR_4] / 2 - 1;
        VAR_5[++VAR_4] = 0;
      }
      break;

    case 3:
      VAR_4--;
      break;

    default:
      FUNC_0 (0);
    }
    if (VAR_4 < 0) {
      VAR_0->val = 0;
      VAR_7 = 0;
    }
  }
  VAR_0->top = VAR_4;
}
