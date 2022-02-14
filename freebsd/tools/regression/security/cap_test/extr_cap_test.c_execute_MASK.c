
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {char* t_name; int (* t_run ) () ;} ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (char*,char*,int,char*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__,int*,int ) ;

int
FUNC_8(int VAR_2, struct test *VAR_3) {
 int VAR_4;

 pid_t VAR_5 = FUNC_4();
 if (VAR_5 < 0)
  FUNC_2(-1, "fork");
 if (VAR_5) {

  int VAR_6;
  while (FUNC_7(VAR_5, &VAR_6, 0) != VAR_5) {}
  if (FUNC_1(VAR_6))
   VAR_4 = FUNC_0(VAR_6);
  else
   VAR_4 = VAR_0;
 } else {

  FUNC_3(VAR_3->t_run());
 }

 FUNC_5("%s %d - %s\n",
  (VAR_4 == VAR_1) ? "ok" : "not ok",
  VAR_2, VAR_3->t_name);

 return (VAR_4);
}
