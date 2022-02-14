
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* change_list_ptr ;
struct TYPE_5__ {int * next; scalar_t__ timestamp; int * s; scalar_t__ x; scalar_t__ type; } ;


 TYPE_1__* FUNC_0 () ;

void FUNC_1 (change_list_ptr *VAR_0, change_list_ptr *VAR_1) {
  change_list_ptr VAR_2 = FUNC_0();
  VAR_2->type = 0;
  VAR_2->x = 0;
  VAR_2->s = ((void*)0);
  VAR_2->timestamp = 0;
  VAR_2->next = ((void*)0);
  *VAR_0 = *VAR_1 = VAR_2;
}
