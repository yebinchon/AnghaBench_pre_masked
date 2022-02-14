
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_combinator {int args_num; char* id; scalar_t__ var_num; int args; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,int,scalar_t__*) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;

int FUNC_5 (struct tl_combinator *VAR_2) {
  VAR_2->args_num = FUNC_3 ();
  if (VAR_1 >= 2) {
    FUNC_1 (VAR_0, "c->id = %s, c->args_num = %d\n", VAR_2->id, VAR_2->args_num);
  }
  if (VAR_2->args_num < 0 || VAR_2->args_num > 1000) {
    return -1;
  }
  VAR_2->args = FUNC_4 (sizeof (void *) * VAR_2->args_num);
  VAR_2->var_num = 0;
  FUNC_0 (sizeof (void *) * VAR_2->args_num);
  return FUNC_2 (VAR_2->args, VAR_2->args_num, &VAR_2->var_num);
}
