
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* answers_list_ptr ;
struct TYPE_5__ {TYPE_1__* E; } ;
struct TYPE_4__ {int mark; } ;


 void** FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_0 ;

int FUNC_2 (int VAR_1, int VAR_2) {
  void **VAR_3 = FUNC_0 (&VAR_0, VAR_1);
  if (VAR_3 != ((void*)0)) {
    answers_list_ptr VAR_4 = *VAR_3;
    if (VAR_4->E->mark != VAR_2) {
      FUNC_1 (VAR_4, -1);
      VAR_4->E->mark = VAR_2;
      FUNC_1 (VAR_4, 1);
    }
  }

  return 1;
}
