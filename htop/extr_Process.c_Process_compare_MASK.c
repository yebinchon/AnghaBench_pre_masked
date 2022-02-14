
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {long m_resident; char* comm; long majflt; long minflt; long m_size; long nice; long nlwp; long pgrp; long pid; long ppid; long priority; long processor; long session; long starttime_ctime; long st_uid; long time; long tgid; long tpgid; long tty_nr; char* user; int state; int percent_cpu; TYPE_1__* settings; } ;
struct TYPE_3__ {int direction; int sortKey; } ;
typedef TYPE_1__ Settings ;
typedef TYPE_2__ Process ;
 long FUNC_0 (int ) ;
 long FUNC_1 (char*,char*) ;

long FUNC_2(const void* VAR_0, const void* VAR_1) {
   Process *VAR_2, *VAR_3;
   Settings *VAR_4 = ((Process*)VAR_0)->settings;
   if (VAR_4->direction == 1) {
      VAR_2 = (Process*)VAR_0;
      VAR_3 = (Process*)VAR_1;
   } else {
      VAR_3 = (Process*)VAR_0;
      VAR_2 = (Process*)VAR_1;
   }
   switch (VAR_4->sortKey) {
   case 143:
      return (VAR_3->percent_cpu > VAR_2->percent_cpu ? 1 : -1);
   case 142:
      return (VAR_3->m_resident - VAR_2->m_resident);
   case 150:
      return FUNC_1(VAR_2->comm, VAR_3->comm);
   case 149:
      return (VAR_3->majflt - VAR_2->majflt);
   case 148:
      return (VAR_3->minflt - VAR_2->minflt);
   case 147:
      return (VAR_3->m_resident - VAR_2->m_resident);
   case 146:
      return (VAR_3->m_size - VAR_2->m_size);
   case 145:
      return (VAR_2->nice - VAR_3->nice);
   case 144:
      return (VAR_2->nlwp - VAR_3->nlwp);
   case 141:
      return (VAR_2->pgrp - VAR_3->pgrp);
   case 140:
      return (VAR_2->pid - VAR_3->pid);
   case 139:
      return (VAR_2->ppid - VAR_3->ppid);
   case 138:
      return (VAR_2->priority - VAR_3->priority);
   case 137:
      return (VAR_2->processor - VAR_3->processor);
   case 136:
      return (VAR_2->session - VAR_3->session);
   case 135: {
      if (VAR_2->starttime_ctime == VAR_3->starttime_ctime)
         return (VAR_2->pid - VAR_3->pid);
      else
         return (VAR_2->starttime_ctime - VAR_3->starttime_ctime);
   }
   case 134:
      return (FUNC_0(VAR_2->state) - FUNC_0(VAR_3->state));
   case 133:
      return (VAR_2->st_uid - VAR_3->st_uid);
   case 131:
      return ((VAR_3->time) - (VAR_2->time));
   case 132:
      return (VAR_2->tgid - VAR_3->tgid);
   case 130:
      return (VAR_2->tpgid - VAR_3->tpgid);
   case 129:
      return (VAR_2->tty_nr - VAR_3->tty_nr);
   case 128:
      return FUNC_1(VAR_2->user ? VAR_2->user : "", VAR_3->user ? VAR_3->user : "");
   default:
      return (VAR_2->pid - VAR_3->pid);
   }
}
