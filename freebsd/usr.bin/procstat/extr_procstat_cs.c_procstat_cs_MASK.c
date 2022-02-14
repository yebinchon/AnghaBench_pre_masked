
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct procstat {int dummy; } ;
struct kinfo_proc {char* ki_comm; int ki_oncpu; int ki_lastcpu; int ki_tid; int ki_pid; } ;
typedef int mask ;
typedef int cpusetid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct kinfo_proc*,unsigned int) ;
 int FUNC_4 (struct kinfo_proc*) ;
 int FUNC_5 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_6 (struct procstat*,int,int ,unsigned int*) ;
 int VAR_8 ;
 int FUNC_7 (struct sbuf*) ;
 int FUNC_8 (struct sbuf*) ;
 scalar_t__ FUNC_9 (struct sbuf*) ;
 struct sbuf* FUNC_10 () ;
 int FUNC_11 (struct sbuf*,char*,int,...) ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int,char*) ;

void
FUNC_15(struct procstat *VAR_9, struct kinfo_proc *VAR_10)
{
 cpusetid_t VAR_11;
 cpuset_t VAR_12;
 struct kinfo_proc *VAR_13;
 struct sbuf *VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 if ((VAR_8 & VAR_7) == 0)
  FUNC_13("{T:/%5s %6s %-19s %-19s %2s %4s %-7s}\n", "PID",
      "TID", "COMM", "TDNAME", "CPU", "CSID", "CPU MASK");

 VAR_13 = FUNC_6(VAR_9, VAR_6 | VAR_5,
     VAR_10->ki_pid, &VAR_15);
 if (VAR_13 == ((void*)0))
  return;
 FUNC_3(VAR_13, VAR_15);
 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  VAR_10 = &VAR_13[VAR_16];
  FUNC_13("{k:process_id/%5d/%d} ", VAR_10->ki_pid);
  FUNC_13("{:thread_id/%6d/%d} ", VAR_10->ki_tid);
  FUNC_13("{:command/%-19s/%s} ", FUNC_12(VAR_10->ki_comm) ?
      VAR_10->ki_comm : "-");
  FUNC_13("{:thread_name/%-19s/%s} ",
                    FUNC_4(VAR_10));
  if (VAR_10->ki_oncpu != 255)
   FUNC_13("{:cpu/%3d/%d} ", VAR_10->ki_oncpu);
  else if (VAR_10->ki_lastcpu != 255)
   FUNC_13("{:cpu/%3d/%d} ", VAR_10->ki_lastcpu);
  else
   FUNC_13("{:cpu/%3s/%s} ", "-");
  if (FUNC_2(VAR_1, VAR_4,
      VAR_10->ki_tid, &VAR_11) != 0) {
   VAR_11 = VAR_0;
  }
  FUNC_13("{:cpu_set_id/%4d/%d} ", VAR_11);
  if ((VAR_11 != VAR_0) &&
      (FUNC_1(VAR_2, VAR_4,
      VAR_10->ki_tid, sizeof(VAR_12), &VAR_12) == 0)) {
   VAR_19 = -1;
   VAR_17 = 0;
   VAR_18 = 0;
   VAR_14 = FUNC_10();
   for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
    if (FUNC_0(VAR_20, &VAR_12)) {
     if (VAR_17 == 0) {
      FUNC_11(VAR_14, "%d",
          VAR_20);
      VAR_17 = 1;
     } else if (VAR_20 == VAR_19 + 1) {
      VAR_18 = 1;
     } else if (VAR_18 == 1) {
      FUNC_11(VAR_14, "-%d,%d",
          VAR_19, VAR_20);
      VAR_18 = 0;
     } else
      FUNC_11(VAR_14, ",%d",
          VAR_20);
     VAR_19 = VAR_20;
    }
   }
   if (VAR_17 && VAR_18)
    FUNC_11(VAR_14, "-%d", VAR_19);
   if (FUNC_9(VAR_14) != 0)
    FUNC_14(1, "Could not generate output");
   FUNC_13("{:cpu_set/%s}", FUNC_7(VAR_14));
   FUNC_8(VAR_14);
  }
  FUNC_13("\n");
 }
 FUNC_5(VAR_9, VAR_13);
}
