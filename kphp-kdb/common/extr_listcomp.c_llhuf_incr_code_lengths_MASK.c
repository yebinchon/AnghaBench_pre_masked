
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_list_entry {size_t leaf_value; struct ccp_list_entry* right; struct ccp_list_entry* left; } ;



__attribute__((used)) static void FUNC_0 (int *VAR_0, struct ccp_list_entry *VAR_1) {
  if (VAR_1->leaf_value >= 0) {
    VAR_0[VAR_1->leaf_value]++;
  } else {
    FUNC_0 (VAR_0, VAR_1->left);
    FUNC_0 (VAR_0, VAR_1->right);
  }
}
