
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* change_list_ptr ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int) ;

change_list_ptr FUNC_2 (void) {
  if (VAR_0 == ((void*)0)) {
    FUNC_1 (10000);
  }

  FUNC_0 (VAR_0 != ((void*)0));

  change_list_ptr VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  VAR_1->next = ((void*)0);

  return VAR_1;
}
