
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procinfo {struct conninfo* pr_conn; } ;
struct conninfo {int co_numchild; struct procinfo** co_proc; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct procinfo* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct conninfo *VAR_2, pid_t VAR_3)
{
 struct procinfo *VAR_4;

 if (VAR_2 == ((void*)0))
  return;

 if ((VAR_4 = FUNC_1(VAR_3, 1)) != ((void*)0)) {
  if (VAR_4->pr_conn != ((void*)0)) {
   FUNC_2(VAR_1,
       "addchild_conn: child already on process list");
   FUNC_0(VAR_0);
  }
  VAR_4->pr_conn = VAR_2;
 }

 VAR_2->co_proc[VAR_2->co_numchild++] = VAR_4;
}
