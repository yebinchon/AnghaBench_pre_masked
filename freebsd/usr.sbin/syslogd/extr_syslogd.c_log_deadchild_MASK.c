
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,int,char const*,char const*,int) ;

__attribute__((used)) static void
FUNC_5(pid_t VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4;
 char VAR_5[256];
 const char *VAR_6;

 VAR_0 = 0;
 if (FUNC_1(VAR_2)) {
  VAR_6 = "due to signal";
  VAR_4 = FUNC_2(VAR_2);
 } else {
  VAR_6 = "with status";
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 == 0)
   return;
 }
 (void)FUNC_4(VAR_5, sizeof VAR_5,
         "Logging subprocess %d (%s) exited %s %d.",
         VAR_1, VAR_3, VAR_6, VAR_4);
 FUNC_3(VAR_5);
}
