
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*,...) ;
 int FUNC_8 (int,int*) ;

__attribute__((used)) static void
FUNC_9(const char *VAR_5, int VAR_6)
{
 pid_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 while ((VAR_7 = FUNC_8(VAR_6 || FUNC_5(), &VAR_8)) > 0) {
  if (VAR_2 != 0 && VAR_9 == 0) {
   VAR_3 = VAR_2;
   VAR_6 = 1;
   VAR_9 = VAR_1 ? 127 : 126;
   FUNC_6("%s", VAR_5);
  } else if (FUNC_1(VAR_8)) {
   VAR_6 = VAR_9 = 1;
   FUNC_7("%s: terminated with signal %d; aborting",
       VAR_5, FUNC_2(VAR_8));
  } else if (FUNC_0(VAR_8) == 255) {
   VAR_6 = VAR_9 = 1;
   FUNC_7("%s: exited with status 255; aborting", VAR_5);
  } else if (FUNC_0(VAR_8))
    VAR_4 = 1;
 }

  if (VAR_9)
  FUNC_4(VAR_9);
 if (VAR_7 == -1 && VAR_3 != VAR_0)
  FUNC_3(1, "waitpid");
}
