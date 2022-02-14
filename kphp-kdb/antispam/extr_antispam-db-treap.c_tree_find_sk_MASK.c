
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trie_node_t ;
struct TYPE_3__ {int x; int * data; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef TYPE_1__ tree_t ;



trie_node_t *FUNC_0 (tree_t *VAR_0, int VAR_1) {
  while (VAR_0 && VAR_0->x != VAR_1) {
    VAR_0 = (VAR_0->x > VAR_1 ? VAR_0->left : VAR_0->right);
  }
  return VAR_0 ? VAR_0->data : 0;
}
