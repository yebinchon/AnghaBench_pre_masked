
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * values; int total; scalar_t__ pl; } ;
struct TYPE_4__ {int cachedMem; int buffersMem; int usedMem; int totalMem; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Meter ;



void FUNC_0(Meter* VAR_0) {

   ProcessList* VAR_1 = (ProcessList*) VAR_0->pl;

   VAR_0->total = VAR_1->totalMem;
   VAR_0->values[0] = VAR_1->usedMem;
   VAR_0->values[1] = VAR_1->buffersMem;
   VAR_0->values[2] = VAR_1->cachedMem;
}
