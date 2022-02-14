
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ netlink_socket; struct TYPE_3__* ttyDrivers; struct TYPE_3__* path; struct TYPE_3__* cpus; } ;
typedef int ProcessList ;
typedef TYPE_1__ LinuxProcessList ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(ProcessList* VAR_0) {
   LinuxProcessList* VAR_1 = (LinuxProcessList*) VAR_0;
   FUNC_0(VAR_0);
   FUNC_1(VAR_1->cpus);
   if (VAR_1->ttyDrivers) {
      for(int VAR_2 = 0; VAR_1->ttyDrivers[VAR_2].path; VAR_2++) {
         FUNC_1(VAR_1->ttyDrivers[VAR_2].path);
      }
      FUNC_1(VAR_1->ttyDrivers);
   }






   FUNC_1(VAR_1);
}
