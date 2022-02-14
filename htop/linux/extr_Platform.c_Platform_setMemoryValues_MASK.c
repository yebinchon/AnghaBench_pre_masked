
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long* values; int total; scalar_t__ pl; } ;
struct TYPE_4__ {long usedMem; long buffersMem; long cachedMem; int totalMem; } ;
typedef TYPE_1__ ProcessList ;
typedef TYPE_2__ Meter ;



void FUNC_0(Meter* VAR_0) {
   ProcessList* VAR_1 = (ProcessList*) VAR_0->pl;
   long int VAR_2 = VAR_1->usedMem;
   long int VAR_3 = VAR_1->buffersMem;
   long int VAR_4 = VAR_1->cachedMem;
   VAR_2 -= VAR_3 + VAR_4;
   VAR_0->total = VAR_1->totalMem;
   VAR_0->values[0] = VAR_2;
   VAR_0->values[1] = VAR_3;
   VAR_0->values[2] = VAR_4;
}
