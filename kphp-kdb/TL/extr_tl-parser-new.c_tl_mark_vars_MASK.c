
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_var {int flags; } ;
struct tl_combinator_tree {scalar_t__ act; char* data; struct tl_combinator_tree* right; struct tl_combinator_tree* left; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tl_var*) ;
 int FUNC_1 (char*) ;
 struct tl_var* FUNC_2 (char*,int ) ;

void FUNC_3 (struct tl_combinator_tree *VAR_1) {
  if (!VAR_1) { return; }
  if (VAR_1->act == VAR_0) {
    char *VAR_2 = ((struct tl_combinator_tree *)(VAR_1->data))->data;
    struct tl_var *VAR_3 = FUNC_2 (VAR_2, FUNC_1 (VAR_2));
    FUNC_0 (VAR_3);
    VAR_3->flags |= 1;
  }
  FUNC_3 (VAR_1->left);
  FUNC_3 (VAR_1->right);
}
