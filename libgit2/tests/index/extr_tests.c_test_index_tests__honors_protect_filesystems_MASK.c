
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char*) ;

void FUNC_7(void)
{
 git_repository *VAR_0;

 FUNC_5("invalid", 0700);

 FUNC_1(FUNC_4(&VAR_0, "./invalid", 0));

 FUNC_2(VAR_0, "core.protectHFS", 1);
 FUNC_2(VAR_0, "core.protectNTFS", 1);

 FUNC_6(VAR_0, ".git./hello");
 FUNC_6(VAR_0, ".git\xe2\x80\xad/hello");
 FUNC_6(VAR_0, "git~1/hello");
 FUNC_6(VAR_0, ".git\xe2\x81\xaf/hello");

 FUNC_3(VAR_0);

 FUNC_0("invalid");
}
