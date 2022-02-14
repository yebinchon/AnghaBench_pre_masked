
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int restore_list ;
struct TYPE_3__ {int restore_info; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (char*,int,int **) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

void FUNC_3 (data *VAR_0, int VAR_1) {
  restore_list **VAR_2 = (restore_list **)FUNC_1 (&VAR_0->restore_info, VAR_1);
  FUNC_0 ("list %d: %p\n", VAR_1, VAR_2);
  if (VAR_2 != ((void*)0)) {
    FUNC_2 (*VAR_2);
  }
}
