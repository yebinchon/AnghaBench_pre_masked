
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* right; struct item* left; int key; int key_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int const*,int ,int ,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static struct item *FUNC_3 (struct item *VAR_0, int VAR_1, const int *VAR_2, int VAR_3, int VAR_4) {
  if (!VAR_0) {
    return 0;
  }
  int VAR_5 = FUNC_1 (VAR_1, VAR_2, VAR_0->key_len, VAR_0->key, FUNC_2 (VAR_3, VAR_4) - 1);
  if (VAR_5 == 0) { return VAR_0; }
  if (VAR_5 < 0) {
    FUNC_0 (-VAR_5 >= FUNC_2 (VAR_3, VAR_4));
    struct item *VAR_6 = FUNC_3 (VAR_0->left, VAR_1, VAR_2, VAR_3, -VAR_5);
    return VAR_6 ? VAR_6 : VAR_0;
  } else {
    FUNC_0 (VAR_5 >= FUNC_2 (VAR_3, VAR_4));
    return FUNC_3 (VAR_0->right, VAR_1, VAR_2, VAR_5, VAR_4);
  }
}
