
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; void* data; } ;
typedef TYPE_1__ GSLList ;


 TYPE_1__* FUNC_0 (int) ;

GSLList *
FUNC_1 (void *VAR_0)
{
  GSLList *VAR_1 = FUNC_0 (sizeof (GSLList));
  VAR_1->data = VAR_0;
  VAR_1->next = ((void*)0);

  return VAR_1;
}
