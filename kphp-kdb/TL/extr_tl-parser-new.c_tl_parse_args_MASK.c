
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tree {scalar_t__ type; int nc; TYPE_1__** c; } ;
struct tl_combinator_tree {int dummy; } ;
struct TYPE_3__ {int type; } ;


 int FUNC_0 (int) ;
 struct tl_combinator_tree* FUNC_1 (TYPE_1__*) ;
 struct tl_combinator_tree* FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_3 (int,char*,scalar_t__) ;

struct tl_combinator_tree *FUNC_4 (struct tree *VAR_2) {
  FUNC_3 (2, "tl_parse_args T->type = %d\n", VAR_2->type - VAR_1);
  FUNC_0 (VAR_2->type == VAR_0);
  FUNC_0 (VAR_2->nc == 1);
  switch (VAR_2->c[0]->type) {
  case 131:
    return FUNC_1 (VAR_2->c[0]);
  case 130:
    return FUNC_2 (VAR_2->c[0]);
  case 129:
    return FUNC_1 (VAR_2->c[0]);
  case 128:
    return FUNC_1 (VAR_2->c[0]);
  default:
    FUNC_0 (0);
    return 0;
  }
}
