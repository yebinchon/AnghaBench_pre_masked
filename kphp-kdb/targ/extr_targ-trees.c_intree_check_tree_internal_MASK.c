
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int treespace_t ;
typedef int treeref_t ;
struct intree_node {int x; int right; int left; } ;


 struct intree_node* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2 (treespace_t VAR_0, treeref_t VAR_1, int VAR_2, int VAR_3) {
  if (!VAR_1) {
    return 0;
  }
  struct intree_node *VAR_4 = FUNC_0 (VAR_1);
  FUNC_1 (VAR_4->x >= VAR_2 && VAR_4->x <= VAR_3);
  return FUNC_2 (VAR_0, VAR_4->left, VAR_2, VAR_4->x - 1) + FUNC_2 (VAR_0, VAR_4->right, VAR_4->x + 1, VAR_3) + 1;
}
