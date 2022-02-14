
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ GSLList ;


 TYPE_1__* FUNC_0 (void*) ;

GSLList *
FUNC_1 (GSLList * VAR_0, void *VAR_1)
{
  GSLList *VAR_2;
  VAR_2 = FUNC_0 (VAR_1);
  VAR_2->next = VAR_0;

  return VAR_2;
}
