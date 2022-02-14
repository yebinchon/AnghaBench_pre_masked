
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef void* treeref_t ;
struct tree_subiterator {int pos; long sp; void** S; int mult; } ;
struct intree_node {int x; int z; void* right; void* left; } ;


 int VAR_0 ;
 long VAR_1 ;
 struct intree_node* FUNC_0 (void*) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct tree_subiterator*) ;

int FUNC_3 (struct tree_subiterator *VAR_3, int VAR_4) {
  if (VAR_4 == VAR_3->pos + 1) {
    return FUNC_2 (VAR_3);
  }
  FUNC_1 (VAR_4 > VAR_3->pos && VAR_3->sp > 0);
  long VAR_5 = VAR_3->sp;
  treespace_t VAR_6 = VAR_2;
  struct intree_node *VAR_7;
  treeref_t VAR_8;
  while (VAR_5 > 1 && FUNC_0 (VAR_3->S[VAR_5-2])->x <= VAR_4) {
    VAR_5--;
  }
  VAR_7 = FUNC_0 (VAR_3->S[VAR_5-1]);
  if (VAR_7->x == VAR_4) {
    VAR_3->sp = VAR_5;
    VAR_3->mult = VAR_7->z;
    return VAR_3->pos = VAR_4;
  }
  VAR_5--;
  VAR_8 = VAR_7->right;
  while (VAR_8) {
    VAR_7 = FUNC_0 (VAR_8);
    if (VAR_4 < VAR_7->x) {
      VAR_3->S[VAR_5++] = VAR_8;
      VAR_8 = VAR_7->left;
    } else if (VAR_4 == VAR_7->x) {
      VAR_3->S[VAR_5++] = VAR_8;
      VAR_3->sp = VAR_5;
      VAR_3->mult = VAR_7->z;
      return VAR_3->pos = VAR_4;
    } else {
      VAR_8 = VAR_7->right;
    }
  }
  FUNC_1 (VAR_5 <= VAR_1);
  VAR_3->sp = VAR_5;
  if (!VAR_5) {
    return VAR_3->pos = VAR_0;
  }
  VAR_7 = FUNC_0 (VAR_3->S[VAR_5 - 1]);
  VAR_3->mult = VAR_7->z;
  return VAR_3->pos = VAR_7->x;
}
