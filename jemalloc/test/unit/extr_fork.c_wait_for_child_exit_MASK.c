
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_6(int VAR_0) {
 int VAR_1;
 while (1) {
  if (FUNC_5(VAR_0, &VAR_1, 0) == -1) {
   FUNC_4("Unexpected waitpid() failure.");
  }
  if (FUNC_2(VAR_1)) {
   FUNC_4("Unexpected child termination due to "
       "signal %d", FUNC_3(VAR_1));
   break;
  }
  if (FUNC_1(VAR_1)) {
   if (FUNC_0(VAR_1) != 0) {
    FUNC_4("Unexpected child exit value %d",
        FUNC_0(VAR_1));
   }
   break;
  }
 }
}
