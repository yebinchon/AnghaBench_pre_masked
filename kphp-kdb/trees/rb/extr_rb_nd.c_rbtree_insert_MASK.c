
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int x; struct TYPE_7__* left; struct TYPE_7__* right; } ;
typedef TYPE_1__ rbtree_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int,int,int*) ;

__attribute__((used)) static rbtree_t *FUNC_3 (rbtree_t *VAR_0, int VAR_1, int VAR_2, int *VAR_3) {
  rbtree_t *VAR_4[70];
  rbtree_t *VAR_5, *VAR_6, *VAR_7;
  int VAR_8;

  VAR_1 <<= 1;


  if (!VAR_0) {
    return FUNC_2 (VAR_1, VAR_2, VAR_3);
  }

  VAR_8 = 0;
  VAR_5 = VAR_0;
  while (VAR_5) {
    VAR_4[VAR_8++] = VAR_5;
    if (VAR_5->x < VAR_1) {
      VAR_5 = VAR_5->right;
    } else if (VAR_5->x > VAR_1 + 1) {
      VAR_5 = VAR_5->left;
    } else {

      return VAR_5;
    }
  }

  VAR_6 = FUNC_2 (VAR_1+1, VAR_2, VAR_3);

  while (VAR_8 > 0) {
    VAR_5 = VAR_4[--VAR_8];


    if (VAR_1 < VAR_5->x) {

      if (FUNC_1(VAR_5)) {

        VAR_5->left = VAR_6;
        return VAR_0;
      }
      if (!VAR_8) {

        FUNC_0(VAR_5);
        VAR_5->left = VAR_6;
        return VAR_0;
      }
      VAR_7 = VAR_4[--VAR_8];

      if (VAR_1 < VAR_7->x) {



        VAR_7->left = VAR_5->right;
        VAR_5->right = VAR_7;
        FUNC_0(VAR_6);
        VAR_6 = VAR_7;
      } else {


        VAR_5->right = VAR_6->left;
        FUNC_0(VAR_5);
        VAR_6->left = VAR_5;
        VAR_7->left = VAR_6->right;
        VAR_6->right = VAR_7;
      }
    } else {

      if (FUNC_1(VAR_5)) {

        VAR_5->right = VAR_6;
        return VAR_0;
      }
      if (!VAR_8) {

        FUNC_0(VAR_5);
        VAR_5->right = VAR_6;
        return VAR_0;
      }
      VAR_7 = VAR_4[--VAR_8];

      if (VAR_1 < VAR_7->x) {


        VAR_5->left = VAR_6->right;
        FUNC_0(VAR_5);
        VAR_6->right = VAR_5;
        VAR_7->right = VAR_6->left;
        VAR_6->left = VAR_7;
      } else {


        VAR_7->right = VAR_5->left;
        VAR_5->left = VAR_7;
        FUNC_0(VAR_6);
        VAR_6 = VAR_5;
      }
    }
  }

  return VAR_6;
}
