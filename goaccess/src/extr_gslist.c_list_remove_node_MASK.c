
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* data; struct TYPE_5__* next; } ;
typedef TYPE_1__ GSLList ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1 (GSLList ** VAR_0, GSLList * VAR_1)
{
  GSLList **VAR_2 = VAR_0, *VAR_3 = ((void*)0);
  for (; *VAR_2; VAR_2 = &(*VAR_2)->next) {
    if ((*VAR_2) != VAR_1)
      continue;

    VAR_3 = (*VAR_2)->next;
    if ((*VAR_2)->data)
      FUNC_0 ((*VAR_2)->data);
    FUNC_0 (*VAR_2);
    *VAR_2 = VAR_3;
    return 0;
  }
  return 1;
}
