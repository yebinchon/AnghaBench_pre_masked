
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
struct timeval {int tv_sec; } ;
struct kinfo_proc {int p_ustart_sec; double p_vm_rssize; int p_rtime_sec; int p_rtime_usec; int p_stat; scalar_t__ p_priority; scalar_t__ p_nice; int p_vm_dsize; int p_uid; int p__pgid; int p_tdev; int p_sid; int p_pid; int p_tpgid; int p_ppid; } ;
struct TYPE_16__ {int kd; } ;
struct TYPE_15__ {int show; int starttime_ctime; double m_resident; double percent_mem; int time; char state; int updated; scalar_t__ priority; scalar_t__ nice; int percent_cpu; int m_size; int basenameOffset; void* comm; int starttime_show; int st_uid; int user; int pgrp; int tty_nr; int session; int tgid; int tpgid; int ppid; } ;
struct TYPE_14__ {double cpuCount; int runningTasks; int totalTasks; int kernelThreads; scalar_t__ totalMem; int usersTable; TYPE_1__* settings; } ;
struct TYPE_13__ {int hideKernelThreads; int hideUserlandThreads; scalar_t__ updateProcessNames; } ;
typedef TYPE_1__ Settings ;
typedef int Process_New ;
typedef TYPE_2__ ProcessList ;
typedef TYPE_3__ Process ;
typedef TYPE_4__ OpenBSDProcessList ;
typedef int OpenBSDProcess ;


 int FUNC_0 (int ,double,double) ;
 int VAR_0 ;
 void* FUNC_1 (int ,struct kinfo_proc*,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ,int*,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;







 int FUNC_7 (int ,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct kinfo_proc*) ;
 int FUNC_10 (struct timeval*,int *) ;
 struct kinfo_proc* FUNC_11 (int ,int ,int ,int,int*) ;
 int FUNC_12 (int *,struct tm*) ;
 int FUNC_13 (int ,int,char*,struct tm*) ;

void FUNC_14(ProcessList* VAR_4) {
   OpenBSDProcessList* VAR_5 = (OpenBSDProcessList*) VAR_4;
   Settings* VAR_6 = VAR_4->settings;
   bool VAR_7 = VAR_6->hideKernelThreads;
   bool VAR_8 = VAR_6->hideUserlandThreads;
   struct kinfo_proc* VAR_9;
   bool VAR_10;
   Process* VAR_11;
   OpenBSDProcess* VAR_12;
   struct tm VAR_13;
   struct timeval VAR_14;
   int VAR_15 = 0;
   int VAR_16;

   FUNC_2(VAR_4);


   struct kinfo_proc* VAR_17 = FUNC_11(VAR_5->kd, VAR_0, 0, sizeof(struct kinfo_proc), &VAR_15);


   FUNC_10(&VAR_14, ((void*)0));

   for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
      VAR_9 = &VAR_17[VAR_16];

      VAR_10 = 0;
      VAR_11 = FUNC_4(VAR_4, VAR_9->p_pid, &VAR_10, (Process_New) VAR_1);
      VAR_12 = (OpenBSDProcess*) VAR_11;

      VAR_11->show = ! ((VAR_7 && FUNC_5(VAR_11))
                  || (VAR_8 && FUNC_6(VAR_11)));

      if (!VAR_10) {
         VAR_11->ppid = VAR_9->p_ppid;
         VAR_11->tpgid = VAR_9->p_tpgid;
         VAR_11->tgid = VAR_9->p_pid;
         VAR_11->session = VAR_9->p_sid;
         VAR_11->tty_nr = VAR_9->p_tdev;
         VAR_11->pgrp = VAR_9->p__pgid;
         VAR_11->st_uid = VAR_9->p_uid;
         VAR_11->starttime_ctime = VAR_9->p_ustart_sec;
         VAR_11->user = FUNC_7(VAR_4->usersTable, VAR_11->st_uid);
         FUNC_3((ProcessList*)VAR_4, VAR_11);
         VAR_11->comm = FUNC_1(VAR_5->kd, VAR_9, &VAR_11->basenameOffset);
         (void) FUNC_12((time_t*) &VAR_9->p_ustart_sec, &VAR_13);
         FUNC_13(VAR_11->starttime_show, 7, ((VAR_11->starttime_ctime > VAR_14.tv_sec - 86400) ? "%R " : "%b%d "), &VAR_13);
      } else {
         if (VAR_6->updateProcessNames) {
            FUNC_8(VAR_11->comm);
            VAR_11->comm = FUNC_1(VAR_5->kd, VAR_9, &VAR_11->basenameOffset);
         }
      }

      VAR_11->m_size = VAR_9->p_vm_dsize;
      VAR_11->m_resident = VAR_9->p_vm_rssize;
      VAR_11->percent_mem = (VAR_11->m_resident * VAR_2) / (double)(VAR_4->totalMem) * 100.0;
      VAR_11->percent_cpu = FUNC_0(FUNC_9(VAR_9), 0.0, VAR_4->cpuCount*100.0);


      VAR_11->nice = VAR_9->p_nice - 20;
      VAR_11->time = VAR_9->p_rtime_sec + ((VAR_9->p_rtime_usec + 500000) / 1000000);
      VAR_11->time *= 100;
      VAR_11->priority = VAR_9->p_priority - VAR_3;

      switch (VAR_9->p_stat) {
         case 133: VAR_11->state = 'I'; break;
         case 131: VAR_11->state = 'R'; break;
         case 130: VAR_11->state = 'S'; break;
         case 129: VAR_11->state = 'T'; break;
         case 128: VAR_11->state = 'Z'; break;
         case 134: VAR_11->state = 'D'; break;
         case 132: VAR_11->state = 'P'; break;
         default: VAR_11->state = '?';
      }

      if (FUNC_5(VAR_11)) {
         VAR_4->kernelThreads++;
      }

      VAR_4->totalTasks++;

      if (VAR_11->state == 'P') {
         VAR_4->runningTasks++;
      }
      VAR_11->updated = 1;
   }
}
