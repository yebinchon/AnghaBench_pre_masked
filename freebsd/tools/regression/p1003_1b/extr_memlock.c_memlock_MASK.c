
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

int FUNC_6(int VAR_5, char *VAR_6[])
{
 int VAR_7 = 0;



 VAR_3 = 0;
 if (FUNC_5(VAR_2) == -1) {
  if (VAR_3 != 0) {


   FUNC_4("(should not happen) sysconf(_SC_MEMLOCK)");
  }
  else {
   FUNC_0(VAR_4,
   "Memory locking is not supported in this environment.\n");
   VAR_7 = -1;
  }
 }



 if (FUNC_1(VAR_0 | VAR_1) == -1) {
  FUNC_3("mlockall(MCL_CURRENT | MCL_FUTURE)");
  VAR_7 = VAR_3;
 }
 else if (FUNC_2() == -1) {
  FUNC_3("munlockall");
  VAR_7 = VAR_3;
 }

 return VAR_7;
}
