
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct tl_combinator_tree {int dummy; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 struct tl_combinator_tree* VAR_0 ;
 int FUNC_0 (struct tl_combinator_tree*) ;
 int FUNC_1 (int ,struct tl_combinator_tree*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,char*,int) ;

struct tl_combinator_tree *FUNC_5 (struct tree *VAR_3, int VAR_4) {
  FUNC_4 (2, "tl_parse_term: s = %d\n", VAR_4);
  FUNC_2 (VAR_3->type == VAR_2);
  int VAR_5 = 0;
  while (VAR_5 < VAR_3->nc && VAR_3->c[VAR_5]->type == VAR_1) { VAR_5 ++; VAR_4 ++; }
  FUNC_2 (VAR_5 < VAR_3->nc);
  FUNC_0 (VAR_0);
  while (VAR_5 < VAR_3->nc) {
    FUNC_1 (FUNC_3 (VAR_3->c[VAR_5], VAR_4), VAR_0);
    VAR_4 = 0;
    VAR_5 ++;
  }
  return VAR_0;
}
