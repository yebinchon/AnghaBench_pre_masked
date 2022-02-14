
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {long pid; } ;
struct TYPE_9__ {long m_drs; long m_dt; long m_lrs; long m_trs; long m_share; long long utime; long long cutime; long long stime; long long cstime; long starttime; long long io_rchar; long long io_wchar; long long io_syscr; long long io_syscw; long long io_read_bytes; long long io_write_bytes; long long io_cancelled_write_bytes; long long io_rate_read_bps; long long io_rate_write_bps; long ctid; long vpid; long vxid; char* cgroup; long oom; int swapin_delay_percent; int blkio_delay_percent; int cpu_delay_percent; TYPE_1__ super; } ;
struct TYPE_8__ {TYPE_2__* settings; } ;
struct TYPE_7__ {int direction; scalar_t__ sortKey; } ;
typedef TYPE_2__ Settings ;
typedef TYPE_3__ Process ;
typedef TYPE_4__ LinuxProcess ;
 long FUNC_0 (TYPE_4__*) ;
 long FUNC_1 (void const*,void const*) ;
 long FUNC_2 (char*,char*) ;

long FUNC_3(const void* VAR_0, const void* VAR_1) {
   LinuxProcess *VAR_2, *VAR_3;
   Settings *VAR_4 = ((Process*)VAR_0)->settings;
   if (VAR_4->direction == 1) {
      VAR_2 = (LinuxProcess*)VAR_0;
      VAR_3 = (LinuxProcess*)VAR_1;
   } else {
      VAR_3 = (LinuxProcess*)VAR_0;
      VAR_2 = (LinuxProcess*)VAR_1;
   }
   long long VAR_5;
   switch ((int)VAR_4->sortKey) {
   case 147:
      return (VAR_3->m_drs - VAR_2->m_drs);
   case 146:
      return (VAR_3->m_dt - VAR_2->m_dt);
   case 145:
      return (VAR_3->m_lrs - VAR_2->m_lrs);
   case 143:
      return (VAR_3->m_trs - VAR_2->m_trs);
   case 144:
      return (VAR_3->m_share - VAR_2->m_share);
   case 132: VAR_5 = VAR_3->utime - VAR_2->utime; goto test_diff;
   case 152: VAR_5 = VAR_3->cutime - VAR_2->cutime; goto test_diff;
   case 135: VAR_5 = VAR_3->stime - VAR_2->stime; goto test_diff;
   case 154: VAR_5 = VAR_3->cstime - VAR_2->cstime; goto test_diff;
   case 136: {
      if (VAR_2->starttime == VAR_3->starttime)
         return (VAR_2->super.pid - VAR_3->super.pid);
      else
         return (VAR_2->starttime - VAR_3->starttime);
   }
   case 142:
      return (VAR_3->oom - VAR_2->oom);
   case 151:
      return FUNC_0(VAR_2) - FUNC_0(VAR_3);
   default:
      return FUNC_1(VAR_0, VAR_1);
   }
   test_diff:
   return (VAR_5 > 0) ? 1 : (VAR_5 < 0 ? -1 : 0);
}
