
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int trie_node_t ;
struct TYPE_7__ {int y; int x; struct TYPE_7__* right; struct TYPE_7__* left; int * data; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__**,TYPE_1__**,TYPE_1__*,int) ;

void FUNC_3 (tree_t **VAR_0, int VAR_1, trie_node_t *VAR_2) {
  tree_t *VAR_3;
  int VAR_4 = FUNC_0();
  while (*VAR_0 && (*VAR_0)->y >= VAR_4) {
    VAR_0 = (VAR_1 < (*VAR_0)->x ? &(*VAR_0)->left : &(*VAR_0)->right);
  }
  VAR_3 = FUNC_1 (VAR_1, VAR_4);
  VAR_3->data = VAR_2;
  FUNC_2 (&VAR_3->left, &VAR_3->right, *VAR_0, VAR_1);
  *VAR_0 = VAR_3;
}
