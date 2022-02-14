
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef int treeref_t ;
struct tree_subiterator {int* S; long sp; int mult; int pos; } ;
struct intree_node {int left; int z; int x; } ;


 long VAR_0 ;
 struct intree_node* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

void FUNC_2 (struct tree_subiterator *VAR_2, treeref_t VAR_3) {
  FUNC_1 (VAR_3);
  long VAR_4 = 0;
  treespace_t VAR_5 = VAR_1;
  struct intree_node *VAR_6;
  do {
    VAR_6 = FUNC_0 (VAR_3);
    VAR_2->S[VAR_4++] = VAR_3;
    VAR_3 = VAR_6->left;
  } while (VAR_3);
  VAR_2->pos = VAR_6->x;
  VAR_2->mult = VAR_6->z;
  VAR_2->sp = VAR_4;
  FUNC_1 (VAR_4 <= VAR_0);
}
