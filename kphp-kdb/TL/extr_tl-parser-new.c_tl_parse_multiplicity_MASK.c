
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ type; int nc; int * c; } ;
struct tl_combinator_tree {int dummy; } ;


 int FUNC_0 (int) ;
 struct tl_combinator_tree* FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;

struct tl_combinator_tree *FUNC_2 (struct tree *VAR_1) {
  FUNC_0 (VAR_1->type == VAR_0);
  FUNC_0 (VAR_1->nc == 1);
  return FUNC_1 (VAR_1->c[0], 0);
}
