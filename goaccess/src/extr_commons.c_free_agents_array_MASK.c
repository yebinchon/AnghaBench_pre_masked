
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; struct TYPE_4__* items; struct TYPE_4__* agent; } ;
typedef TYPE_1__ GAgents ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (GAgents * VAR_0)
{
  int VAR_1;

  if (VAR_0 == ((void*)0))
    return;


  for (VAR_1 = 0; VAR_1 < VAR_0->size; ++VAR_1)
    FUNC_0 (VAR_0->items[VAR_1].agent);
  if (VAR_0->items)
    FUNC_0 (VAR_0->items);
  FUNC_0 (VAR_0);
}
