
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct TYPE_6__ {int cr_uid; } ;
struct TYPE_7__ {int e_tdev; TYPE_1__ e_ucred; int e_tpgid; int e_pgid; int e_ppid; } ;
struct extern_proc {scalar_t__ p_stat; int p_priority; int p_nice; int p_pid; } ;
struct kinfo_proc {TYPE_2__ kp_eproc; struct extern_proc kp_proc; } ;
struct TYPE_8__ {int tty_nr; char state; int updated; int priority; int nice; int basenameOffset; int comm; int st_uid; int pid; int tgid; int tpgid; scalar_t__ session; int pgrp; int ppid; } ;
typedef TYPE_3__ Process ;


 int FUNC_0 (struct kinfo_proc*,int *) ;
 int FUNC_1 (TYPE_3__*,struct extern_proc*,int ) ;
 scalar_t__ VAR_0 ;

void FUNC_2(Process *VAR_1, struct kinfo_proc *VAR_2, time_t VAR_3, bool VAR_4) {
   struct extern_proc *VAR_5 = &VAR_2->kp_proc;
   if(!VAR_4) {

      VAR_1->pid = VAR_5->p_pid;
      VAR_1->ppid = VAR_2->kp_eproc.e_ppid;
      VAR_1->pgrp = VAR_2->kp_eproc.e_pgid;
      VAR_1->session = 0;
      VAR_1->tpgid = VAR_2->kp_eproc.e_tpgid;
      VAR_1->tgid = VAR_1->pid;
      VAR_1->st_uid = VAR_2->kp_eproc.e_ucred.cr_uid;


      VAR_1->tty_nr = VAR_2->kp_eproc.e_tdev & 0xff;

      FUNC_1(VAR_1, VAR_5, VAR_3);
      VAR_1->comm = FUNC_0(VAR_2, &(VAR_1->basenameOffset));
   }


   VAR_1->nice = VAR_5->p_nice;
   VAR_1->priority = VAR_5->p_priority;

   VAR_1->state = (VAR_5->p_stat == VAR_0) ? 'Z' : '?';


   VAR_1->updated = 1;
}
