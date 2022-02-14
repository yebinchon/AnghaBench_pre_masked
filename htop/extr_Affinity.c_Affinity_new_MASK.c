
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int * pl; void* cpus; } ;
typedef int ProcessList ;
typedef TYPE_1__ Affinity ;


 void* FUNC_0 (int,int) ;

Affinity* FUNC_1(ProcessList* VAR_0) {
   Affinity* VAR_1 = FUNC_0(1, sizeof(Affinity));
   VAR_1->size = 8;
   VAR_1->cpus = FUNC_0(VAR_1->size, sizeof(int));
   VAR_1->pl = VAR_0;
   return VAR_1;
}
