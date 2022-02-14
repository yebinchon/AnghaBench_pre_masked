
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; struct TYPE_5__* head; struct TYPE_5__* metrics; struct TYPE_5__* data; struct TYPE_5__* next; } ;
typedef TYPE_1__ GSubList ;
typedef TYPE_1__ GSubItem ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1 (GSubList * VAR_0)
{
  GSubItem *VAR_1 = ((void*)0);
  GSubItem *VAR_2 = ((void*)0);

  if (VAR_0 != ((void*)0) && VAR_0->size == 0)
    goto clear;
  if (VAR_0->size == 0)
    return;

  for (VAR_1 = VAR_0->head; VAR_1; VAR_1 = VAR_2) {
    VAR_2 = VAR_1->next;
    FUNC_0 (VAR_1->metrics->data);
    FUNC_0 (VAR_1->metrics);
    FUNC_0 (VAR_1);
  }
clear:
  VAR_0->head = ((void*)0);
  VAR_0->size = 0;
  FUNC_0 (VAR_0);
}
