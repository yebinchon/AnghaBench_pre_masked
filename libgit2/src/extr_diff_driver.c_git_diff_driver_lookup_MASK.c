
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_diff_driver ;
typedef int git_attr_session ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 int VAR_3 ;
 int FUNC_3 (int **) ;
 int FUNC_4 (char const**,int *,int *,int ,char const*,int,char const**) ;
 int FUNC_5 (int **,int *,char const*) ;
 int FUNC_6 () ;
 int * VAR_4 ;
 int FUNC_7 (char const*) ;

int FUNC_8(
 git_diff_driver **VAR_5, git_repository *VAR_6,
 git_attr_session *VAR_7, const char *VAR_8)
{
 int VAR_9 = 0;
 const char *VAR_10[1], *VAR_11[] = { "diff" };

 FUNC_3(VAR_5);
 *VAR_5 = ((void*)0);

 if (!VAR_6 || !VAR_8 || !FUNC_7(VAR_8))
                               ;
 else if ((VAR_9 = FUNC_4(VAR_10, VAR_6,
   VAR_7, 0, VAR_8, 1, VAR_11)) < 0)
                          ;

 else if (FUNC_2(VAR_10[0]))
                               ;
 else if (FUNC_0(VAR_10[0]))
  *VAR_5 = &VAR_4[VAR_1];
 else if (FUNC_1(VAR_10[0]))
  *VAR_5 = &VAR_4[VAR_2];


 else if ((VAR_9 = FUNC_5(VAR_5, VAR_6, VAR_10[0])) < 0) {
  if (VAR_9 == VAR_3) {
   VAR_9 = 0;
   FUNC_6();
  }
 }

 if (!*VAR_5)
  *VAR_5 = &VAR_4[VAR_0];

 return VAR_9;
}
