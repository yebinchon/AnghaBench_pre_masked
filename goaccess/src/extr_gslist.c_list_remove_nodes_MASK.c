
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; struct TYPE_4__* next; } ;
typedef TYPE_1__ GSLList ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1 (GSLList * VAR_0)
{
  GSLList *VAR_1;
  while (VAR_0 != ((void*)0)) {
    VAR_1 = VAR_0->next;
    if (VAR_0->data)
      FUNC_0 (VAR_0->data);
    FUNC_0 (VAR_0);
    VAR_0 = VAR_1;
  }

  return 0;
}
