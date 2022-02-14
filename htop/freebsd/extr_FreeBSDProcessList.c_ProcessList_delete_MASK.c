
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cpus; int * cp_times_n; int * cp_times_o; int * cp_time_n; int * cp_time_o; scalar_t__ kd; } ;
typedef int ProcessList ;
typedef TYPE_1__ FreeBSDProcessList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(ProcessList* VAR_0) {
   const FreeBSDProcessList* VAR_1 = (FreeBSDProcessList*) VAR_0;
   if (VAR_1->kd) FUNC_2(VAR_1->kd);

   FUNC_1(VAR_1->cp_time_o);
   FUNC_1(VAR_1->cp_time_n);
   FUNC_1(VAR_1->cp_times_o);
   FUNC_1(VAR_1->cp_times_n);
   FUNC_1(VAR_1->cpus);

   FUNC_0(VAR_0);
   FUNC_1(VAR_0);
}
