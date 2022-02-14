
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct test {int dummy; } ;
struct TYPE_5__ {int rlim_cur; int rlim_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(int VAR_4, int VAR_5, struct test *VAR_6)
{

 if (FUNC_0(VAR_0, &VAR_2) < 0) {
  FUNC_2("priv_proc_setrlimit_setup: getrlimit");
  return (-1);
 }






 VAR_3 = VAR_2;
 VAR_3.rlim_cur -= 20;
 VAR_3.rlim_max -= 10;
 if (FUNC_1(VAR_0, &VAR_3) < 0) {
  FUNC_2("priv_proc_setrlimit_setup: setrlimit");
  return (-1);
 }
 VAR_1 = 1;
 return (0);
}
