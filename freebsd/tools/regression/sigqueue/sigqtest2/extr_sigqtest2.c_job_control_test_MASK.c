
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_sigaction; int sa_flags; int sa_mask; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,struct sigaction*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

void
FUNC_10(void)
{
 struct sigaction VAR_8;
 pid_t VAR_9;
 int VAR_10 = 10;

 FUNC_8(&VAR_8.sa_mask);
 VAR_8.sa_flags = VAR_0;
 VAR_8.sa_sigaction = VAR_5;
 FUNC_7(VAR_1, &VAR_8, ((void*)0));
 VAR_7 = 0;
 VAR_3 = 0;
 VAR_4 = 0;
 FUNC_2(VAR_6);
 VAR_9 = FUNC_3();
 if (VAR_9 == 0) {
  FUNC_6("child %d\n", FUNC_4());
  FUNC_5(FUNC_4(), VAR_2);
  FUNC_9(2);
  FUNC_1(1);
 }

 while (!(VAR_3 && VAR_7 && VAR_4)) {
  FUNC_9(1);
  if (--VAR_10 == 0)
   break;
 }
 if (!(VAR_3 && VAR_7 && VAR_4))
  FUNC_0(1, "job signals lost");

 FUNC_6("job control test OK.\n");
}
