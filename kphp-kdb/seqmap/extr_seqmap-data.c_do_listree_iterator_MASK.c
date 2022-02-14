
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* right; int min_index_pos; int key; int key_len; struct item* left; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct item*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct item*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct item*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int const*) ;
 int FUNC_6 (int ,int ) ;

int FUNC_7 (struct item *VAR_6, int VAR_7, const int *VAR_8, int VAR_9, int *VAR_10) {
  if (!VAR_6) { return 0; }
  int VAR_11 = FUNC_5 (VAR_6->key_len, VAR_6->key, VAR_7, VAR_8);
  if (VAR_11 < 0) {
    return FUNC_7 (VAR_6->right, VAR_7, VAR_8, VAR_9, VAR_10);
  } else {
    int VAR_12 = FUNC_7 (VAR_6->left, VAR_7, VAR_8, VAR_9, VAR_10);
    if (VAR_12 < 0) { return VAR_12; }
    VAR_11 = FUNC_5 (VAR_6->key_len, VAR_6->key, VAR_9, VAR_10);
    if (VAR_11 > 0) { return 0; }
    int VAR_13 = FUNC_1 (VAR_6);
    if (FUNC_0 (VAR_6) == VAR_3) {
      if (FUNC_4 (VAR_6->key_len, VAR_6->key) == -2) {
        return -2;
      }
    }
    FUNC_3 (FUNC_0 (VAR_6) == VAR_2);
    VAR_12 = FUNC_6 (VAR_5, VAR_6->min_index_pos);
    if (VAR_12 < 0) { return VAR_12; }
    VAR_5 = VAR_6->min_index_pos;
    if (VAR_13 == VAR_1) {
      int VAR_14 = FUNC_2 (VAR_6);
      if (VAR_14 < 0) { return VAR_14; }
    } else if (VAR_13 == VAR_4) {
      int VAR_15 = FUNC_2 (VAR_6);
      if (VAR_15 < 0) { return VAR_15; }
      VAR_5 ++;
    } else {
      FUNC_3 (VAR_13 == VAR_0);
      VAR_5 ++;
    }
    return FUNC_7 (VAR_6->right, VAR_7, VAR_8, VAR_9, VAR_10);
  }
}
