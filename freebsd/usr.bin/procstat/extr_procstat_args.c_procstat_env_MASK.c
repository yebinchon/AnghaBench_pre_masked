
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct kinfo_proc {int ki_comm; int ki_pid; } ;


 int VAR_0 ;
 char** FUNC_0 (struct procstat*,struct kinfo_proc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;

void
FUNC_4(struct procstat *VAR_2, struct kinfo_proc *VAR_3)
{
 int VAR_4;
 char **VAR_5;

 if ((VAR_1 & VAR_0) == 0) {
  FUNC_2("{T:/%5s %-16s %-53s}\n", "PID", "COMM", "ENVIRONMENT");
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3, 0);

 FUNC_2("{k:process_id/%5d/%d} {:command/%-16s/%s}", VAR_3->ki_pid,
     VAR_3->ki_comm);

 if (VAR_5 == ((void*)0)) {
  FUNC_2(" {d:env/-}\n");
  return;
 }

 FUNC_3("environment");
 for (VAR_4 = 0; VAR_5[VAR_4] != ((void*)0); VAR_4++)
  FUNC_2(" {l:env/%s}", VAR_5[VAR_4]);
 FUNC_1("environment");
 FUNC_2("\n");
}
