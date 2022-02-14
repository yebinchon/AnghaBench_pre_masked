
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_buf VAR_3 = VAR_0;

 FUNC_2(&VAR_2, "tester");

 FUNC_3("tester", 0, "tester/.git/", "tester/");

 FUNC_1(
  FUNC_6(&VAR_3, FUNC_9(VAR_1), "description"));
 FUNC_0(FUNC_8(FUNC_4(&VAR_3)));

 FUNC_1(
  FUNC_6(&VAR_3, FUNC_9(VAR_1), "info/exclude"));
 FUNC_0(FUNC_8(FUNC_4(&VAR_3)));

 FUNC_1(
  FUNC_6(&VAR_3, FUNC_9(VAR_1), "hooks"));
 FUNC_0(FUNC_7(FUNC_4(&VAR_3)));


 FUNC_5(&VAR_3);
}
