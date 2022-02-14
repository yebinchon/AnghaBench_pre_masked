
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pc_entry_struct {int dummy; } ;
typedef TYPE_1__* pc_t ;
typedef TYPE_2__* pc_entry_t ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_6__ {int * tail; TYPE_2__* head; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(pc_t VAR_0) {
  if (VAR_0) {
    pc_entry_t VAR_1 = VAR_0->head;
    while (VAR_1) {
      pc_entry_t VAR_2 = VAR_1->next;
      FUNC_1(VAR_1, 0, sizeof(struct pc_entry_struct));
      FUNC_0(VAR_1);
      VAR_1 = VAR_2;
    }
    VAR_0->head = ((void*)0);
    VAR_0->tail = ((void*)0);
  }
}
