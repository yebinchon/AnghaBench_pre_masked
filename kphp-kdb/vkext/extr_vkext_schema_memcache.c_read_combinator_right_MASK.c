
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator {int result; int var_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

int FUNC_4 (struct tl_combinator *VAR_3) {
  if (VAR_2 >= 2) {
    if (FUNC_3 () != VAR_1 || FUNC_2 ()) {
      return -1;
    }
    VAR_3->result = FUNC_1 (&VAR_3->var_num);
  } else {
    if (FUNC_3 () != VAR_0 || FUNC_2 ()) {
      return -1;
    }
    VAR_3->result = FUNC_0 (&VAR_3->var_num);
  }
  if (!VAR_3->result) {
    return -1;
  }
  return 1;
}
