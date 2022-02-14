
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int module; TYPE_1__* items; } ;
struct TYPE_8__ {int metrics; struct TYPE_8__* next; } ;
struct TYPE_7__ {TYPE_3__* head; } ;
struct TYPE_6__ {TYPE_2__* sub_list; } ;
typedef TYPE_2__ GSubList ;
typedef TYPE_3__ GSubItem ;
typedef int GPercTotals ;
typedef int GMetrics ;
typedef TYPE_4__ GHolder ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int **,int ) ;

__attribute__((used)) static void
FUNC_5 (FILE * VAR_0, GHolder * VAR_1, int VAR_2, GPercTotals VAR_3)
{
  GMetrics *VAR_4;
  GSubList *VAR_5 = VAR_1->items[VAR_2].sub_list;
  GSubItem *VAR_6;

  int VAR_7 = 0;

  if (VAR_5 == ((void*)0))
    return;

  for (VAR_6 = VAR_5->head; VAR_6; VAR_6 = VAR_6->next, VAR_7++) {
    FUNC_4 (VAR_6->metrics, &VAR_4, VAR_3);

    FUNC_0 (VAR_0, "\"%d\",", VAR_7);
    FUNC_0 (VAR_0, "\"%d\",", VAR_2);
    FUNC_0 (VAR_0, "\"%s\",", FUNC_2 (VAR_1->module));


    FUNC_3 (VAR_0, VAR_4);
    FUNC_1 (VAR_4);
  }
}
