
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct proc_taskinfo {int pti_total_system; int pti_total_user; int pti_virtual_size; int pti_resident_size; scalar_t__ pti_numrunning; scalar_t__ pti_threadnum; int pti_faults; } ;
typedef int pti ;
struct TYPE_8__ {double percent_cpu; int time; int m_size; int m_resident; double percent_mem; int majflt; scalar_t__ nlwp; int pid; } ;
struct TYPE_12__ {int utime; int stime; TYPE_1__ super; } ;
struct TYPE_10__ {int runningTasks; int totalTasks; int userlandThreads; int kernelThreads; scalar_t__ cpuCount; } ;
struct TYPE_9__ {scalar_t__ max_mem; } ;
struct TYPE_11__ {TYPE_3__ super; TYPE_2__ host_info; scalar_t__ global_diff; } ;
typedef TYPE_4__ DarwinProcessList ;
typedef TYPE_5__ DarwinProcess ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct proc_taskinfo*,int) ;

void FUNC_1(DarwinProcess *VAR_2, DarwinProcessList *VAR_3) {
   struct proc_taskinfo VAR_4;

   if(sizeof(VAR_4) == FUNC_0(VAR_2->super.pid, VAR_1, 0, &VAR_4, sizeof(VAR_4))) {
      if(0 != VAR_2->utime || 0 != VAR_2->stime) {
         uint64_t VAR_5 = (VAR_4.pti_total_system - VAR_2->stime)
                  + (VAR_4.pti_total_user - VAR_2->utime);

         VAR_2->super.percent_cpu = (double)VAR_5 * (double)VAR_3->super.cpuCount
                  / ((double)VAR_3->global_diff * 100000.0);




      }

      VAR_2->super.time = (VAR_4.pti_total_system + VAR_4.pti_total_user) / 10000000;
      VAR_2->super.nlwp = VAR_4.pti_threadnum;
      VAR_2->super.m_size = VAR_4.pti_virtual_size / 1024 / VAR_0;
      VAR_2->super.m_resident = VAR_4.pti_resident_size / 1024 / VAR_0;
      VAR_2->super.majflt = VAR_4.pti_faults;
      VAR_2->super.percent_mem = (double)VAR_4.pti_resident_size * 100.0
              / (double)VAR_3->host_info.max_mem;

      VAR_2->stime = VAR_4.pti_total_system;
      VAR_2->utime = VAR_4.pti_total_user;

      VAR_3->super.kernelThreads += 0;
      VAR_3->super.userlandThreads += VAR_4.pti_threadnum;
      VAR_3->super.totalTasks += VAR_4.pti_threadnum;
      VAR_3->super.runningTasks += VAR_4.pti_numrunning;
   }
}
