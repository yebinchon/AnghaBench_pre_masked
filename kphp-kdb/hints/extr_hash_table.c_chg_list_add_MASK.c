
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* change_list_ptr ;
struct TYPE_6__ {int type; int x; struct TYPE_6__* next; int number; int timestamp; } ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;

static inline change_list_ptr FUNC_1 (change_list_ptr *VAR_1, change_list_ptr *VAR_2, int VAR_3, int VAR_4) {
  static int VAR_5 = 0;

  change_list_ptr VAR_6 = FUNC_0();
  VAR_6->type = VAR_3;
  VAR_6->x = VAR_4;
  VAR_6->timestamp = VAR_0;
  VAR_6->number = VAR_5++;

  VAR_6->next = ((void*)0);
  if (*VAR_1 == ((void*)0)) {
    *VAR_1 = VAR_6;
  } else {
    (*VAR_2)->next = VAR_6;
  }
  *VAR_2 = VAR_6;

  return VAR_6;
}
