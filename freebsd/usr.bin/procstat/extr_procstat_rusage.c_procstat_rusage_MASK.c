
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct kinfo_proc {char* ki_pid; char* ki_comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kinfo_proc*,unsigned int) ;
 int FUNC_1 (struct kinfo_proc*) ;
 int FUNC_2 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_3 (struct procstat*,int,char*,unsigned int*) ;
 int VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*) ;

void
FUNC_7(struct procstat *VAR_5, struct kinfo_proc *VAR_6)
{
 struct kinfo_proc *VAR_7;
 unsigned int VAR_8, VAR_9;

 if ((VAR_4 & VAR_2) == 0) {
  FUNC_5("{d:ta/%5s} ", "PID");
  if ((VAR_4 & VAR_3) != 0)
   FUNC_5("{d:tb/%6s} ", "TID");
  FUNC_5("{d:tc/%-16s %-32s %14s}\n", "COMM", "RESOURCE",
      "VALUE        ");
 }

 if ((VAR_4 & VAR_3) == 0) {
  FUNC_1(VAR_6);
  return;
 }

 FUNC_5("{e:process_id/%d}", VAR_6->ki_pid);
 FUNC_5("{e:command/%s}", VAR_6->ki_comm);
 FUNC_6("threads");

 VAR_7 = FUNC_3(VAR_5, VAR_1 | VAR_0,
     VAR_6->ki_pid, &VAR_8);
 if (VAR_7 == ((void*)0))
  return;
 FUNC_0(VAR_7, VAR_8);
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_1(&VAR_7[VAR_9]);
 }

 FUNC_4("threads");
 FUNC_2(VAR_5, VAR_7);
}
