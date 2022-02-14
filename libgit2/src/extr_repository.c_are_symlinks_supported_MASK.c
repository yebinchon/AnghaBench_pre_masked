
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int*,int *,char*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int **,int *,int ,int ,int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static bool FUNC_10(const char *VAR_1)
{
 git_config *VAR_2 = ((void*)0);
 git_buf VAR_3 = VAR_0;
 git_buf VAR_4 = VAR_0;
 git_buf VAR_5 = VAR_0;
 git_buf VAR_6 = VAR_0;
 int VAR_7 = 0;
 if (!(VAR_7 = FUNC_7(VAR_1)))
  goto done;

done:
 FUNC_0(&VAR_3);
 FUNC_0(&VAR_4);
 FUNC_0(&VAR_5);
 FUNC_0(&VAR_6);
 FUNC_5(VAR_2);
 return VAR_7 != 0;
}
