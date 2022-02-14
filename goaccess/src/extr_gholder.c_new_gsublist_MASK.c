
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; int * tail; int * head; } ;
typedef TYPE_1__ GSubList ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static GSubList *
FUNC_1 (void)
{
  GSubList *VAR_0 = FUNC_0 (sizeof (GSubList));
  VAR_0->head = ((void*)0);
  VAR_0->tail = ((void*)0);
  VAR_0->size = 0;

  return VAR_0;
}
