
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct proc {char* p_comm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (char*,char*,int) ;
 struct proc* VAR_2 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,int,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

void
FUNC_7(u_int VAR_7)
{
 char VAR_8[VAR_1 + 1];
 struct proc *VAR_9;

 if (VAR_3 != VAR_7)
  return;

 FUNC_4("watchdog started on cpu %d\n", VAR_7);
 VAR_9 = VAR_2;
 FUNC_2(VAR_9->p_comm, VAR_8, VAR_1 + 1);
 FUNC_5(VAR_9->p_comm, VAR_1 + 1, "mp_watchdog cpu %d", VAR_7);
 while (1) {
  FUNC_0(1000000);
  if (VAR_3 != VAR_7)
   break;
  FUNC_1(&VAR_6, 1);
  if (VAR_6 < 4)
   FUNC_4("Watchdog timer: %d\n", VAR_6);
  if (VAR_6 == 0 && VAR_4 == 0) {
   FUNC_4("Watchdog firing!\n");
   VAR_4 = 1;
   if (VAR_5)
    FUNC_6();
   else
    FUNC_3(VAR_0, "mp_watchdog");
  }
 }
 FUNC_2(VAR_8, VAR_9->p_comm, VAR_1 + 1);
 FUNC_4("watchdog stopped on cpu %d\n", VAR_7);
}
