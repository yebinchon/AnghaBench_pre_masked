
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test {scalar_t__ t_test_func; } ;
typedef int i ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,int *,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,int*,size_t*,int *,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int *) ;

int
FUNC_5(int VAR_9, int VAR_10, struct test *VAR_11)
{
 size_t VAR_12;
 int VAR_13;

 VAR_12 = sizeof(VAR_13);
 if (FUNC_2(VAR_0, &VAR_13, &VAR_12, ((void*)0), 0) < 0) {
  FUNC_3("priv_acct_setup: sysctlbyname(%s)", VAR_0);
  return (-1);
 }
 if (VAR_13 != 0) {
  FUNC_4("sysctlbyname(%s) indicates accounting configured",
      VAR_0);
  return (-1);
 }
 FUNC_1("priv_acct_setup: fpath1", VAR_1, 0, 0, 0666);
 VAR_2 = 1;
 FUNC_1("priv_acct_setup: fpath2", VAR_3, 0, 0, 0666);
 VAR_4 = 1;

 if (VAR_11->t_test_func == VAR_6 ||
     VAR_11->t_test_func == VAR_7) {
  if (FUNC_0(((void*)0)) != 0) {
   FUNC_3("priv_acct_setup: acct(NULL)");
   return (-1);
  }
 } else if (VAR_11->t_test_func == VAR_5 ||
      VAR_11->t_test_func == VAR_8) {
  if (FUNC_0(VAR_1) != 0) {
   FUNC_3("priv_acct_setup: acct(\"%s\")", VAR_1);
   return (-1);
  }
 }
 return (0);
}
