
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
struct tm {int dummy; } ;
typedef int buffer ;
struct TYPE_8__ {int m_drs; int m_dt; int m_lrs; int m_trs; int m_share; int starttime; double io_rate_read_bps; double io_rate_write_bps; int swapin_delay_percent; int blkio_delay_percent; int cpu_delay_percent; int ioPriority; int oom; int cgroup; int vxid; int vpid; int ctid; int io_cancelled_write_bytes; int io_write_bytes; int io_read_bytes; int io_syscw; int io_syscr; int io_wchar; int io_rchar; int cstime; int cutime; int stime; int utime; int cmajflt; int cminflt; int ttyDevice; } ;
struct TYPE_7__ {int nice; TYPE_1__* settings; } ;
struct TYPE_6__ {int highlightMegabytes; } ;
typedef int RichString ;
typedef scalar_t__ ProcessField ;
typedef TYPE_2__ Process ;
typedef TYPE_3__ LinuxProcess ;






 int* VAR_0 ;



 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;




 int FUNC_2 (int ,char*,int) ;






 int VAR_6 ;



 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,char*,int,double,int) ;
 int VAR_10 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*,int *,scalar_t__) ;


 int FUNC_8 (int *,int,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (int*,struct tm*) ;
 int FUNC_10 (char*,int,char*,struct tm*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,int,char*,...) ;

void FUNC_14(Process* VAR_13, RichString* VAR_14, ProcessField VAR_15) {
   LinuxProcess* VAR_16 = (LinuxProcess*) VAR_13;
   bool VAR_17 = VAR_13->settings->highlightMegabytes;
   char VAR_18[256]; VAR_18[255] = '\0';
   int VAR_19 = VAR_0[VAR_1];
   int VAR_20 = sizeof(VAR_18) - 1;
   switch ((int)VAR_15) {
   case 133: {
      if (VAR_16->ttyDevice) {
         FUNC_13(VAR_18, VAR_20, "%-9s", VAR_16->ttyDevice + 5 );
      } else {
         VAR_19 = VAR_0[VAR_9];
         FUNC_13(VAR_18, VAR_20, "?        ");
      }
      break;
   }
   case 157: FUNC_3(VAR_14, VAR_16->cminflt, VAR_17); return;
   case 158: FUNC_3(VAR_14, VAR_16->cmajflt, VAR_17); return;
   case 148: FUNC_4(VAR_14, VAR_16->m_drs * VAR_6, VAR_17); return;
   case 147: FUNC_4(VAR_14, VAR_16->m_dt * VAR_6, VAR_17); return;
   case 146: FUNC_4(VAR_14, VAR_16->m_lrs * VAR_6, VAR_17); return;
   case 144: FUNC_4(VAR_14, VAR_16->m_trs * VAR_6, VAR_17); return;
   case 145: FUNC_4(VAR_14, VAR_16->m_share * VAR_6, VAR_17); return;
   case 132: FUNC_6(VAR_14, VAR_16->utime); return;
   case 136: FUNC_6(VAR_14, VAR_16->stime); return;
   case 153: FUNC_6(VAR_14, VAR_16->cutime); return;
   case 155: FUNC_6(VAR_14, VAR_16->cstime); return;
   case 137: {
     struct tm VAR_21;
     time_t VAR_22 = VAR_12 + (VAR_16->starttime / FUNC_11(VAR_11));
     (void) FUNC_9(&VAR_22, &VAR_21);
     FUNC_10(VAR_18, VAR_20, ((VAR_22 > FUNC_12(((void*)0)) - 86400) ? "%R " : "%b%d "), &VAR_21);
     break;
   }
   case 143: FUNC_13(VAR_18, VAR_20, VAR_10, VAR_16->oom); break;
   case 152: {
      int VAR_23 = FUNC_0(VAR_16->ioPriority);
      if (VAR_23 == VAR_4) {

         FUNC_13(VAR_18, VAR_20, "B%1d ", (int) (VAR_13->nice + 20) / 5);
      } else if (VAR_23 == VAR_2) {
         FUNC_13(VAR_18, VAR_20, "B%1d ", FUNC_1(VAR_16->ioPriority));
      } else if (VAR_23 == VAR_5) {
         VAR_19 = VAR_0[VAR_7];
         FUNC_13(VAR_18, VAR_20, "R%1d ", FUNC_1(VAR_16->ioPriority));
      } else if (VAR_23 == VAR_3) {
         VAR_19 = VAR_0[VAR_8];
         FUNC_13(VAR_18, VAR_20, "id ");
      } else {
         FUNC_13(VAR_18, VAR_20, "?? ");
      }
      break;
   }





   default:
      FUNC_7((Process*)VAR_13, VAR_14, VAR_15);
      return;
   }
   FUNC_8(VAR_14, VAR_19, VAR_18);
}
