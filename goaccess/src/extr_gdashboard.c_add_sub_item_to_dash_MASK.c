
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sub_list; } ;
struct TYPE_6__ {int metrics; struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_2__* head; } ;
typedef TYPE_1__ GSubList ;
typedef TYPE_2__ GSubItem ;
typedef int GModule ;
typedef TYPE_3__ GHolderItem ;
typedef int GDash ;


 int FUNC_0 (int **,int ,int ,int) ;

__attribute__((used)) static void
FUNC_1 (GDash ** VAR_0, GHolderItem VAR_1, GModule VAR_2, int *VAR_3)
{
  GSubList *VAR_4 = VAR_1.sub_list;
  GSubItem *VAR_5;

  if (VAR_4 == ((void*)0))
    return;

  for (VAR_5 = VAR_4->head; VAR_5; VAR_5 = VAR_5->next, (*VAR_3)++) {
    FUNC_0 (VAR_0, VAR_5->metrics, VAR_2, 1);
  }
}
