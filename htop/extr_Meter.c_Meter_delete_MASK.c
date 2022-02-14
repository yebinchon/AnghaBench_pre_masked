
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* values; struct TYPE_5__* caption; struct TYPE_5__* drawData; } ;
typedef int Object ;
typedef TYPE_1__ Meter ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(Object* VAR_0) {
   if (!VAR_0)
      return;
   Meter* VAR_1 = (Meter*) VAR_0;
   if (FUNC_1(VAR_1)) {
      FUNC_0(VAR_1);
   }
   FUNC_2(VAR_1->drawData);
   FUNC_2(VAR_1->caption);
   FUNC_2(VAR_1->values);
   FUNC_2(VAR_1);
}
