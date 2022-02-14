
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct kinfo_proc {int ki_sigmask; int ki_siglist; int ki_comm; int ki_tid; int ki_pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct kinfo_proc*,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_5 (struct procstat*,int,int ,unsigned int*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int,char) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,int ,char*) ;
 int FUNC_11 (char*) ;

void
FUNC_12(struct procstat *VAR_6, struct kinfo_proc *VAR_7)
{
 struct kinfo_proc *VAR_8;
 int VAR_9;
 unsigned int VAR_10, VAR_11;
 char *VAR_12;

 if ((VAR_5 & VAR_3) == 0)
  FUNC_9("{T:/%5s %6s %-16s %-7s %4s}\n", "PID", "TID", "COMM",
       "SIG", "FLAGS");

 VAR_8 = FUNC_5(VAR_6, VAR_2 | VAR_1,
     VAR_7->ki_pid, &VAR_10);
 if (VAR_8 == ((void*)0))
  return;
 FUNC_9("{ek:process_id/%5d/%d}", VAR_7->ki_pid);
 FUNC_9("{e:command/%-16s/%s}", VAR_7->ki_comm);
 FUNC_11("threads");
 FUNC_2(VAR_8, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  VAR_7 = &VAR_8[VAR_11];
  FUNC_0(&VAR_12, "%d", VAR_7->ki_tid);
  if (VAR_12 == ((void*)0))
   FUNC_10(1, VAR_0, "Failed to allocate memory in "
       "procstat_threads_sigs()");
  FUNC_11(VAR_12);
  FUNC_9("{e:thread_id/%6d/%d}", VAR_7->ki_tid);
  FUNC_11("signals");
  for (VAR_9 = 1; VAR_9 <= VAR_4; VAR_9++) {
   FUNC_9("{dk:process_id/%5d/%d} ", VAR_7->ki_pid);
   FUNC_9("{d:thread_id/%6d/%d} ", VAR_7->ki_tid);
   FUNC_9("{d:command/%-16s/%s} ", VAR_7->ki_comm);
   FUNC_7(VAR_9);
   FUNC_9(" ");
   FUNC_6(&VAR_7->ki_siglist, VAR_9, 'P');
   FUNC_6(&VAR_7->ki_sigmask, VAR_9, 'B');
   FUNC_3(VAR_9);
   FUNC_9("\n");
  }
  FUNC_8("signals");
  FUNC_8(VAR_12);
  FUNC_1(VAR_12);
 }
 FUNC_8("threads");
 FUNC_4(VAR_6, VAR_8);
}
