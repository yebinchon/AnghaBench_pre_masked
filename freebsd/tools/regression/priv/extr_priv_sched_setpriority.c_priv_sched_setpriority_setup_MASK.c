
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {scalar_t__ t_test_func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(int VAR_5, int VAR_6, struct test *VAR_7)
{
 int VAR_8, VAR_9;





 VAR_9 = 0;
 if (VAR_7->t_test_func == VAR_3) {
  VAR_9 = 1;
  VAR_8 = 1;
 }
 if (VAR_7->t_test_func == VAR_4)
  VAR_9 = 1;

 if (VAR_9) {
  VAR_1 = FUNC_1();
  if (VAR_1 < 0) {
   FUNC_4("priv_sched_setup: fork");
   return (-1);
  }
  if (VAR_1 == 0) {
   if (VAR_8) {
    if (FUNC_2(VAR_0, VAR_0,
        VAR_0) < 0)
    FUNC_0(-1, "setresuid(%d)", VAR_0);
   }
   while (1)
    FUNC_3(1);
  }
  VAR_2 = 1;
  FUNC_3(1);
 }
 return (0);
}
