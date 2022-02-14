
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {scalar_t__ y; int key; int key_len; struct item* right; struct item* left; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct item**,struct item**,struct item*,int ,int ) ;
 int FUNC_3 (struct item*) ;

__attribute__((used)) static struct item *FUNC_4 (struct item *VAR_0, struct item *VAR_1) {
  if (!VAR_0) {
    FUNC_3 (VAR_1);
    return VAR_1;
  }
  int VAR_2;
  FUNC_0 (VAR_2 = FUNC_1 (VAR_1->key_len, VAR_1->key, VAR_0->key_len, VAR_0->key));
  if (VAR_0->y >= VAR_1->y) {
    if (VAR_2 < 0) {
      VAR_0->left = FUNC_4 (VAR_0->left, VAR_1);
    } else {
      VAR_0->right = FUNC_4 (VAR_0->right, VAR_1);
    }
    FUNC_3 (VAR_0);
    return VAR_0;
  }
  FUNC_2 (&VAR_1->left, &VAR_1->right, VAR_0, VAR_1->key_len, VAR_1->key);
  FUNC_3 (VAR_1);
  return VAR_1;
}
