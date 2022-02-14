
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char*,...) ;

void FUNC_6(void)
{
 git_buf VAR_1 = VAR_0;
 FUNC_5(&VAR_1, "%s %s %d ", "shoop", "da", 23);
 FUNC_0(FUNC_4(&VAR_1) == 0);
 FUNC_1(FUNC_2(&VAR_1), "shoop da 23 ");

 FUNC_5(&VAR_1, "%s %d", "woop", 42);
 FUNC_0(FUNC_4(&VAR_1) == 0);
 FUNC_1(FUNC_2(&VAR_1), "shoop da 23 woop 42");
 FUNC_3(&VAR_1);
}
