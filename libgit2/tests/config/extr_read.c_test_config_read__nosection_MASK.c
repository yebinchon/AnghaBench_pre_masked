
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int **,int ) ;
 int VAR_2 ;

void FUNC_9(void)
{
 git_config *VAR_3;
 git_buf VAR_4 = VAR_0;
 int VAR_5 = 0;

 FUNC_3(FUNC_8(&VAR_3, FUNC_1("config/config-nosection")));
 FUNC_2(FUNC_7(&VAR_4, VAR_3, "key"), VAR_1);

 FUNC_3(FUNC_5(VAR_3, VAR_2, &VAR_5));
 FUNC_0(VAR_5, 1);

 FUNC_4(&VAR_4);
 FUNC_6(VAR_3);
}
