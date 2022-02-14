
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tl_type {int dummy; } ;
struct tl_combinator_tree {scalar_t__ type; int type_len; scalar_t__ act; long long type_flags; TYPE_1__* right; struct tl_combinator_tree* left; struct tl_type* data; } ;
struct TYPE_2__ {scalar_t__ type; scalar_t__ type_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tl_type*,int,long long) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_2 (struct tl_combinator_tree *VAR_5, int VAR_6, long long VAR_7) {
  FUNC_0 (VAR_5->type == VAR_4);
  FUNC_0 (VAR_5->type_len < 0);
  FUNC_0 (VAR_5->act == VAR_0 || VAR_5->act == VAR_1);
  VAR_5->type_len = VAR_6;
  VAR_5->type_flags = VAR_7;
  if (VAR_5->act == VAR_1) {
    struct tl_type *VAR_8 = VAR_5->data;
    FUNC_0 (VAR_8);
    return FUNC_1 (VAR_8, VAR_6, VAR_7);
  }
  FUNC_0 ((VAR_5->right->type == VAR_4 && VAR_5->right->type_len == 0) || VAR_5->right->type == VAR_2 || VAR_5->right->type == VAR_3);
  return FUNC_2 (VAR_5->left, VAR_6 + 1, VAR_7 * 2 + (VAR_5->right->type == VAR_2 || VAR_5->right->type == VAR_3));
}
