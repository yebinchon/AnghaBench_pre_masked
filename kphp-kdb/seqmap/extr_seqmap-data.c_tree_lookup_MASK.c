
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* right; struct item* left; int key; int key_len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int const*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int) ;

__attribute__((used)) static struct item *FUNC_3 (struct item *VAR_0, int VAR_1, const int *VAR_2) {
  int VAR_3;
  int VAR_4 = 1;
  int VAR_5 = 1;
  while (VAR_0 && (VAR_3 = FUNC_1 (VAR_1, VAR_2, VAR_0->key_len, VAR_0->key, FUNC_2 (VAR_4, VAR_5) - 1))) {

    VAR_0 = (VAR_3 < 0) ? VAR_0->left : VAR_0->right;
    if (VAR_3 < 0) {
      VAR_5 = -VAR_3;
    } else {
      FUNC_0 (VAR_3 > 0);
      VAR_4 = VAR_3;
    }
  }
  return VAR_0;
}
