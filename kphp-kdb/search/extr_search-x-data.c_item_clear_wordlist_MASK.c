
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int word; struct tree* next; } ;
typedef struct tree tree_t ;
struct item {struct tree* words; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct item*) ;

__attribute__((used)) static void FUNC_1 (struct item *VAR_1) {
  struct tree *VAR_2 = VAR_1->words;
  while (VAR_2) {
    tree_t *VAR_3 = VAR_2->next;
    VAR_0 = FUNC_0 (VAR_0, VAR_2->word, VAR_1);
    VAR_2 = VAR_3;
  }
  VAR_1->words = 0;
}
