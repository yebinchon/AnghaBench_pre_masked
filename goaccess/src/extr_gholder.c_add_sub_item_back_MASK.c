
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* prev; struct TYPE_6__* next; } ;
struct TYPE_5__ {int size; TYPE_2__* tail; TYPE_2__* head; } ;
typedef TYPE_1__ GSubList ;
typedef TYPE_2__ GSubItem ;
typedef int GModule ;
typedef int GMetrics ;


 TYPE_2__* FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1 (GSubList * VAR_0, GModule VAR_1, GMetrics * VAR_2)
{
  GSubItem *VAR_3 = FUNC_0 (VAR_1, VAR_2);
  if (VAR_0->tail) {
    VAR_0->tail->next = VAR_3;
    VAR_3->prev = VAR_0->tail;
    VAR_0->tail = VAR_3;
  } else {
    VAR_0->head = VAR_3;
    VAR_0->tail = VAR_3;
  }
  VAR_0->size++;
}
