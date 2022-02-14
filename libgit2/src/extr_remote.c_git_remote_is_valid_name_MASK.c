
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_refspec ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;

int FUNC_6(
 const char *VAR_1)
{
 git_buf VAR_2 = VAR_0;
 git_refspec VAR_3;
 int VAR_4 = -1;

 if (!VAR_1 || *VAR_1 == '\0')
  return 0;

 FUNC_2(&VAR_2, "refs/heads/test:refs/remotes/%s/test", VAR_1);
 VAR_4 = FUNC_5(&VAR_3, FUNC_0(&VAR_2), 1);

 FUNC_1(&VAR_2);
 FUNC_4(&VAR_3);

 FUNC_3();
 return VAR_4 == 0;
}
