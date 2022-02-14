
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {scalar_t__ type; int nc; int * c; } ;
struct tl_combinator_tree {int dummy; } ;


 struct tl_combinator_tree* VAR_0 ;
 int FUNC_0 (struct tl_combinator_tree*) ;
 int FUNC_1 (int ,struct tl_combinator_tree*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int,char*,int) ;

struct tl_combinator_tree *FUNC_5 (struct tree *VAR_2, int VAR_3) {
  FUNC_2 (VAR_2->type == VAR_1);
  FUNC_2 (VAR_2->nc >= 1);
  FUNC_4 (2, "tl_parse_expr: s = %d\n", VAR_3);
  int VAR_4;
  FUNC_0 (VAR_0);
  for (VAR_4 = 0; VAR_4 < VAR_2->nc; VAR_4++) {
    FUNC_1 (FUNC_3 (VAR_2->c[VAR_4], VAR_3), VAR_0);
    VAR_3 = 0;
  }
  return VAR_0;
}
