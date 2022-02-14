
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ type; int nc; int * c; } ;
struct tl_combinator_tree {scalar_t__ type; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 struct tl_combinator_tree* FUNC_3 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

struct tl_combinator_tree *FUNC_4 (struct tree *VAR_4, int VAR_5) {
  FUNC_2 (VAR_4->type == VAR_1);
  FUNC_2 (VAR_4->nc == 1);
  struct tl_combinator_tree *VAR_6 = FUNC_3 (VAR_4->c[0], VAR_5);
  if (!VAR_6 || (VAR_6->type != VAR_2 && VAR_6->type != VAR_3)) { if (VAR_6) { FUNC_0 ("nat_term: found type %s\n", FUNC_1 (VAR_6->type)); }VAR_0; }
  return VAR_6;
}
