
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct procstat {int dummy; } ;
struct TYPE_2__ {int pri_level; } ;
struct kinfo_proc {char* ki_comm; int ki_oncpu; int ki_lastcpu; int ki_stat; int ki_kiflag; char* ki_lockname; char* ki_wmesg; TYPE_1__ ki_pri; int ki_tid; int ki_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kinfo_proc*,unsigned int) ;
 int FUNC_3 (struct kinfo_proc*) ;
 int FUNC_4 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_5 (struct procstat*,int,int ,unsigned int*) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int,int ,char*) ;
 int FUNC_10 (char*) ;

void
FUNC_11(struct procstat *VAR_6, struct kinfo_proc *VAR_7)
{
 struct kinfo_proc *VAR_8;
 unsigned int VAR_9, VAR_10;
 const char *VAR_11;
 char *VAR_12;

 if ((VAR_5 & VAR_4) == 0)
  FUNC_8("{T:/%5s %6s %-19s %-19s %2s %4s %-7s %-9s}\n", "PID",
      "TID", "COMM", "TDNAME", "CPU", "PRI", "STATE", "WCHAN");

 FUNC_8("{ek:process_id/%d}", VAR_7->ki_pid);
 FUNC_8("{e:command/%s}", FUNC_6(VAR_7->ki_comm) ?
      VAR_7->ki_comm : "-");
 FUNC_10("threads");

 VAR_8 = FUNC_5(VAR_6, VAR_2 | VAR_1,
     VAR_7->ki_pid, &VAR_9);
 if (VAR_8 == ((void*)0))
  return;
 FUNC_2(VAR_8, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_7 = &VAR_8[VAR_10];
  FUNC_0(&VAR_12, "%d", VAR_7->ki_tid);
  if (VAR_12 == ((void*)0))
   FUNC_9(1, VAR_0, "Failed to allocate memory in "
       "procstat_threads()");
  FUNC_10(VAR_12);
  FUNC_8("{dk:process_id/%5d/%d} ", VAR_7->ki_pid);
  FUNC_8("{:thread_id/%6d/%d} ", VAR_7->ki_tid);
  FUNC_8("{d:command/%-19s/%s} ", FUNC_6(VAR_7->ki_comm) ?
      VAR_7->ki_comm : "-");
  FUNC_8("{:thread_name/%-19s/%s} ",
      FUNC_3(VAR_7));
  if (VAR_7->ki_oncpu != 255)
   FUNC_8("{:cpu/%3d/%d} ", VAR_7->ki_oncpu);
  else if (VAR_7->ki_lastcpu != 255)
   FUNC_8("{:cpu/%3d/%d} ", VAR_7->ki_lastcpu);
  else
   FUNC_8("{:cpu/%3s/%s} ", "-");
  FUNC_8("{:priority/%4d/%d} ", VAR_7->ki_pri.pri_level);
  switch (VAR_7->ki_stat) {
  case 132:
   VAR_11 = "run";
   break;

  case 130:
   VAR_11 = "stop";
   break;

  case 131:
   VAR_11 = "sleep";
   break;

  case 133:
   VAR_11 = "lock";
   break;

  case 129:
   VAR_11 = "wait";
   break;

  case 128:
   VAR_11 = "zomb";
   break;

  case 134:
   VAR_11 = "idle";
   break;

  default:
   VAR_11 = "??";
   break;
  }
  FUNC_8("{:run_state/%-7s/%s} ", VAR_11);
  if (VAR_7->ki_kiflag & VAR_3) {
   FUNC_8("{:lock_name/*%-8s/%s} ",
       FUNC_6(VAR_7->ki_lockname) ?
       VAR_7->ki_lockname : "-");
  } else {
   FUNC_8("{:wait_channel/%-9s/%s} ",
       FUNC_6(VAR_7->ki_wmesg) ? VAR_7->ki_wmesg : "-");
  }
  FUNC_7(VAR_12);
  FUNC_1(VAR_12);
  FUNC_8("\n");
 }
 FUNC_7("threads");
 FUNC_4(VAR_6, VAR_8);
}
