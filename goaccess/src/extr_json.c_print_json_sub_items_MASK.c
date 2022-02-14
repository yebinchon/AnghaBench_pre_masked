
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ json_pretty_print; } ;
struct TYPE_8__ {TYPE_1__* sub_list; } ;
struct TYPE_7__ {int metrics; struct TYPE_7__* next; } ;
struct TYPE_6__ {int size; TYPE_2__* head; } ;
typedef TYPE_1__ GSubList ;
typedef TYPE_2__ GSubItem ;
typedef int GPercTotals ;
typedef int GMetrics ;
typedef int GJSON ;
typedef TYPE_3__ GHolderItem ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,int **,int ) ;

__attribute__((used)) static void
FUNC_7 (GJSON * VAR_4, GHolderItem * VAR_5, GPercTotals VAR_6,
                      int VAR_7, int VAR_8)
{
  GMetrics *VAR_9;
  GSubItem *VAR_10;
  GSubList *VAR_11 = VAR_5->sub_list;
  int VAR_12 = 0, VAR_13 = 0, VAR_14 = 0;


  if (VAR_7 == 0)
    return;


  if (VAR_2.json_pretty_print)
    VAR_13 = VAR_8 + 1, VAR_14 = VAR_13 + 1;

  if (VAR_11 == ((void*)0))
    return;

  FUNC_3 (VAR_4, ",%.*s%.*s\"items\": [%.*s", VAR_3, VAR_0, VAR_8, VAR_1, VAR_3, VAR_0);
  for (VAR_10 = VAR_11->head; VAR_10; VAR_10 = VAR_10->next, VAR_12++) {
    FUNC_6 (VAR_10->metrics, &VAR_9, VAR_6);

    FUNC_4 (VAR_4, VAR_13);
    FUNC_5 (VAR_4, VAR_9, VAR_14);
    FUNC_2 (VAR_4, VAR_13, (VAR_12 == VAR_11->size - 1));
    FUNC_0 (VAR_9);
  }
  FUNC_1 (VAR_4, VAR_8, 1);
}
