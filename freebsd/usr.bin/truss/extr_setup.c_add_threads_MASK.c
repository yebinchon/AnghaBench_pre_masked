
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trussinfo {struct threadinfo* curthread; } ;
struct threadinfo {int dummy; } ;
struct ptrace_lwpinfo {int pl_flags; } ;
struct procinfo {int pid; } ;
typedef int pl ;
typedef int lwpid_t ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (struct trussinfo*,struct threadinfo*,struct ptrace_lwpinfo*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 struct threadinfo* FUNC_5 (struct procinfo*,int ) ;
 int FUNC_6 (int ,int ,int *,int) ;

__attribute__((used)) static void
FUNC_7(struct trussinfo *VAR_4, struct procinfo *VAR_5)
{
 struct ptrace_lwpinfo VAR_6;
 struct threadinfo *VAR_7;
 lwpid_t *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_6(VAR_2, VAR_5->pid, ((void*)0), 0);
 if (VAR_10 == -1)
  FUNC_3(1, "Unable to fetch number of LWPs");
 FUNC_0(VAR_10 > 0);
 VAR_8 = FUNC_1(VAR_10, sizeof(*VAR_8));
 VAR_10 = FUNC_6(VAR_1, VAR_5->pid, (caddr_t)VAR_8, VAR_10);
 if (VAR_10 == -1)
  FUNC_3(1, "Unable to fetch LWP list");
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_7 = FUNC_5(VAR_5, VAR_8[VAR_9]);
  if (FUNC_6(VAR_3, VAR_8[VAR_9], (caddr_t)&VAR_6, sizeof(VAR_6)) == -1)
   FUNC_3(1, "ptrace(PT_LWPINFO)");
  if (VAR_6.pl_flags & VAR_0) {
   VAR_4->curthread = VAR_7;
   FUNC_2(VAR_4, VAR_7, &VAR_6);
  }
 }
 FUNC_4(VAR_8);
}
