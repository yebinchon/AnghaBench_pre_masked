
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * next; int * prev; int module; int * metrics; } ;
typedef TYPE_1__ GSubItem ;
typedef int GModule ;
typedef int GMetrics ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static GSubItem *
FUNC_1 (GModule VAR_0, GMetrics * VAR_1)
{
  GSubItem *VAR_2 = FUNC_0 (sizeof (GSubItem));

  VAR_2->metrics = VAR_1;
  VAR_2->module = VAR_0;
  VAR_2->prev = ((void*)0);
  VAR_2->next = ((void*)0);

  return VAR_2;
}
