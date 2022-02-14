
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

void FUNC_1 (restore_list *VAR_0, restore_list *VAR_1) {

  restore_list *VAR_2 = VAR_1->prev;
  FUNC_0 (VAR_0->prev, VAR_1);
  FUNC_0 (VAR_2, VAR_0);
}
