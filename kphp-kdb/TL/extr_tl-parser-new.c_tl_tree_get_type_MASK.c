
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_type {int dummy; } ;
struct tl_combinator_tree {scalar_t__ type; scalar_t__ act; struct tl_type* data; struct tl_combinator_tree* left; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;

struct tl_type *FUNC_1 (struct tl_combinator_tree *VAR_4) {
  FUNC_0 (VAR_4->type == VAR_3);
  if (VAR_4->act == VAR_0) { return 0;}
  while (VAR_4->left) {
    VAR_4 = VAR_4->left;
    if (VAR_4->act == VAR_0) { return 0;}
    FUNC_0 (VAR_4->type == VAR_3);
  }
  FUNC_0 (VAR_4->act == VAR_1 || VAR_4->act == VAR_2 || VAR_4->act == VAR_0);
  return VAR_4->act == VAR_1 ? VAR_4->data : 0;
}
