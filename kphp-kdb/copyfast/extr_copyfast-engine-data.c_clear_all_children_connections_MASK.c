
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct relative {int type; TYPE_1__* prev; struct relative* next; } ;
struct TYPE_4__ {struct relative* next; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1 (void) {
  struct relative *VAR_1 = VAR_0.next;
  while (VAR_1->type != -1) {
    VAR_1 = VAR_1->next;
    if (VAR_1->prev->type == 0) {
      FUNC_0 (VAR_1->prev, 1);
    }
  }
}
