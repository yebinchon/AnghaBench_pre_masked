
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,char*,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *,char*) ;

void FUNC_6(void)
{
 git_repository *VAR_0;

 FUNC_4("invalid", 0700);

 FUNC_1(FUNC_3(&VAR_0, "./invalid", 0));

 FUNC_5(VAR_0, ".git/hello");
 FUNC_5(VAR_0, ".GIT/hello");
 FUNC_5(VAR_0, ".GiT/hello");
 FUNC_5(VAR_0, "./.git/hello");
 FUNC_5(VAR_0, "./foo");
 FUNC_5(VAR_0, "./bar");
 FUNC_5(VAR_0, "foo/../bar");

 FUNC_2(VAR_0);

 FUNC_0("invalid");
}
