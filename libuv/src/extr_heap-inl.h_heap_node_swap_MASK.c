
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct heap_node {struct heap_node* right; struct heap_node* parent; struct heap_node* left; } ;
struct heap {struct heap_node* min; } ;



__attribute__((used)) static void FUNC_0(struct heap* VAR_0,
                           struct heap_node* VAR_1,
                           struct heap_node* VAR_2) {
  struct heap_node* VAR_3;
  struct heap_node VAR_4;

  VAR_4 = *VAR_1;
  *VAR_1 = *VAR_2;
  *VAR_2 = VAR_4;

  VAR_1->parent = VAR_2;
  if (VAR_2->left == VAR_2) {
    VAR_2->left = VAR_1;
    VAR_3 = VAR_2->right;
  } else {
    VAR_2->right = VAR_1;
    VAR_3 = VAR_2->left;
  }
  if (VAR_3 != ((void*)0))
    VAR_3->parent = VAR_2;

  if (VAR_1->left != ((void*)0))
    VAR_1->left->parent = VAR_1;
  if (VAR_1->right != ((void*)0))
    VAR_1->right->parent = VAR_1;

  if (VAR_2->parent == ((void*)0))
    VAR_0->min = VAR_2;
  else if (VAR_2->parent->left == VAR_1)
    VAR_2->parent->left = VAR_2;
  else
    VAR_2->parent->right = VAR_2;
}
