
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ write_thread_arg_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

int FUNC_2 (void) {
  int VAR_1 = 0;
  write_thread_arg_t *VAR_2 = VAR_0;
  while (VAR_2 != ((void*)0)) {
    write_thread_arg_t *VAR_3 = VAR_2->next;
    VAR_1 += FUNC_1 (VAR_2);
    VAR_2 = VAR_3;
  }
  if (VAR_1) {
    FUNC_0 (2, "write_thread_check_all_completion returns %d.\n", VAR_1);
  }
  return VAR_1;
}
