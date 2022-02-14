
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cpus; scalar_t__ kd; } ;
typedef int ProcessList ;
typedef TYPE_1__ OpenBSDProcessList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(ProcessList* VAR_0) {
   const OpenBSDProcessList* VAR_1 = (OpenBSDProcessList*) VAR_0;

   if (VAR_1->kd) {
      FUNC_2(VAR_1->kd);
   }

   FUNC_1(VAR_1->cpus);

   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
}
