
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uid_t ;
typedef int UsersTable ;
struct TYPE_7__ {int cpuCount; } ;
struct TYPE_6__ {void* cpus; int kd; } ;
typedef TYPE_1__ SolarisProcessList ;
typedef TYPE_2__ ProcessList ;
typedef int Hashtable ;
typedef int CPUData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int,int) ;
 void* FUNC_5 (void*,int) ;

ProcessList* FUNC_6(UsersTable* VAR_2, Hashtable* VAR_3, uid_t VAR_4) {
   SolarisProcessList* VAR_5 = FUNC_4(1, sizeof(SolarisProcessList));
   ProcessList* VAR_6 = (ProcessList*) VAR_5;
   FUNC_1(VAR_6, FUNC_0(VAR_0), VAR_2, VAR_3, VAR_4);

   VAR_5->kd = FUNC_2();

   VAR_6->cpuCount = FUNC_3(VAR_1);

   if (VAR_6->cpuCount == 1 ) {
      VAR_5->cpus = FUNC_5(VAR_5->cpus, sizeof(CPUData));
   } else {
      VAR_5->cpus = FUNC_5(VAR_5->cpus, (VAR_6->cpuCount + 1) * sizeof(CPUData));
   }

   return VAR_6;
}
