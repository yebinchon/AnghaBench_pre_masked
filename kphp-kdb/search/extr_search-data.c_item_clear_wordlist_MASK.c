
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int word; struct tree* next; } ;
typedef struct tree tree_t ;
typedef int item_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1 (item_t *VAR_1, tree_t **VAR_2) {
  if (VAR_2 == ((void*)0)) {
    return;
  }
  struct tree *VAR_3 = *VAR_2;
  while (VAR_3) {
    tree_t *VAR_4 = VAR_3->next;
    VAR_0 = FUNC_0 (VAR_0, VAR_3->word, VAR_1);
    VAR_3 = VAR_4;
  }
  *VAR_2 = ((void*)0);
}
