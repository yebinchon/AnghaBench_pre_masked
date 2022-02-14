
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idx; scalar_t__ sub_items_size; int module; TYPE_1__* items; } ;
struct TYPE_5__ {int metrics; } ;
typedef int GPercTotals ;
typedef int GMetrics ;
typedef TYPE_2__ GHolder ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,TYPE_2__*,int,int ) ;
 int FUNC_5 (int ,int **,int ) ;

__attribute__((used)) static void
FUNC_6 (FILE * VAR_0, GHolder * VAR_1, GPercTotals VAR_2)
{
  GMetrics *VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_1->idx; VAR_4++) {
    FUNC_5 (VAR_1->items[VAR_4].metrics, &VAR_3, VAR_2);

    FUNC_0 (VAR_0, "\"%d\",", VAR_4);
    FUNC_0 (VAR_0, ",");
    FUNC_0 (VAR_0, "\"%s\",", FUNC_2 (VAR_1->module));


    FUNC_3 (VAR_0, VAR_3);

    if (VAR_1->sub_items_size)
      FUNC_4 (VAR_0, VAR_1, VAR_4, VAR_2);

    FUNC_1 (VAR_3);
  }
}
