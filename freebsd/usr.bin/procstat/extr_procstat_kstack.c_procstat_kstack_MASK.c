
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct kinfo_proc {char* ki_pid; char* ki_tid; char* ki_comm; } ;
struct kinfo_kstack {char* kkst_tid; int kkst_state; int kkst_trace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kinfo_kstack*,unsigned int) ;
 char* FUNC_1 (struct kinfo_proc*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct procstat*,struct kinfo_kstack*) ;
 int FUNC_5 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_kstack* FUNC_6 (struct procstat*,struct kinfo_proc*,unsigned int*) ;
 struct kinfo_proc* FUNC_7 (struct procstat*,int,char*,unsigned int*) ;
 int VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (char*) ;

void
FUNC_11(struct procstat *VAR_6, struct kinfo_proc *VAR_7)
{
 struct kinfo_kstack *VAR_8, *VAR_9;
 struct kinfo_proc *VAR_10, *VAR_11;
 char VAR_12[VAR_2], VAR_13[VAR_2];
 unsigned int VAR_14, VAR_15;
 unsigned int VAR_16, VAR_17;

 if ((VAR_5 & VAR_3) == 0)
  FUNC_9("{T:/%5s %6s %-19s %-19s %-29s}\n", "PID", "TID", "COMM",
      "TDNAME", "KSTACK");

 VAR_8 = VAR_9 = FUNC_6(VAR_6, VAR_7, &VAR_17);
 if (VAR_8 == ((void*)0))
  return;




 VAR_10 = VAR_11 = FUNC_7(VAR_6,
     VAR_1 | VAR_0, VAR_7->ki_pid, &VAR_16);

 if (VAR_10 == ((void*)0)) {
  FUNC_4(VAR_6, VAR_9);
  return;
 }

 FUNC_0(VAR_8, VAR_17);
 for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++) {
  VAR_8 = &VAR_9[VAR_14];





  VAR_7 = ((void*)0);
  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
   VAR_7 = &VAR_11[VAR_15];
   if (VAR_8->kkst_tid == VAR_7->ki_tid)
    break;
  }
  if (VAR_7 == ((void*)0))
   continue;

  FUNC_9("{k:process_id/%5d/%d} ", VAR_7->ki_pid);
  FUNC_9("{:thread_id/%6d/%d} ", VAR_8->kkst_tid);
  FUNC_9("{:command/%-19s/%s} ", VAR_7->ki_comm);
  FUNC_9("{:thread_name/%-19s/%s} ",
                    FUNC_1(VAR_7));

  switch (VAR_8->kkst_state) {
  case 130:
   FUNC_9("{:state/%-29s/%s}\n", "<running>");
   continue;

  case 128:
   FUNC_9("{:state/%-29s/%s}\n", "<swapped>");
   continue;

  case 129:
   break;

  default:
   FUNC_9("{:state/%-29s/%s}\n", "<unknown>");
   continue;
  }






  FUNC_2(VAR_8->kkst_trace, VAR_12,
      (VAR_5 & VAR_4) != 0 ? 2 : 1);
  FUNC_10("trace");
  FUNC_3(VAR_8->kkst_trace, VAR_13,
      (VAR_5 & VAR_4) != 0 ? 2 : 1);
  FUNC_8("trace");
  FUNC_9("{d:trace/%-29s}\n", VAR_12);
 }
 FUNC_4(VAR_6, VAR_9);
 FUNC_5(VAR_6, VAR_11);
}
