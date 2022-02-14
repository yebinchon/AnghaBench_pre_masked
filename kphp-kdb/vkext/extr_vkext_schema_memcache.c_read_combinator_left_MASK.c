
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator {scalar_t__ args; scalar_t__ var_num; scalar_t__ args_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tl_combinator*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3 (struct tl_combinator *VAR_2) {

  int VAR_3 = FUNC_2 ();
  if (FUNC_1 ()) {
    return -1;
  }

  if (VAR_3 == VAR_1) {
    VAR_2->args_num = 0;
    VAR_2->var_num = 0;
    VAR_2->args = 0;
    return 1;
  } else if (VAR_3 == VAR_0) {
    return FUNC_0 (VAR_2);
  } else {
    return -1;
  }
}
