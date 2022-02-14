
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*,int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ) ;

void FUNC_6(void)
{
 git_config *VAR_1;
 int VAR_2;

 FUNC_2(FUNC_5(&VAR_1, FUNC_1("config/config9")));

 VAR_2 = 0;
 FUNC_2(
  FUNC_3(VAR_1, "core.*", VAR_0, &VAR_2));
 FUNC_0(3, VAR_2);

 VAR_2 = 0;
 FUNC_2(
  FUNC_3(VAR_1, "remote\\.ab.*", VAR_0, &VAR_2));
 FUNC_0(2, VAR_2);

 VAR_2 = 0;
 FUNC_2(
  FUNC_3(VAR_1, ".*url$", VAR_0, &VAR_2));
 FUNC_0(2, VAR_2);

 VAR_2 = 0;
 FUNC_2(
  FUNC_3(VAR_1, ".*dummy.*", VAR_0, &VAR_2));
 FUNC_0(2, VAR_2);

 VAR_2 = 0;
 FUNC_2(
  FUNC_3(VAR_1, ".*nomatch.*", VAR_0, &VAR_2));
 FUNC_0(0, VAR_2);

 FUNC_4(VAR_1);
}
