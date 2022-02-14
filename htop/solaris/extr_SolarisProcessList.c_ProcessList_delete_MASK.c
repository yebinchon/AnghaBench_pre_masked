
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kd; struct TYPE_3__* cpus; } ;
typedef TYPE_1__ SolarisProcessList ;
typedef int ProcessList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(ProcessList* VAR_0) {
   SolarisProcessList* VAR_1 = (SolarisProcessList*) VAR_0;
   FUNC_0(VAR_0);
   FUNC_1(VAR_1->cpus);
   if (VAR_1->kd) FUNC_2(VAR_1->kd);
   FUNC_1(VAR_1);
}
