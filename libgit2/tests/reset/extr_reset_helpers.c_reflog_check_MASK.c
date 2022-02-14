
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reflog_entry ;
typedef int git_reflog ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char const*) ;

void FUNC_9(git_repository *VAR_0, const char *VAR_1,
  size_t VAR_2, const char *VAR_3, const char *VAR_4)
{
 git_reflog *VAR_5;
 const git_reflog_entry *VAR_6;

 FUNC_0(VAR_3);

 FUNC_3(FUNC_8(&VAR_5, VAR_0, VAR_1));
 FUNC_1(VAR_2, FUNC_6(VAR_5));
 VAR_6 = FUNC_4(VAR_5, 0);

 if (VAR_4)
  FUNC_2(VAR_4, FUNC_5(VAR_6));

 FUNC_7(VAR_5);
}
