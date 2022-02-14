
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator_tree {scalar_t__ type; scalar_t__ type_len; int act; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct tl_combinator_tree*,int ,int ) ;
 int FUNC_4 (struct tl_combinator_tree*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int,char*,int ,int ) ;

int FUNC_6 (struct tl_combinator_tree *VAR_1) {
  FUNC_4 (VAR_1);
  FUNC_5 (2, "finish_subtree. Type = %s. Act = %s\n", FUNC_2 (VAR_1->type), FUNC_0 (VAR_1->act));
  if (VAR_1->type != VAR_0) {
    return 1;
  }
  if (VAR_1->type_len >= 0) {
    if (VAR_1->type_len > 0) {
      FUNC_1 ("Not enough params\n");
      return 0;
    }
    return 1;
  }
  return FUNC_3 (VAR_1, 0, 0);
}
