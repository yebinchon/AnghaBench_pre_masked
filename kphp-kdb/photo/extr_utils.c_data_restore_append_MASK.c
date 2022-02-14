
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int restore_list ;
struct TYPE_3__ {int restore_info; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

void FUNC_8 (data *VAR_0, int VAR_1, int VAR_2) {
  restore_list **VAR_3 = (restore_list **)FUNC_3 (&VAR_0->restore_info, VAR_2);
  if (VAR_3 != ((void*)0)) {
    restore_list *VAR_4 = *VAR_3;
    FUNC_0 (!FUNC_6 (VAR_4));

    restore_list **VAR_5 = (restore_list **)FUNC_1 (&VAR_0->restore_info, VAR_1);
    if (*VAR_5 == ((void*)0)) {
      *VAR_5 = FUNC_4(VAR_1);
    }
    restore_list *VAR_6 = *VAR_5;

    VAR_4 = FUNC_7 (VAR_4);
    FUNC_5 (VAR_6, VAR_4);

    FUNC_2 (&VAR_0->restore_info, VAR_2);
  }
}
