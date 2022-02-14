
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {struct item* right; struct item* left; int key; int key_len; } ;


 scalar_t__ FUNC_0 (int,int const*,int ,int ) ;
 int FUNC_1 (struct item*) ;

__attribute__((used)) static void FUNC_2 (struct item **VAR_0, struct item **VAR_1, struct item *VAR_2, int VAR_3, const int *VAR_4) {
  if (!VAR_2) { *VAR_0 = *VAR_1 = 0; return; }
  if (FUNC_0 (VAR_3, VAR_4, VAR_2->key_len, VAR_2->key) < 0) {
    *VAR_1 = VAR_2;
    FUNC_2 (VAR_0, &VAR_2->left, VAR_2->left, VAR_3, VAR_4);
  } else {
    *VAR_0 = VAR_2;
    FUNC_2 (&VAR_2->right, VAR_1, VAR_2->right, VAR_3, VAR_4);
  }
  FUNC_1 (VAR_2);
}
