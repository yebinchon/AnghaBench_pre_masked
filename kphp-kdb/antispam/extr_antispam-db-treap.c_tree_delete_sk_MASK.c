
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int trie_node_t ;
struct TYPE_8__ {int x; int * data; struct TYPE_8__* right; struct TYPE_8__* left; } ;
typedef TYPE_1__ tree_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

trie_node_t *FUNC_3 (tree_t **VAR_0, int VAR_1) {
  tree_t *VAR_2;
  trie_node_t *VAR_3 = 0;
  while (*VAR_0 && (*VAR_0)->x != VAR_1)
    VAR_0 = (VAR_1 < (*VAR_0)->x ? &(*VAR_0)->left : &(*VAR_0)->right);
  FUNC_0 (*VAR_0);

  VAR_2 = FUNC_1 ((*VAR_0)->left, (*VAR_0)->right);
  VAR_3 = (*VAR_0)->data;
  FUNC_2 (*VAR_0, sizeof (tree_t));
  *VAR_0 = VAR_2;
  return VAR_3;
}
