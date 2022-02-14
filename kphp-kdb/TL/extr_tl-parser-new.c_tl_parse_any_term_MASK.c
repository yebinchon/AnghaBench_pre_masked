
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree {int type; } ;
struct tl_combinator_tree {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 struct tl_combinator_tree* FUNC_2 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_3 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_4 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_5 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_6 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_7 (struct tree*,int) ;
 struct tl_combinator_tree* FUNC_8 (struct tree*,int) ;
struct tl_combinator_tree *FUNC_9 (struct tree *VAR_1, int VAR_2) {
  switch (VAR_1->type) {
  case 129:
    return FUNC_8 (VAR_1, VAR_2);
  case 133:
    return FUNC_5 (VAR_1, VAR_2);
  case 131:
    return FUNC_7 (VAR_1, VAR_2);
  case 135:
    return FUNC_2 (VAR_1, VAR_2);
  case 132:
    return FUNC_6 (VAR_1, VAR_2);
  case 134:
    return FUNC_4 (VAR_1, VAR_2);
  case 130:
  case 128:
    return FUNC_3 (VAR_1, VAR_2);
  default:
    FUNC_1 (VAR_0, "type = %d\n", VAR_1->type);
    FUNC_0 (0);
    return 0;
  }
}
