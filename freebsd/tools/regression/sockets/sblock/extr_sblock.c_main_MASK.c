
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_handler; } ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int ,struct sigaction*,struct sigaction*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int FUNC_10 (scalar_t__,int) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int*) ;

int
FUNC_12(void)
{
 int VAR_8, VAR_9[2], VAR_10, VAR_11;
 pid_t VAR_12;
 pid_t VAR_13;
 struct sigaction VAR_14;

 if (FUNC_8(VAR_2, ((void*)0), &VAR_14) < 0)
  FUNC_2(-1, "FAIL: sigaction(SIGHUP, NULL, &sa)");

 VAR_14.sa_handler = VAR_7;
 if (VAR_14.sa_flags & VAR_1)
  FUNC_7("SIGHUP restartable by default (cleared)\n");
 VAR_14.sa_flags &= ~VAR_1;

 if (FUNC_8(VAR_2, &VAR_14, ((void*)0)) < 0)
  FUNC_2(-1, "FAIL: sigaction(SIGHUP, &sa, NULL)");






 if (FUNC_11(VAR_0, VAR_5, 0, VAR_9) < 0)
  FUNC_2(-1, "FAIL: socketpair(PF_LOCAL, SOGK_STREAM, 0)");

 VAR_11 = VAR_9[0];
 VAR_10 = VAR_9[1];

 VAR_12 = FUNC_4();
 if (VAR_12 < 0)
  FUNC_2(-1, "FAIL: fork");
 if (VAR_12 == 0) {
  FUNC_1(VAR_11);
  FUNC_0(VAR_10);
  FUNC_3(0);
 }

 VAR_13 = FUNC_4();
 if (VAR_13 < 0) {
  VAR_8 = VAR_6;
  FUNC_5(VAR_12, VAR_3);
  VAR_6 = VAR_8;
  FUNC_2(-1, "FAIL: fork");
 }
 if (VAR_13 == 0) {
  FUNC_1(VAR_11);
  FUNC_6(VAR_10);
  FUNC_3(0);
 }

 FUNC_10(VAR_13, VAR_11);

 FUNC_5(VAR_12, VAR_3);
 FUNC_5(VAR_13, VAR_3);
 FUNC_3(0);
}
