
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x1; int x2; struct TYPE_7__* right; struct TYPE_7__* middle; struct TYPE_7__* left; } ;
typedef TYPE_1__ tree23_t ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2 (tree23_t **VAR_0, int VAR_1) {
  tree23_t *VAR_2[100];
  tree23_t *VAR_3, *VAR_4, *VAR_5;
  int VAR_6;


  if (!*VAR_0) *VAR_0 = FUNC_0 (VAR_1);
  else {
    VAR_6 = 0;
    VAR_3 = *VAR_0;
    while (!(VAR_3->x1 & 1)) {
      VAR_2[VAR_6++] = VAR_3;
      if (VAR_1 < VAR_3->x1) {
        VAR_3 = VAR_3->left;
      } else
      if (VAR_1 > VAR_3->x2) {
        VAR_3 = VAR_3->right;
      } else {
        VAR_3 = VAR_3->middle;
      }
    }


    if (!(VAR_3->x2 & 1)) {

      if (VAR_1 < VAR_3->x1) {
        VAR_4 = FUNC_0 (VAR_1);
        VAR_1 = VAR_3->x1 & -2;
        VAR_3->x1 = VAR_3->x2 |= 1;
        VAR_5 = VAR_3;
      } else
      if (VAR_1 > VAR_3->x2) {
        VAR_5 = FUNC_0 (VAR_1);
        VAR_1 = VAR_3->x2;
        VAR_3->x2 = VAR_3->x1;
        VAR_4 = VAR_3;
      } else {
        VAR_5 = FUNC_0 (VAR_3->x2);
        VAR_3->x2 = VAR_3->x1;
        VAR_4 = VAR_3;
      }
    } else {

      if (VAR_1 < VAR_3->x1) {
        VAR_3->x2 = VAR_3->x1 & -2;
        VAR_3->x1 = VAR_1 | 1;
      } else {
        VAR_3->x2 = VAR_1;
      }
      return;
    }

    while (VAR_6) {
      VAR_3 = VAR_2[--VAR_6];
      if (!(VAR_3->x2 & 1)) {

        if (VAR_1 < VAR_3->x1) {

          VAR_4 = FUNC_1 (VAR_1, VAR_4, VAR_5);
          VAR_1 = VAR_3->x1;
          VAR_3->x1 = VAR_3->x2;
          VAR_3->x2 |= 1;
          VAR_3->left = VAR_3->middle;
          VAR_5 = VAR_3;
        } else
        if (VAR_1 > VAR_3->x2) {

          VAR_5 = FUNC_1 (VAR_1, VAR_4, VAR_5);
          VAR_1 = VAR_3->x2;
          VAR_3->right = VAR_3->middle;
          VAR_3->x2 = VAR_3->x1 | 1;
          VAR_4 = VAR_3;
        } else {

          VAR_5 = FUNC_1 (VAR_3->x2, VAR_5, VAR_3->right);
          VAR_3->right = VAR_4;
          VAR_3->x2 = VAR_3->x1 | 1;
          VAR_4 = VAR_3;
        }
      } else {

        if (VAR_1 < VAR_3->x1) {

          VAR_3->left = VAR_4;
          VAR_3->middle = VAR_5;
          VAR_3->x2 &= -2;
          VAR_3->x1 = VAR_1;
        } else {

          VAR_3->middle = VAR_4;
          VAR_3->right = VAR_5;
          VAR_3->x2 = VAR_1;
        }
        return;
      }

    };


    *VAR_0 = FUNC_1 (VAR_1, VAR_4, VAR_5);
  }
}
