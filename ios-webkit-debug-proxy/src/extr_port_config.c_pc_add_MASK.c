
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pc_entry_struct {int dummy; } ;
typedef TYPE_1__* pc_t ;
typedef TYPE_2__* pc_entry_t ;
struct TYPE_6__ {char const* device_id; int min_port; int max_port; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* tail; TYPE_2__* head; } ;


 TYPE_2__* FUNC_0 (int) ;

void FUNC_1(pc_t VAR_0, const char *VAR_1, int VAR_2, int VAR_3) {
  pc_entry_t VAR_4 = FUNC_0(sizeof(struct pc_entry_struct));
  VAR_4->device_id = VAR_1;
  VAR_4->min_port = VAR_2;
  VAR_4->max_port = VAR_3;
  VAR_4->next = ((void*)0);
  if (VAR_0->tail) {
    VAR_0->tail->next = VAR_4;
  } else {
    VAR_0->head = VAR_4;
  }
  VAR_0->tail = VAR_4;
}
