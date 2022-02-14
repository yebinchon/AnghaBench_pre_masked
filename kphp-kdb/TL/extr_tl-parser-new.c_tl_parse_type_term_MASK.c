
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

struct tl_combinator_tree *FUNC_4 (struct tree *VAR_3, int VAR_4) {
  FUNC_2 (VAR_3->type == VAR_2);
  FUNC_2 (VAR_3->nc == 1);
  struct tl_combinator_tree *VAR_5 = FUNC_3 (VAR_3->c[0], VAR_4);
  if (!VAR_5 || VAR_5->type != VAR_1) { if (VAR_5) { FUNC_0 ("type_term: found type %s\n", FUNC_1 (VAR_5->type)); } VAR_0; }
  return VAR_5;
}
