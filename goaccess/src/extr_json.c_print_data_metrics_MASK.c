
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct GPanel_ {int (* subitems ) (int *,TYPE_2__*,int ,int ,int) ;} ;
struct TYPE_7__ {scalar_t__ json_pretty_print; } ;
struct TYPE_6__ {int metrics; } ;
struct TYPE_5__ {int idx; int sub_items_size; TYPE_2__* items; } ;
typedef int GPercTotals ;
typedef int GMetrics ;
typedef int GJSON ;
typedef TYPE_1__ GHolder ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int ,int **,int ) ;
 int FUNC_7 (int *,TYPE_2__*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_8 (GJSON * VAR_1, GHolder * VAR_2, GPercTotals VAR_3, int VAR_4,
                    const struct GPanel_ *VAR_5)
{
  GMetrics *VAR_6;
  int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;


  if (VAR_0.json_pretty_print)
    VAR_8 = VAR_4 + 1, VAR_9 = VAR_4 + 2, VAR_10 = VAR_4 + 3;

  FUNC_3 (VAR_1, "data", VAR_8);

  for (VAR_7 = 0; VAR_7 < VAR_2->idx; VAR_7++) {
    FUNC_6 (VAR_2->items[VAR_7].metrics, &VAR_6, VAR_3);


    FUNC_4 (VAR_1, VAR_9);

    FUNC_5 (VAR_1, VAR_6, VAR_10);

    if (VAR_5->subitems)
      VAR_5->subitems (VAR_1, VAR_2->items + VAR_7, VAR_3, VAR_2->sub_items_size, VAR_10);

    FUNC_2 (VAR_1, VAR_9, (VAR_7 == VAR_2->idx - 1));

    FUNC_0 (VAR_6);
  }
  FUNC_1 (VAR_1, VAR_8, 1);
}
