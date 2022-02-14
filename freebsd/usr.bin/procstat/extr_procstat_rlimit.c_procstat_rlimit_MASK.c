
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rlimit {int rlim_max; int rlim_cur; } ;
struct procstat {int dummy; } ;
struct kinfo_proc {int ki_comm; int ki_pid; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct procstat*,struct kinfo_proc*,int,struct rlimit*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct procstat *VAR_5, struct kinfo_proc *VAR_6)
{
 struct rlimit VAR_7;
 int VAR_8;

 if ((VAR_3 & VAR_0) == 0) {
  FUNC_3("{T:/%5s %-16s %-16s %16s %16s}\n",
      "PID", "COMM", "RLIMIT", "SOFT     ", "HARD     ");
 }
 FUNC_3("{ek:process_id/%5d}{e:command/%-16s/%s}", VAR_6->ki_pid,
     VAR_6->ki_comm);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (FUNC_1(VAR_5, VAR_6, VAR_8, &VAR_7) == -1)
   return;
  FUNC_3("{dk:process_id/%5d} {d:command/%-16s} "
      "{d:rlimit_param/%-16s} ", VAR_6->ki_pid, VAR_6->ki_comm,
      VAR_4[VAR_8].name);

  FUNC_4(VAR_4[VAR_8].name);
  if (VAR_7.rlim_cur == VAR_1)
   FUNC_3("{e:soft_limit/infinity}");
  else
   FUNC_3("{e:soft_limit/%U}", VAR_7.rlim_cur);

  if (VAR_7.rlim_max == VAR_1)
   FUNC_3("{e:hard_limit/infinity}");
  else
   FUNC_3("{e:hard_limit/%U}", VAR_7.rlim_max);
  FUNC_2(VAR_4[VAR_8].name);

  FUNC_3("{d:rlim_cur/%16s} ",
      FUNC_0(VAR_8, VAR_7.rlim_cur));
  FUNC_3("{d:rlim_max/%16s}\n",
      FUNC_0(VAR_8, VAR_7.rlim_max));
 }
}
