
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procinfo {struct conninfo* pr_conn; } ;
struct conninfo {int co_numchild; struct procinfo** co_proc; } ;
typedef int pid_t ;


 int FUNC_0 (struct conninfo*) ;
 int FUNC_1 (struct procinfo*) ;
 struct procinfo* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(pid_t VAR_0)
{
 struct procinfo *VAR_1;
 struct conninfo *VAR_2;
 int VAR_3;

 if ((VAR_1 = FUNC_2(VAR_0, 0)) == ((void*)0))
  return;
 if ((VAR_2 = VAR_1->pr_conn) == ((void*)0))
  return;
 for (VAR_3 = 0; VAR_3 < VAR_2->co_numchild; ++VAR_3)
  if (VAR_2->co_proc[VAR_3] == VAR_1) {
   VAR_2->co_proc[VAR_3] = VAR_2->co_proc[--VAR_2->co_numchild];
   break;
  }
 FUNC_1(VAR_1);
 FUNC_0(VAR_2);
}
