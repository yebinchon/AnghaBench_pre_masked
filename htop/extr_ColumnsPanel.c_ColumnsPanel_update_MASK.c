
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_1__* settings; } ;
struct TYPE_6__ {int key; } ;
struct TYPE_5__ {int changed; int* fields; int flags; } ;
typedef int ProcessField ;
typedef int Panel ;
typedef TYPE_2__ ListItem ;
typedef TYPE_3__ ColumnsPanel ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 TYPE_4__* VAR_0 ;
 int* FUNC_2 (int*,int) ;

void FUNC_3(Panel* VAR_1) {
   ColumnsPanel* VAR_2 = (ColumnsPanel*) VAR_1;
   int VAR_3 = FUNC_1(VAR_1);
   VAR_2->settings->changed = 1;
   VAR_2->settings->fields = FUNC_2(VAR_2->settings->fields, sizeof(ProcessField) * (VAR_3+1));
   VAR_2->settings->flags = 0;
   for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
      int VAR_5 = ((ListItem*) FUNC_0(VAR_1, VAR_4))->key;
      VAR_2->settings->fields[VAR_4] = VAR_5;
      VAR_2->settings->flags |= VAR_0[VAR_5].flags;
   }
   VAR_2->settings->fields[VAR_3] = 0;
}
