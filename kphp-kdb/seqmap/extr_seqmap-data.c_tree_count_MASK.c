
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* left; struct item* right; scalar_t__ plus_unsure; scalar_t__ minus_unsure; scalar_t__ delta; int key; int key_len; } ;


 int FUNC_0 (int ,int ,int,int const*) ;
 int FUNC_1 (struct item*,int*) ;

__attribute__((used)) static void FUNC_2 (struct item *VAR_0, int VAR_1, const int *VAR_2, int VAR_3, const int *VAR_4, int VAR_5[3]) {
  struct item *VAR_6 = VAR_0;
  struct item *VAR_7 = VAR_0;
  while (VAR_6 || VAR_7) {
    int VAR_8 = VAR_6 ? FUNC_0 (VAR_6->key_len, VAR_6->key, VAR_1, VAR_2) : 0;
    int VAR_9 = VAR_7 ? FUNC_0 (VAR_7->key_len, VAR_7->key, VAR_3, VAR_4) : 0;
    if (VAR_6 == VAR_7) {
      if (VAR_8 <= 0) {
        if (VAR_8 == 0) {
          FUNC_1 (VAR_6, VAR_5);
        }
        VAR_6 = VAR_7 = VAR_6->right;
      } else if (VAR_9 >= 0) {
        if (VAR_9 == 0) {
          FUNC_1 (VAR_6, VAR_5);
        }
        VAR_6 = VAR_7 = VAR_6->left;
      } else {
        FUNC_1 (VAR_6, VAR_5);
        VAR_6 = VAR_6->left;
        VAR_7 = VAR_7->right;
      }
    } else {
      if (VAR_6) {
        if (VAR_8 >= 0) {
          if (VAR_6->right) {
            VAR_5[0] += VAR_6->right->delta;
            VAR_5[1] += VAR_6->right->minus_unsure;
            VAR_5[2] += VAR_6->right->plus_unsure;
          }
          FUNC_1 (VAR_6, VAR_5);
          VAR_6 = VAR_6->left;
        } else {
          VAR_6 = VAR_6->right;
        }
      }
      if (VAR_7) {
        if (VAR_9 <= 0) {
          if (VAR_7->left) {
            VAR_5[0] += VAR_7->left->delta;
            VAR_5[1] += VAR_7->left->minus_unsure;
            VAR_5[2] += VAR_7->left->plus_unsure;
          }
          FUNC_1 (VAR_7, VAR_5);
          VAR_7 = VAR_7->right;
        } else {
          VAR_7 = VAR_7->left;
        }
      }
    }
  }
}
