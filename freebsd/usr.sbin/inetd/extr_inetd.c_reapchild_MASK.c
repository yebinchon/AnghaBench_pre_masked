
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct servtab {int se_numchild; scalar_t__* se_pids; scalar_t__ se_maxchild; int se_server; struct servtab* se_next; } ;
struct rusage {int dummy; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (struct servtab*) ;
 int FUNC_5 (scalar_t__) ;
 struct servtab* VAR_3 ;
 int FUNC_6 (int ,char*,int ,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_7 (int*,int ,struct rusage*) ;
 int FUNC_8 (char*,scalar_t__,char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_9(void)
{
 int VAR_4, VAR_5;
 pid_t VAR_6;
 struct servtab *VAR_7;

 for (;;) {
  VAR_6 = FUNC_7(&VAR_5, VAR_1, (struct rusage *)0);
  if (VAR_6 <= 0)
   break;
  if (VAR_2)
   FUNC_8("%d reaped, %s %u", VAR_6,
       FUNC_1(VAR_5) ? "status" : "signal",
       FUNC_1(VAR_5) ? FUNC_0(VAR_5)
    : FUNC_3(VAR_5));
  for (VAR_7 = VAR_3; VAR_7; VAR_7 = VAR_7->se_next) {
   for (VAR_4 = 0; VAR_4 < VAR_7->se_numchild; VAR_4++)
    if (VAR_7->se_pids[VAR_4] == VAR_6)
     break;
   if (VAR_4 == VAR_7->se_numchild)
    continue;
   if (VAR_7->se_numchild == VAR_7->se_maxchild)
    FUNC_4(VAR_7);
   VAR_7->se_pids[VAR_4] = VAR_7->se_pids[--VAR_7->se_numchild];
   if (FUNC_2(VAR_5) || FUNC_0(VAR_5))
    FUNC_6(VAR_0,
        "%s[%d]: exited, %s %u",
        VAR_7->se_server, VAR_6,
        FUNC_1(VAR_5) ? "status" : "signal",
        FUNC_1(VAR_5) ? FUNC_0(VAR_5)
     : FUNC_3(VAR_5));
   break;
  }
  FUNC_5(VAR_6);
 }
}
