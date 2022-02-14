
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,char const*) ;
 int FUNC_3 () ;
 int * FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;

void FUNC_6(void)
{
 const char *VAR_2 = "refs/remotes/nonexistent/master";
 git_buf VAR_3;

 FUNC_3();
 FUNC_5(&VAR_3, 0, sizeof(git_buf));
 FUNC_1(FUNC_2(&VAR_3, VAR_1, VAR_2), VAR_0);
 FUNC_0(FUNC_4() != ((void*)0));
}
