
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int restore_list ;
struct TYPE_3__ {int restore_info; } ;
typedef TYPE_1__ data ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;

void FUNC_5 (data *VAR_0, int VAR_1, int VAR_2) {

  restore_list **VAR_3 = (restore_list **)FUNC_0 (&VAR_0->restore_info, VAR_2);
  if (*VAR_3 == ((void*)0)) {
    *VAR_3 = FUNC_3 (VAR_2);
  }
  restore_list *VAR_4 = *VAR_3;

  restore_list **VAR_5 = (restore_list **) FUNC_2 (&VAR_0->restore_info, VAR_1);
  restore_list *VAR_6;
  if (VAR_5 == ((void*)0)) {
    VAR_6 = FUNC_3 (VAR_1);
  } else {
    VAR_6 = *VAR_5;
    FUNC_1 (&VAR_0->restore_info, VAR_1);
  }

  FUNC_4 (VAR_4, VAR_6);
}
