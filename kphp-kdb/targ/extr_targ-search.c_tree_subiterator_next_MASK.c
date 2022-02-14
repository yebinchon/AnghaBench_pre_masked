
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef scalar_t__ treeref_t ;
struct tree_subiterator {long sp; int pos; int mult; scalar_t__* S; } ;
struct intree_node {int x; int z; scalar_t__ left; scalar_t__ right; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct intree_node* FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2 (struct tree_subiterator *VAR_3) {
  FUNC_1 (VAR_3->sp > 0);
  long VAR_4 = VAR_3->sp;
  treespace_t VAR_5 = VAR_2;
  treeref_t VAR_6 = VAR_3->S[--VAR_4];
  struct intree_node *VAR_7 = FUNC_0 (VAR_6);
  VAR_6 = VAR_7->right;
  while (VAR_6) {
    VAR_7 = FUNC_0 (VAR_6);
    VAR_3->S[VAR_4++] = VAR_6;
    VAR_6 = VAR_7->left;
  }
  FUNC_1 (VAR_4 <= VAR_1);
  VAR_3->sp = VAR_4;
  if (!VAR_4) {
    return VAR_3->pos = VAR_0;
  }
  VAR_7 = FUNC_0 (VAR_3->S[VAR_4 - 1]);
  VAR_3->mult = VAR_7->z;
  return VAR_3->pos = VAR_7->x;
}
