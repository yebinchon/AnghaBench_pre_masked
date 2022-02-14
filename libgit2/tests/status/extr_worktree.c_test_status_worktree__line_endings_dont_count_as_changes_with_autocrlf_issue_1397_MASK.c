
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (unsigned int*,int *,char*) ;

void FUNC_5(void)
{
 git_repository *VAR_1 = FUNC_2("issue_1397");
 unsigned int VAR_2;

 FUNC_3(VAR_1, "core.autocrlf", 1);

 FUNC_1(FUNC_4(&VAR_2, VAR_1, "crlf_file.txt"));

 FUNC_0(VAR_0, VAR_2);
}
