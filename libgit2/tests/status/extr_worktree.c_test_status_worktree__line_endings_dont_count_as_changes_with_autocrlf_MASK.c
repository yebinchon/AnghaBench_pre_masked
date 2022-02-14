
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (unsigned int*,int *,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_1 = FUNC_3("status");
 unsigned int VAR_2;

 FUNC_4(VAR_1, "core.autocrlf", 1);

 FUNC_2("status/current_file", "current_file\r\n");

 FUNC_1(FUNC_5(&VAR_2, VAR_1, "current_file"));





 FUNC_0(VAR_0, VAR_2);
}
