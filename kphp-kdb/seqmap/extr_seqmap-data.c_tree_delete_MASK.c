
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* right; struct item* left; int key; int key_len; } ;


 int FUNC_0 (struct item*) ;
 int FUNC_1 (int,int const*,int ,int ) ;
 struct item* FUNC_2 (struct item*,struct item*) ;
 int FUNC_3 (struct item*) ;

__attribute__((used)) static struct item *FUNC_4 (struct item *VAR_0, int VAR_1, const int *VAR_2) {
  int VAR_3;
  FUNC_0 (VAR_0);
  if (!(VAR_3 = FUNC_1 (VAR_1, VAR_2, VAR_0->key_len, VAR_0->key))) {
    struct item *VAR_4 = FUNC_2 (VAR_0->left, VAR_0->right);
    FUNC_3 (VAR_4);
    return VAR_4;
  }
  if (VAR_3 < 0) {
    VAR_0->left = FUNC_4 (VAR_0->left, VAR_1, VAR_2);
  } else {
    VAR_0->right = FUNC_4 (VAR_0->right, VAR_1, VAR_2);
  }
  FUNC_3 (VAR_0);
  return VAR_0;
}
