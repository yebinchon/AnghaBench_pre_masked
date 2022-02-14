
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*,...) ;
 scalar_t__ FUNC_4 (int ,int*,int ) ;

int
FUNC_5(pid_t VAR_1, const char *VAR_2)
{
 int VAR_3;

 if (FUNC_4(VAR_1, &VAR_3, VAR_0) > 0) {
  if (FUNC_0(VAR_3)) {
   FUNC_3("check_child: lost child %s exited", VAR_2);
   return (1);
  }
  if (FUNC_1(VAR_3)) {
   FUNC_3("check_child: lost child %s terminated; "
       "signal %d", VAR_2, FUNC_2(VAR_3));
   return (1);
  }
 }
 return (0);
}
