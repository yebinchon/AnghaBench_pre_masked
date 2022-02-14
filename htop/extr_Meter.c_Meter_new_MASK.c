
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ProcessList_ {int dummy; } ;
struct TYPE_11__ {int h; int param; int caption; int total; void* values; struct ProcessList_* pl; } ;
struct TYPE_10__ {int curItems; int maxItems; int defaultMode; int caption; int total; } ;
typedef TYPE_1__ MeterClass ;
typedef TYPE_2__ Meter ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;

Meter* FUNC_6(struct ProcessList_* VAR_0, int VAR_1, MeterClass* VAR_2) {
   Meter* VAR_3 = FUNC_4(1, sizeof(Meter));
   FUNC_3(VAR_3, VAR_2);
   VAR_3->h = 1;
   VAR_3->param = VAR_1;
   VAR_3->pl = VAR_0;
   VAR_2->curItems = VAR_2->maxItems;
   VAR_3->values = FUNC_4(VAR_2->maxItems, sizeof(double));
   VAR_3->total = VAR_2->total;
   VAR_3->caption = FUNC_5(VAR_2->caption);
   if (FUNC_1(VAR_3))
      FUNC_0(VAR_3);
   FUNC_2(VAR_3, VAR_2->defaultMode);
   return VAR_3;
}
